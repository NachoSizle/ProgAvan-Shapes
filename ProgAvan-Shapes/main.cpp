#include <iostream>
#include <cstdio>
#include "Colleccion.h"

using namespace std;

int main()
{
	Colleccion col = Colleccion();
	list<IFigure*> shapes = col.getShapes();
	double totalArea = col.getTotalArea();

	for (auto shape : shapes) {
		shape->printData();
		cout << "----------------------------------" << endl;
	}

	cout << "El area total es: " << totalArea << endl;
	cout << "El tamanio de la lista es: " << shapes.size() << endl;
	getchar();
    return 0;
}
