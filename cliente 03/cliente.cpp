#include <cstdlib>
#include <iostream>
#include <string.h>
#include "cliente.h"

using namespace std;

Cliente::Cliente()
{
    //this->nome = " ";
    this->sexo = 0;
    this->idade = 0;
    this->cpf = 0;
    this->telefone = 0;
}

Cliente::Cliente(/*string nome,*/ char sexo, int idade, long long int cpf,long long int telefone)
{
//    this->nome = nome;
    this->sexo = sexo;
    this->idade = idade;
    this->cpf = cpf;
    this->telefone = telefone;
}

Cliente::Cliente(const Cliente &outro)
{
//    this->nome = outro.getNome();
    this->sexo = outro.getSexo();
    this->idade = outro.getIdade();
    this->cpf = outro.getCpf();
    this->telefone = outro.getTelefone();
}

Cliente::~Cliente()
{
}

void Cliente::copia(Cliente comprador)
{
//    this->nome = comprador.getNome();
    this->sexo = comprador.getSexo();
    this->idade = comprador.getIdade();
    this->cpf = comprador.getCpf();
    this->telefone = comprador.getTelefone();
}

void Cliente::preencherCampos()
{
//    cout << "Digite seu nome: ";
//    cin >> this->nome;
    cout << "Digite F (Feminino) ou M (Masculino): ";
    cin >> this->sexo;
    cout << "Digite sua idade: ";
    cin >> this->idade;
    cout << "Digite seu cpf: ";
    cin >> this->cpf;
    cout << "Digite seu telefone: "<<endl;
    cin >> this->telefone;
}

void Cliente::imprime()
{
//    cout << "Nome: " << this->nome << endl;
    cout<<"------------------------"<<endl;
    cout << "Sexo: " << this->sexo << endl;
    cout<<"------------------------"<<endl;
    cout << "Idade: " << this->idade << endl;
    cout<<"------------------------"<<endl;
    cout << "Cpf: " << this->cpf << endl;
    cout<<"------------------------"<<endl;
    cout << "Telefone: " << this->telefone << endl;
    cout<<"------------------------"<<endl;
}

/*void Cliente::setNome(string nome)
{
    this->nome = nome;
}
string Cliente::getNome() const
{
    return nome;
}*/
void Cliente::setSexo(char sexo)
{
    this->sexo = sexo;
}
char Cliente::getSexo() const
{
    return sexo;
}
void Cliente::setIdade(int idade)
{
    this->idade = idade;
}
int Cliente::getIdade() const
{
    return idade;
}
void Cliente::setCpf(long long int cpf)
{
    this->cpf = cpf;
}
long long int Cliente::getCpf() const
{
    return cpf;
}
void Cliente::setTelefone(long long int telefone)
{
    this->telefone = telefone;
}
long long int Cliente::getTelefone() const
{
    return telefone;
}