#include <cstdlib>
#include <iostream>
#include <string.h>

using namespace std;

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente
{
private:
//    string nome;
    char sexo;
    int idade;
    long long int cpf;
    long long int telefone;

public:
    Cliente();
    Cliente(/*string nome,*/ char sexo, int idade,long long int cpf, long long int telefone);
    Cliente(const Cliente &outro);
    virtual ~Cliente();
/*
    void setNome(string nome);
    string getNome() const;
*/
    void setSexo(char sexo);
    char getSexo() const;

    void setIdade(int idade);
    int getIdade() const;

    void setCpf(long long int cpf);
    long long int getCpf() const;

    void setTelefone(long long int telefone);
    long long int getTelefone() const;

    void copia(Cliente C);
    void preencherCampos();
    void imprime();
};

#endif