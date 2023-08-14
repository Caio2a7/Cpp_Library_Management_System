#ifndef LIVRO_H_
#define LIVRO_H_
#include <string>
#include "autor.hpp"
#include "cliente.hpp"

class Livro{
protected:
    std::string titulo;
    Autor autor_livro;
    Cliente *cliente=nullptr;
    size_t ano_de_publicacao;
    size_t numero_da_edicao;
    size_t numero_de_paginas;
public:
    Livro(){}
    //n_algumacoisa ou novo_algumacoisa
    Livro(std::string n_titulo, Autor n_autor_livro, Cliente novo_cliente, int n_ano_de_publicacao, float n_numero_da_edicao, int n_numero_de_paginas){
        titulo = n_titulo;
        autor_livro = n_autor_livro;
        cliente = new Cliente;
        *cliente = novo_cliente;
        ano_de_publicacao = n_ano_de_publicacao;
        numero_da_edicao = n_numero_da_edicao;
        numero_de_paginas = n_numero_de_paginas;};
    Autor get_autor() {
        return autor_livro;}
    std::string getTitulo() const {return titulo;}
    Cliente getCliente() const {return *cliente;}
    size_t getAnoPubli() const {return ano_de_publicacao;}
    void setAnoPubli(int n_ano_publi){ano_de_publicacao = n_ano_publi;}
    size_t getNumeroEdicao() const {return numero_da_edicao;}
    void setNumEdicao(int n_num_edicao){numero_da_edicao = n_num_edicao;}
    size_t getNumeroPaginas() const {return numero_de_paginas;}
    void setNumPaginas(int n_num_paginas){numero_de_paginas = n_num_paginas;}

    void impressao(Livro livro){
    std::cout<<"-----------*LIVRO INFORMAÇÕES*-----------"<<std::endl;
    std::cout << "-Titulo: " << livro.titulo << std::endl;
    std::cout << "-Autor: " << livro.get_autor().nome << std::endl;
    std::cout << "-Ano de Publicaçãoo: " << livro.ano_de_publicacao << std::endl;
    std::cout << "-Numero de Páginas: " << livro.numero_de_paginas << std::endl;
    std::cout << "-Numero da Edição: " << livro.numero_da_edicao << std::endl;
    std::cout << "| | Ultimo Cliente | |" << std::endl;;
    std::cout<<"-----------*CLIENTE INFORMAÇÕES*-----------"<<std::endl;
    std::cout << "-Nome: " << livro.cliente->get_nome() << std::endl;
    std::cout << "-Idade: " << livro.cliente->get_idade() << std::endl;
    std::cout << "-Email: " << livro.cliente->get_email() << std::endl;
    std::cout << "-Telefone: " << livro.cliente->get_telefone() << std::endl << std::endl;
    }
    
    ~Livro(){
        delete cliente;
    }
};
#endif