#include <iostream>
#include "pilha.h"
using namespace std;




pilha::pilha(int tam)
{
    this->quant = 0;
    this->tam = tam;
    this->pilh = new Cliente[tam];
}

void pilha::push(Cliente a)
{
    if (this->quant < this->tam)
    {
        this->shiftEnd();
        this->pilh[0].copia(a);
        this->quant++;
    }
    else
    {
        cout << "Lista cheia" << endl;
    }
}

void pilha::shiftEnd()
{
    for (int i = quant; i >= 1; i--)
    {
        this->pilh[i] = this->pilh[i - 1];
        this->pilh[i].copia(this->pilh[i - 1]);
    }
}

void pilha::pop()
{
    if (this->quant > 0)
    {
        this->shiftFront();
        this->quant--;
    }
    else
    {
        cout << "Lista vazia." << endl;
    }
}

void pilha::shiftFront()
{
    for (int i = 0; i <= quant - 1; i++)
    {
        this->pilh[1].copia(this->pilh[i + 1]);
    }
}

void pilha::preencherPilha()
{
    for (int i = 0; i <= tam; i++)
    {
        pilh[i].preencherCampos();
        cout << "indice i= " << i << endl;
        quant++;
    }
}

void pilha::imprime()
{
    cout << "pilha de clientes: " << endl;
    for (int i = 0; i <= quant - 1; i++)
    {
        cout <<"Cliente numero: "<<i<<endl;
         this->pilh[i].imprime();
    }
}

pilha::pilha(const pilha &orig)
{
}

pilha::~pilha()
{
}