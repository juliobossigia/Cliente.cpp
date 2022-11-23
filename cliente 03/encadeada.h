#include <iostream>
#include "Nodo.h"
using namespace std;

class Encadeada{
    private:
    int quant;
    Nodo* head;

    public:
    Encadeada();
   int   getquant();
   void setquant();
   void insert();

};