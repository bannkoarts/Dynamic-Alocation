#include <iostream>
#include <stdio.h>//para funcao gets
#include <stdlib.h> //para funcao malloc (memory allocation)

using namespace std;

int main()
{
    //char vnome[50];//posicoes reservadas nn utilizadas

    char *vnome;
    vnome = (char */*coversao para o tipo char*/) malloc(sizeof(char)+1/*espaco reserva pro finalizador +1*/);
    //funcao malloc tem retorno void - necessario converter para tipo char(tapecast)
    //sizeof indica o tamanho de cada bloco int = 4 bytes, char = 1 byte

    gets(vnome);

    cout << vnome;
    return 0;
}
