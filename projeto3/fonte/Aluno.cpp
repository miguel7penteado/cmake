#include <iostream>
#include "Aluno.h"
using namespace std;

Aluno::Aluno(string nome):nome(nome){}

void Aluno::mostra()
{
	cout << "O Aluno se chama " << this->nome << endl;
}

