#ifndef DATA_H
#define DATA_H

#include <string>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>

class Data
{
private:
	int			m_dia;
	int			m_mes;
	int			m_ano;

public:
	Data();
	~Data();

	int getDia();
	void setDia(int dia_);

	int getMes();
	void setMes(int mes_);

	int getAno();
	void setAno(int ano_);

	void print();

	friend std::istream& operator>> (std::istream &i, Data &p);

	friend std::ostream& operator<< (std::ostream &o, Data const p);
};

#endif

