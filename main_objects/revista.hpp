#ifndef REVISTA_H_
#define REVISTA_H
#include "cliente.hpp"

class Revista{ 
private:
    Cliente* cliente=nullptr;
    std::string titulo;
    std::string editora;
    size_t ano_publicacao;
    size_t num_paginas;
    size_t num_edicao;
public:
    Revista(){}
    //n_algumacoisa ou novo_algumacoisa
    Revista(std::string n_titulo, Cliente n_cliente, std::string n_editora, 
    int n_ano_de_publicacao, float n_numero_da_edicao, int n_numero_de_paginas){
        titulo = n_titulo;
        cliente = new  Cliente;
        *cliente = n_cliente;
        editora = n_editora;
        ano_publicacao = n_ano_de_publicacao;
        num_edicao = n_numero_da_edicao;
        num_paginas = n_numero_de_paginas;
    };
    void impressao(Revista revista){
    std::cout<<"-----------*REVISTA INFORMAÇÕES*-----------"<<std::endl;
    std::cout << "-Titulo: " << revista.titulo << std::endl;
    std::cout << "-Editora: " << revista.editora << std::endl;
    std::cout << "-Ano de Publicação: " << revista.ano_publicacao << std::endl;
    std::cout << "-Numero de Páginas: " << revista.num_paginas << std::endl;
    std::cout << "-Numero da Edição: " << revista.num_edicao << std::endl;
    std::cout << "| | Ultimo Cliente | |" << std::endl;
    std::cout<<"-----------*CLIENTE INFORMAÇÕES*-----------"<<std::endl;
    std::cout << "-Nome: " << revista.cliente->get_nome() << std::endl;
    std::cout << "-Idade: " << revista.cliente->get_idade() << std::endl;
    std::cout << "-Email: " << revista.cliente->get_email() << std::endl;
    std::cout << "-Telefone: " << revista.cliente->get_telefone() << std::endl << std::endl;
    }

    ~Revista(){
        delete cliente;
    }
};
#endif