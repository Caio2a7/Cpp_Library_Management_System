#include <iostream>
#include <string>
#include <fstream>
#include <vector>
class Editor {
private:
    std::vector<std::string> acervo;

public:
    void adicionarLivro(const std::string& livro) {
        acervo.push_back(livro);
    }

    void escreverNoArquivo() {
        std::ofstream arquivo("acervo.txt");

        if (!arquivo.is_open()) {
            std::cerr << "Erro ao abrir o arquivo." << std::endl;
            return;
        }

        for (const std::string& livro : acervo) {
            arquivo << livro << std::endl;
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

int main() {
    Editor minhaBiblioteca;
    
    minhaBiblioteca.adicionarLivro("Dom Casmurro");
    minhaBiblioteca.adicionarLivro("O Pequeno Príncipe");
    minhaBiblioteca.adicionarLivro("Harry Potter e a Pedra Filosofal");

    minhaBiblioteca.escreverNoArquivo();

    std::cout << "Strings adicionadas ao vetor e escritas no arquivo acervo.txt." << std::endl;

    minhaBiblioteca.lerDoArquivo();

    return 0;
}