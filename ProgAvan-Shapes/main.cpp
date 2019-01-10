#include <iostream>
#include <cstdio>
#include <ctime>
#include "Colleccion.h"

const int MAX = 1000000;

using namespace std;

int main()
{
    clock_t t;
    Colleccion col = Colleccion();
    list<IFigure*> shapes = col.getShapes();
    
    t = clock();

    for (auto shape : shapes) {
        shape->printData();
        cout << "----------------------------------" << endl;
    }
    
    cout << "******** Forma Inneficiente *********" << endl;
    cout << "El tamanio de la lista es: " << shapes.size() << endl;
    double totalArea = col.getTotalArea();
    cout << "El area total es: " << totalArea << endl;
    t = clock() - t;
    cout << "Time: " << t << endl;
    
    cout << "******** Forma Eficiente ************" << endl;
    Colleccion col2 = Colleccion(MAX);
    shapes = col2.getShapes();
    cout << "El tamanio de la lista es: " << shapes.size() << endl;
    t = clock();
    totalArea = col2.getTotalArea();
    cout << "El area total es: " << totalArea << endl;
    t = clock() - t;
    cout << "Time: " << t << endl;
    
    getchar();
    return 0;
}
