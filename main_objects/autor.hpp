#ifndef AUTOR_HPP
#define AUTOR_HPP
#include "util.hpp"

class Autor {
protected:
    Data data_nascimento;
    std::string genero;
    std::string nacionalidade;

public:
    std::string nome;
    Autor(){}
    //n_algumacoisa ou novo_algumacoisa
    Autor (std::string n_nome, Data n_data_nascimento, std::string n_genero, std::string n_nacionalidade){ 
        nome = n_nome;
        data_nascimento = n_data_nascimento;
        genero = n_genero;
        nacionalidade = n_nacionalidade;
    };
    std::string getnome() const {return nome;}
    void setNome(std::string novo_nome) {nome = novo_nome;}

    void impressao(Autor autor, Data data_nascimento){
    std::cout<<"-----------*AUTOR INFORMAÇÕES*-----------"<<std::endl;
    std::cout << "Nome: " << autor.nome << std::endl;
    std::cout << "Data de Nascimento: " << data_nascimento.dia << "/"<< data_nascimento.mes << "/" << data_nascimento.ano << std::endl;
    std::cout << "Genero: " << autor.genero << std::endl;
    std::cout << "Nacionalidade: " << autor.nacionalidade << std::endl << std::endl;}
};
#endif
