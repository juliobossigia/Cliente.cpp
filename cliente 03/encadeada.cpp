#include <iostream>
#include "encadeada.h"
#include "Nodo.h"

using namespace std;

    Encadeada::Encadeada(){
        quant=0;
        head= NULL;
    }

   void Encadeada::insert(){
        Cliente c;
        c.preencherCampos();
        Nodo* novo= new Nodo();
        novo->setPessoa(c);
        novo->setProx(head);
        head=novo;
        quant++;

    }