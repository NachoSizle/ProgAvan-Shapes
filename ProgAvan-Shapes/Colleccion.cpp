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
        this->shapes.push_back(new Rectangulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), Punto(this->getRandomNumber(i), this->getRandomNumber(i))));
    }
    for (int i = 1; i < 4; i++)
    {
        Rectangulo rect = Rectangulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), Punto(this->getRandomNumber(i), this->getRandomNumber(i)));
        this->shapes.push_back(new Cuadrado(rect));
    }
    for (int i = 1; i < 5; i++)
    {
        this->shapes.push_back(new Circulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), this->getRandomNumber(i)));
    }
}

Colleccion::Colleccion(int numMaxElement)
{
	for (int i = 0; i < numMaxElement/2; i++)
	{
		this->shapes.push_back(new Rectangulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), Punto(this->getRandomNumber(i), this->getRandomNumber(i))));
	}
	for (int i = 0; i < numMaxElement/4; i++)
	{
		Rectangulo rect = Rectangulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), Punto(this->getRandomNumber(i), this->getRandomNumber(i)));
		this->shapes.push_back(new Cuadrado(rect));
	}
	for (int i = 0; i < numMaxElement/4; i++)
	{
		this->shapes.push_back(new Circulo(Punto(this->getRandomNumber(i), this->getRandomNumber(i)), this->getRandomNumber(i)));
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

    //  FORMA INNEFICIENTE (POCOS ELEMENTOS)
    if (this->shapes.size() == 10) {
        for_each(this->shapes.begin(), this->shapes.end(),
                 [&totalArea](auto const& elem) mutable   // Para cada elemento, getArea() y sumamos la variable
                 {                                        // totalArea que almacena el area total
                     totalArea += (*elem).getArea();
                 });
    } else {
    //  FORMA EFICIENTE (PARA MUCHOS ELEMENTOS)
        for (auto it : this->shapes)
        {
            totalArea += it->getArea();
        }
    }
	return totalArea;
}

double Colleccion::getRandomNumber(int cte) {
    double f = (double)rand() / RAND_MAX;
    return ((cte * 0.1f) + f * ((cte) - (cte * 0.01f))) * 10;
}
