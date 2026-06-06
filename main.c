#include <stdio.h>
#include <string.h>
// Representação do conjunto de estados de um autômato finito determinístico (AFD) usando enumeração em C.
    typedef enum {
        Q0,
        Q1,
        Q2
} State;
// Tabela de transição do AFD, onde cada linha representa um estado atual e cada coluna representa uma entrada (0 ou 1).
int main () {
    State delta [3][2] = { // Matriz de estados do AFD (A escolha reflete a decisão de posteriormente aumentarmos para mais estados, caso necessário) 
        {Q0,Q1},
        {Q1,Q2},
        {Q2,Q0}
/*
Estado atual	Entrada 0	Entrada 1
Q0	Q0	Q1
Q1	Q1	Q2
Q2	Q2	Q0
*/
    };

    State current = Q0;
    current = delta[current][1]; // Executa uma transição com a entrada 1

    char* names [] = {"Q0", "Q1", "Q2"};
    printf("Current state: %s\n", names[current]);

return 0;
}
/*
Este codigo pode ser reutilizado para criar um AFD mais complexo, basta adicionar mais estados e atualizar a tabela de transição (delta) de acordo. O exemplo acima é um AFD simples com três estados e transições baseadas em entradas binárias (0 e 1).
*/