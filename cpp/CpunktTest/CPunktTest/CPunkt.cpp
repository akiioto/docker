#include "CPunkt.h"

//Ciało metod należących do klasy, zdefiniowane na zewnątrz klasy
//Konstruktor parametrowy
CPunkt::CPunkt(int x, int y)
{
	m_iX = x;
	m_iY = y;
}

//Destruktor
CPunkt::~CPunkt()
{
	cout << "\nDestruktor klasy CPunkt";
}

//Definicje funkcji składowych
void CPunkt::wypisz()
{
	cout << "\nx = " << m_iX;
	cout << "\ny = " << m_iY;
}

int CPunkt::PodajX()
{
	return m_iX;
}
int CPunkt::PodajY()
{
	return m_iY;
}

int CPunkt::ZmienX(int x)
{
	int iX;
	iX = m_iX;
	m_iX = x;

	return iX;
}

int CPunkt::ZmienY(int y)
{
	int iY;
	iY = m_iY;
	m_iY = y;

	return iY;
}