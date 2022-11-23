#include <cstdlib>
#include <iostream>
#include <string.h>
#include "lista.h"

using namespace std;
/*
lista::lista()
{
    this->quant = 0;
    do
    {
        cout << "Informe o numero de clientes:";
        cin >> this->tam;
    } while (tam < 0);

    this->criaLista();
}*/
/*
void lista::criaLista()
{
    //this->quant = 0;

     //   cout << "Informe o numero de clientes:";
      //  cin >> this->tam;

    //this->list = new Cliente[this->tam];

   for (int i = 0; i <= tam - 1; i++)
    {
        this->list[i] = new Cliente();
    }
}
*/
lista::lista(int tam)
{
    this->quant = 0;
    this->tam = tam;
    // this->criaLista();
    this->list = new Cliente[tam];
}

void lista::insert(Cliente a)
{
    if (this->quant < this->tam)
    {
        this->shiftEnd();
        this->list[0].copia(a);
        this->quant++;
    }
    else
    {
        cout << "Lista cheia" << endl;
    }
}

void lista::shiftEnd()
{
    for (int i = quant; i >= 1; i--)
    {
        this->list[i] = this->list[i - 1];
        this->list[i].copia(this->list[i - 1]);
    }
}

void lista::remove()
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

void lista::shiftFront()
{
    for (int i = 0; i <= quant - 1; i++)
    {
        this->list[1].copia(this->list[i + 1]);
    }
}
//**************************Julio*****************
void lista::preencherlista()
{
    for (int i = 0; i <= tam; i++)
    {
        list[i].preencherCampos();
        cout << "indice i= " << i << endl;
        quant++;
    }
}
//************************************************
void lista::imprime()
{
    cout << "lista de clientes: " << endl;
    for (int i = 0; i <= quant - 1; i++)
    {
        cout <<"Cliente numero: "<<i<<endl;
         this->list[i].imprime();
    }
}

lista::lista(const lista &orig)
{
}

lista::~lista()
{
}
