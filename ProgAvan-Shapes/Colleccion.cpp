#include "Colleccion.h"
#include "Rectangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <iostream>
#include <list>

using namespace std;

Colleccion::Colleccion()
{
	for (int i = 1; i < 4; i++)
	{
		double f = (double)rand() / RAND_MAX;
		double randomDouble = (i * 0.1f) + f * ((i * 0.1f) - (i * 0.1f));

		this->shapes.push_back(new Rectangulo(Punto(randomDouble + 1, randomDouble + 2), Punto((randomDouble + 1) / randomDouble, (randomDouble + 2) / randomDouble)));
	}
	for (int i = 3; i < 7; i++)
	{
		double f = (double)rand() / RAND_MAX;
		double randomDouble = (i * 0.1f) + f * ((i * 0.1f) - (i * 0.1f));
		Rectangulo rect = Rectangulo(Punto(randomDouble + 1, randomDouble + 2), Punto((randomDouble + 1) / randomDouble, (randomDouble + 2) / randomDouble));
		this->shapes.push_back(new Cuadrado(rect));
	}
	for (int i = 0; i < 3; i++)
	{
		double f = (double)rand() / RAND_MAX;
		double randomDouble = (i * 0.1f) + f * ((i * 0.1f) - (i * 0.1f));
		this->shapes.push_back(new Circulo(Punto(randomDouble + 1, randomDouble + 2), randomDouble + 0.5f));
	}
}

Colleccion::~Colleccion()
{
	this->shapes.clear();
}

list<IFigure*> Colleccion::getShapes() {
	return this->shapes;
}

double Colleccion::getTotalArea()
{
	double totalArea = 0.0f;

	for (auto it : this->shapes)
	{
		totalArea += it->getArea();
	}

	/*
	list<IFigure*>::iterator i = this->shapes.begin();
	while (i != this->shapes.end())
	{
		totalArea += (*i)->getArea();
		this->shapes.erase(i);
		i++;
	}
	*/
	return totalArea;
}