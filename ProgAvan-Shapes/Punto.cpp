#include "Punto.h"
#include <iostream>
#include <string>

using namespace std;

Punto::Punto()
{
	this->x = 0;
	this->y = 0;
}

Punto::~Punto()
{
}

Punto::Punto(float x, float y)
{
	this->x = x;
	this->y = y;
}

float Punto::getX() {
	return this->x;
}

float Punto::getY() {
	return this->y;
}

void Punto::setX(float x) {
	this->x = x;
}

void Punto::setY(float y) {
	this->y = y;
}

