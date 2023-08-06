#include <stdio.h>

                                            /*Funções de gestão de pedidos de memória externa*/
//  Permite requisitar um bloco de memória do tamanho pretendido pelo programador, o parametro tamanho representa o número de octetos 
// que se pretende reservar. Devolve um apontador para o primeiro octeto da memória reservada, ou NULL caso não haja memória disponivel ou erro. 
void *malloc(size_t tamanho);

//  Permite requisitar um bloco de memória para um conjunto de elementos de tamanho igual. O parametro 'num' especifica o número de elementos
//  O parâmetro tamanho especifica o número de octetos ocupados por cada elemento. Inicializa toda a memória reservada a zeros. 
//  Devolve um apontador para o primeiro octeto de memória reservada, ou NULL caso não haja memória ou em caso de erro. 
void *calloc(size_t num, size_t tamanho);

//  Permite redimensionar (aumentar ou diminuir) para 'novo_tamanho' o tamanho de um bloco de memória previamente reservadopor uma das funções 
// malloc, calloc, realloc, e apontado pelo parametro prt.
//  Sempre que possivel o realloc redimensiona o bloco de memória e devolve o apontador original 'prt'.
void *realloc(void *ptr, size_t novo_tamanho);

//  Permite libertar memória requerida com as funções malloc, calloc, realloc. O parâmetro ptr especifica o endereço do inicio do blocode 
// memória a libertar.
void free(void *ptr);




/*
    Notas:  O tipo de dados size_t está nos parâmetros anteriores para especificar o tamanho de memória pretendida, 
            está definido pelo C como unsigned char.
*/