#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <fstream>

template <typename T>
class Biblioteca {
private:
    static Biblioteca* instancia;
    std::vector<T> armazenamento;
    Biblioteca() {}

public:
    static Biblioteca* getInstance() {
        if (instancia == nullptr) {
            instancia = new Biblioteca();
        }
        return instancia;
    }

    void add_item(const T& Item) {
        armazenamento.push_back(Item);
    }

    template <typename U>
    bool pesquisar_item(const U& elemento) {
        for (const T& item : armazenamento) {
            if (elemento == item) {
                std::cout << "Elemento encontrado!" << std::endl <<std::endl;
                return true;
            }
        }
        return false;
    }

    void listar_item() {
        std::cout<<"-----------BIBLIOTECA LISTA DOS ITENS-----------"<<std::endl;
        for (const T& item : armazenamento) {
            std::cout << item << std::endl;
        }
    }

    void escreverNoArquivo() {
        std::ofstream arquivo("acervo.txt");
        if (!arquivo.is_open()) {
            std::cerr << "Erro ao abrir o arquivo." << std::endl;
            return;
        }
        for (const T& elemento : armazenamento) {
            arquivo << elemento << std::endl;
        }
        arquivo.close();
    }

    void lerDoArquivo() {
        std::ifstream arquivo("acervo.txt");
        if (!arquivo.is_open()) {
            std::cerr << "Erro ao abrir o arquivo." << std::endl;
            return;
        }
        std::string linha;
        while (std::getline(arquivo, linha)) {
            std::cout << "Lido do arquivo: " << linha << std::endl;
        }
        arquivo.close();
    }
};

template <typename T>
Biblioteca<T>* Biblioteca<T>::instancia = nullptr;

#endif