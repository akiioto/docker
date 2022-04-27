#include<iostream>

using namespace std;

//Definicja klasy
//Ciało klasy
class CPunkt
{
	//część prywatna klasy
private:
	int m_iX, m_iY;

	//część publiczna klasy
public:
	//Konstruktor bezparametrowy domyślny
	//Ciało konstruktora zdefiniowane wewnątrz klasy
	CPunkt()
	{
		m_iX = m_iY = 0;
	}
	//Konstruktor parametrowy
	CPunkt(int x, int y);
	//Destruktor
	~CPunkt();

	//Deklaracje funkcji składowych
	void wypisz();
	int PodajX();
	int PodajY();
	int ZmienX(int x);
	int ZmienY(int y);
};