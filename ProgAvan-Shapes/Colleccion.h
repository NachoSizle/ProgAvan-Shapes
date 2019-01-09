#pragma once
#include <list>
#include "Rectangulo.h"

using namespace std;

class Colleccion
{
private:
	list<IFigure*> shapes;

public:
	Colleccion();
    Colleccion(int numMaxElement);
	~Colleccion();
	list<IFigure*> getShapes();
	double getTotalArea();
    double getRandomNumber(int cte);
};
