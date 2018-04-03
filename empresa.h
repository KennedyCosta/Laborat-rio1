#ifndef EMPRESA_H
#define EMPRESA_H

#include "funcionario.h"
#include <string>
#include <cstring>


class Empresa
{
private:
	std::string m_nomeemp;
	char 		m_cnpj[18];
	Funcionario m_empregado[500];
	int			m_totalempregados = 0;
public:
	Empresa();
	~Empresa();

	std::string getNomeemp();
	void setNomeemp(std::string nomeemp_);

	char * getCnpj();
	void setCnpj(const char * cnpj_);

	Funcionario getEmpregado();
	void setEmpregado(Funcionario empregado_);

	void adicionaFuncionario(Funcionario novo_);
//para adicionar funcionario novo, fazer uma comparação entre os funcionarios para identificar se n é repetido
//se for repetido, zera e volta pra adicionar outro, até digitar "0" para sair do laço

	void avisoFuncionario(Funcionario empregado_);

	void print(); //porque usar essa linha de comando?

	friend std::istream& operator>> (std::istream &i, Empresa &p);

	friend std::ostream& operator<< (std::ostream &o, Empresa const p);
};

#endif
cadastro