#include <iostream>
using namespace std;
#include "cliente.h"

    class pilha{
        private:
         int tam;
         int quant;
    Cliente *pilh;

    public:
    pilha();
    pilha(int tam);

    pilha(const pilha &outro);
    virtual ~pilha();

    void preencherPilha();
    
    void push(Cliente a);
    void shiftEnd();

    void shiftFront();
    void pop();

    void imprime();



    };
