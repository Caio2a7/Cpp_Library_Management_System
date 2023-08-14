#ifndef ITEM_ACERVO_H_
#define ITEM_ACERVO_H_
#include <iostream>
#include <string>

class ItemAcervo{
protected:
    std::string titulo;
    int ano_publicacao;
public:
    ItemAcervo(){}
    ItemAcervo(std::string novo_titulo, int novo_ano_public){
        titulo = novo_titulo;
        ano_publicacao = novo_ano_public;};
    virtual void imprimirDados() = 0;
};
#endif