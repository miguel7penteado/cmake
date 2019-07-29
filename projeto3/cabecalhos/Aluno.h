#include<string>

class Aluno
{
private:
	std::string nome;
public:
	Aluno(std::string);
	virtual void mostra();
};
