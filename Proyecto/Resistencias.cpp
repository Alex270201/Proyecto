#include "Resistencias.h"
#include <iostream>
using namespace std;

Resistencia::Resistencia() // Este contructor solo sirve para la prueba
{

}

Resistencia::Resistencia(double color1, double color2, double multiplicador, double tolerancia)
{
	this->color1 = color1;
	this->color2 = color2;
	this->multiplicador = multiplicador;
	this->tolerancia = tolerancia;

}
Resistencia::Resistencia(double color1, double color2, double color3, double multiplicador, double tolerancia)
{
	this->color1 = color1;
	this->color2 = color2;
	this->color3 = color3;
	this->multiplicador = multiplicador;
	this->tolerancia = tolerancia;

}
double Resistencia::getcolor1()
{
	return color1;
}
double Resistencia::getcolor2()
{
	return color2;
}
double Resistencia::getcolor3()
{
	return color3;
}
double Resistencia::getmulti()
{
	return multiplicador;
}
double Resistencia::gettole()
{
	return tolerancia;
}
void Resistencia::setcolor1(double color1)
{
	this->color1 = color1;
}
void Resistencia::setcolor2(double color2)
{
	this->color2 = color2;
}
void Resistencia::setmulti(double multiplicador)
{
	this->multiplicador = multiplicador;
}
void Resistencia::settole(double tolerancia)
{
	this->tolerancia = tolerancia;
}
double Resistencia::getResultado()
{
	double resultado;
	resultado = ((color1 * 100) + (color2 * 10));
	return resultado;
}
double Resistencia::getResultado4()
{
	double resultado;
	resultado = ((color1 * 100) + (color2 * 10) + (color3));
	return resultado;
}
double  Resistencia::getTolerancia()
{

	return tolerancia;
}
