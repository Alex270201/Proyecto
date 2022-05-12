#pragma once

class Resistencia
{
private:
	double color1;
	double color2;
	double color3;
	double multiplicador;
	double tolerancia;
public:
	Resistencia();
	Resistencia(double, double, double, double);
	Resistencia(double, double, double, double, double);
	double getcolor1();
	double getcolor2();
	double getcolor3();
	double getmulti();
	double gettole();
	void setcolor1(double);
	void setcolor2(double);
	void setmulti(double);
	void settole(double);
	double getResultado();
	double getTolerancia();
	double getResultado4();

};