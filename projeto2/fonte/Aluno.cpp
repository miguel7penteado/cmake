#include <iostream>
#include "Student.h"
using namespace std;

Aluno::Aluno(string nome):nome(nome){}

void Aluno::mostra()
{
	cout << "Um aluno com o nome " << this->nome << endl;
}

