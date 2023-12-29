#include "main_objects/autor.hpp"
#include "main_objects/revista.hpp"
#include "main_objects/cliente.hpp"
#include "main_objects/livro.hpp"
#include "file_management/biblioteca.hpp"
#include "main_objects/livro_didatico.hpp"

void init(){
    Cliente cliente1("Caio Daniel", 18, "caiodan@gmail.com", 986784532);
    Cliente cliente2("Rafael Augusto", 22, "rafale@gmail.com", 89814646);
    Cliente cliente3("Maria Lima", 35, "mariair@gmail.com", 844566201);
    Data data{21, 6, 1839};
    Autor autor("Machado de Assis", data, "Masculino", "Brasileiro");
    Livro livro("Dom Casmurro", autor, cliente1, 1899, 1.0, 208);
    Revista revista("BATMAN ANO UM", cliente2, "DC COMICS", 1987, 1.0, 132);
    Livro_Didatico livro_didatico("Geometria Riemaniana", autor, cliente3, 3);

    livro.impressao(livro);

    autor.impressao(autor, data);

    revista.impressao(revista);

    livro_didatico.imprimirDados(livro_didatico);

}
void preencher(){
    Biblioteca<std::string> * biblioteca = Biblioteca<std::string>::getInstance();
    biblioteca->add_item("-Título: Dom Casmurro");
    biblioteca->add_item("-Autor: Machado de Assis");
    biblioteca->add_item("-AnoPublicação: 1899");
    biblioteca->add_item("-Edição: 1");
    biblioteca->add_item("-NumeroPaginas: 208");
    biblioteca->add_item("-Informações do Cliente:  Caio Daniel | 18 | caiodan@gmail.com | 986784532");
    //pode adicionar as informações dos outros clientes que alugaram (o da revista e livrodidatico se quiseres
    biblioteca->listar_item();
    biblioteca->escreverNoArquivo();
    std::cout << std::endl << ">> Strings adicionadas ao vetor e escritas no arquivo acervo.txt." << std::endl << std::endl;
    biblioteca->pesquisar_item("Dom Casmurro");
    //biblioteca->add_item(livro);  Teste de tratamento de erro
    biblioteca->lerDoArquivo();
    
    delete biblioteca;
}
int main() {

    init();
    preencher();
    return 0;
}