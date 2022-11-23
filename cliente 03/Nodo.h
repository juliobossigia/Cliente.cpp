#include <iostream>
#include "cliente.h"
using namespace std;

class Nodo{
    private:
        Cliente pessoa;
        Nodo* prox;

    public:
        Nodo();
        Nodo(Cliente &c);

        Cliente getPessoa();
        void setPessoa(Cliente &c);
        void setProx ();
    


};