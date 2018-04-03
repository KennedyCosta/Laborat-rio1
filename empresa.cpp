#include <iostream>
#include <cstring>
#include <string>

#include "empresa.h"

Empresa::Empresa(){

}

Empresa::~Empresa(){

}

std::string
Empresa::getNomeemp(){
	return m_nomeemp;
}

void
Empresa::setNomeemp(std::string nomeemp_){
	m_nomeemp = nomeemp_;
}
char *
Empresa::getCnpj(){
	return m_cnpj;
}

void
Empresa::SetCnpj(const char * cnpj_){
	strcpy (m_cnpj, cnpj_);
}

void
Empresa::adicionaFuncionario(Funcionario novo_){
//adicionar condição if para comparar se o funcionário
//para verificar se o funcionário já foi adicionado antes
//se sim, mostrar mensagem de erro e volta para adicionar outro.
	m_empregado[m_totalempregados++] = novo_;
}


std::istream&
operator>> (std::istream &i, Funcionario &p) {
	std::cout << "Digite o nome da Empresa: ";
	i >> p.m_nomeemp;
	std::cout << "Digite o CNPJ: ";
	i >> p.cnpj;
	return i;
}

std::ostream& operator<< (std::ostream &o, Empresa const p) {
	o << p.m_nomeemp << " - " << p.m_cnpj;
	return o;
}

//criar classe cadastro de empresa pra manter a lista de empresas...
//para considerar a qte média de funcionários por empresa:
//cria um contador com variavel estatica da classe e coloca um construtor para fazer um incremento do funcionário
//saber a qte total de funcionários e dividir pela qte de empresa
// no cadastro da empresa dar as opções de sair

// para listar, criar uma lista de opções onde cada opção vai executar uma listagem