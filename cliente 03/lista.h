#include <iostream>
#include <string.h>
#include "cliente.h"

#ifndef LISTA_H
#define LISTA_H

using namespace std;

class lista
{
private:
    int tam;
    int quant;
    Cliente *list;

public:
    lista();
    lista(int tam);

    lista(const lista &outro);
    virtual ~lista();

    void criaLista();

    void preencherlista();
    
    void insert(Cliente a);
    void shiftEnd();

    void shiftFront();
    void remove();

    void imprime();
};

#endif