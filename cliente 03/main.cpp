#include <cstdlib>
#include <iostream>
#include "lista.h"
#include "cliente.h"
#include "pilha.h"
#include <string.h>

using namespace std;

int main()
{   Cliente c;
    c.copia(c);

    pilha p1(2);
    p1.preencherPilha();
    p1.push(c);
    p1.imprime();

    /*                  
    lista listaA(2);
    listaA.preencherlista();
  
    listaA.insert(c);
    listaA.imprime();
*/
    return 0;
}