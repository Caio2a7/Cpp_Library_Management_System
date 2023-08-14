#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>

class Cliente{
private:
    size_t idade;
    std::string email;
    int telefone;
    std::string nome;
public:
    Cliente(){}
    Cliente(std::string n_nome, size_t n_idade, std::string n_email, int n_telefone){  //n_algumacoisa ou novo_algumacoisa
        nome = n_nome;
        idade = n_idade;
        email = n_email;
        telefone = n_telefone;
    };
    ~Cliente(){}
    std::string get_nome() const { return nome; }
    void set_nome(std::string n_nome) { nome = n_nome; }
    size_t get_idade() const { return idade; }
    void set_idade(size_t n_idade) { idade = n_idade; }
    std::string get_email() const { return email; }
    void set_email(std::string n_email) { email = n_email; }
    int get_telefone() const { return telefone; }
    void set_telefone(int n_telefone) { telefone = n_telefone; }
};
#endif