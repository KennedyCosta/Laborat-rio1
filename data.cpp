//criar uma classe data com: dia, mes e ano (metodo const e dest). criar metodo "mais de 90 dias" comparando com a data atual
//metodo "tempo decorrido"
//ex:
//data (5, 8, 2016) d1;
//x = d1.Tempodecorrido (data(23, 9, 2016));
// (23-5, 9-8, 2016-2016) = 49 dias
//quando listar funcionarios a menos de 90 dias: "entre com a data atual (dia, mes, ano)"
#include <iostream>
#include <cstring>
#include <string>


#include "data.h"

Data::Data(){

}

data::~data(){

}

int
Data::getDia(){
	return m_dia;
}

void
Data::setDia(int dia_){
	m_dia = dia_;
}

int
Data::getMes(){
	return mes_;
}

void
Data::setMes(int mes_){
	m_mes = mes_;
}

int
Data::getAno(){
	return m_ano;
}

void
Data::setAno(int ano_){
	m_ano = ano_;
}

std::istream&
operator>> (std::istream &i, Data &p) { 
	std::cout << "Digite a data(dd mm aaa): ";
	i >> p.m_dia >> p.m_mes >> p.m_ano;
	return i;
}

std::ostream& operator<< (std::ostream &o, Data const p) { 
	o << p.m_dia << "/" << p.m_mes << "/" << p.m_ano;
	return o;
} 