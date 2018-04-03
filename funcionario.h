#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

class Funcionario
{
private:
	std::string	m_nomefunc;
	int			m_idade;
	Data 		m_dataadm;
	double		m_salario;
//criar uma classe data com: dia, mes e ano (metodo const e dest). criar metodo "mais de 90 dias" comparando com a data atual
//metodo "tempo decorrido"
//ex:
//data (5, 8, 2016) d1;
//x = d1.Tempodecorrido (data(23, 9, 2016));
// (23-5, 9-8, 2016-2016) = 49 dias
//quando listar funcionarios a menos de 90 dias: "entre com a data atual (dia, mes, ano)"


public:
	Funcionario();
	~Funcionario();

	std::string getNomeFunc();
	void setNomeFunc(std::string nomefunc_);

	int getIdade();
	void setIdade(int idade_);

	Data getDataAdm();
	void setDataAdm(Data dataadm_);

	double getSalario();
	void setSalario(double salario_);

	void print();

	friend std::istream& operator>> (std::istream &i, Funcionario &p);

	friend std::ostream& operator<< (std::ostream &o, Funcionario const p);
};

#endif