#include <iostream>
#include <cstring>
#include <string>


#include "funcionario.h"

Funcionario::Funcionario(){

}

Funcionario::~Funcionario(){

}

std::string
Funcionario::getNomeFunc(){
	return m_nomefunc;
}

void
Funcionario::setNomeFunc(std::string nomefunc_){
	m_nomefunc = nomefunc_;
}

int
Funcionario::getIdade(){
	return m_idade;
}

void
Funcionario::setIdade(int idade_){
	m_idade = idade_;
}

Data
	Funcionario::getDataAdm(){
	return m_dataadm;
}

void
Funcionario::setDataAdm(Data dataadm_){
	m_dataadm = dataadm_;
}

std::istream&
operator>> (std::istream &i, Funcionario &p) { 
	std::cout << "Digite o nome: ";
	i >> p.m_nomefunc;
	std::cout << "Digite a idade: ";
	i >> p.m_idade;
	std::cout << "Digite a data de admissão: ";
	i >> p.m_dataadm;
	std::cout << "Digite o salário: ";
	i >> p.m_salario;
	return i;
}

std::ostream& operator<< (std::ostream &o, Funcionario const p) { 
	o << p.m_nomefunc << " - " << p.m_idade << " - " << p.m_dataadm << " - " << p.m_salario;
	return o;
} 

//facilitar leitura e escrita do objeto