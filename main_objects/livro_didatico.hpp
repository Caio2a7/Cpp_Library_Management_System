#ifndef LIVRO_DIDATICO_H_
#define LIVRO_DIDATICO_H_
#include "livro.hpp"
#include <string>

class Livro_Didatico : public Livro{
protected:
    std::string disciplina;
    size_t nivel_de_ensino;
    Autor autor;
    Cliente *cliente=nullptr;
public:
    Livro_Didatico(){}
    Livro_Didatico(std::string nova_disciplina, Autor n_autor, Cliente n_cliente, int novo_nivel_de_ensino){
        cliente = new Cliente;
        *cliente = n_cliente;
        autor = n_autor;
        disciplina = nova_disciplina;
        nivel_de_ensino = novo_nivel_de_ensino;};
    void imprimirDados(Livro_Didatico livro_didatico){
        std::cout<<"-------------LIVRO DIDATICO-----------"<<std::endl
        <<"Disciplina: "<<livro_didatico.disciplina<<std::endl
        <<"Autor Nome: "<< livro_didatico.autor.nome<< std::endl
        <<"Nivel de Ensino: "<<livro_didatico.nivel_de_ensino<<std::endl<<std::endl
        <<"-----------*CLIENTE INFORMAÇÕES*-----------"<<std::endl
        << "-Nome: " << livro_didatico.cliente->get_nome() << std::endl
        << "-Idade: " << livro_didatico.cliente->get_idade() << std::endl
        << "-Email: " << livro_didatico.cliente->get_email() << std::endl
        << "-Telefone: " << livro_didatico.cliente->get_telefone() << std::endl << std::endl;}
};

#endif