#include <iostream>
#include <cstdio>
#include <ctime>
#include "Colleccion.h"

const int MAX = 100000;

using namespace std;

int main()
{
    clock_t t;
    Colleccion col = Colleccion();
    list<IFigure*> shapes = col.getShapes();
    
    t = clock();
    double totalArea = col.getTotalArea();

//    for (auto shape : shapes) {
//        shape->printData();
//        cout << "----------------------------------" << endl;
//    }
//    cout << "Forma inneficiente" << endl;
//    cout << "El area total es: " << totalArea << endl;
//    t = clock() - t;
//    cout << "Time: " << t << endl;
//    cout << "El tamanio de la lista es: " << shapes.size() << endl;
//
//    cout << "Forma eficiente" << endl;
    Colleccion col2 = Colleccion(MAX);
    shapes = col2.getShapes();
    
    t = clock();
    totalArea = col2.getTotalArea();
    cout << "El area total es: " << totalArea << endl;
    t = clock() - t;
    cout << "Time: " << t << endl;
    cout << "El tamanio de la lista es: " << shapes.size() << endl;
    
    totalArea = 0.0f;
    t = clock();
    for_each(shapes.begin(), shapes.end(),
             [&totalArea](auto const& elem) mutable   // Para cada elemento, getArea() y sumamos la variable
             {                                        // totalArea que almacena el area total
                 totalArea += (*elem).getArea();
             });
    t = clock() - t;
    cout << "Time: " << t << endl;
    
    getchar();
    return 0;
}

//
//#include <iostream>
//using namespace std;
//
////#include <cstring>
//
////SEQUENCE CONTAINERS
//#include <vector>
////#include <list>
////#include <deque>
////#include <forward_list>
//
////CONTAINER ADAPTERS
////#include <stack>
////#include <queue>  // included priority queue
//
////ASSOCIATIVE CONTAINERS
////#include <set> // includes multiset
////#include <map>  // includes multimap
//
//// UNORDERED ASSOCIATIVE CONTAINERS
////#include <unordered_set>  // y multiset
////#include <unordered_map>   // y multimap
//
//#include <algorithm>  // for_each es parte de algorithm
//
//#include <ctime>
//#define MAX  10000000
//
//int main() {
//    std::vector<int> lista;
//    lista.reserve(MAX);
//
//    std::srand((unsigned)std::time(nullptr));
//    for (int i = 0; i < MAX; i++)
//        lista.push_back(1); // rand());
//    cout << "timing" << endl;
//
//    clock_t t;
//    /////////////////////////////////////////////////
//    t = clock();
//    for (size_t i = 0; i < lista.size(); i++)
//    {
//        //std::cout << lista[i] << std::endl;
//    }
//    t = clock() - t;
//    cout << "indice (i++): " << t << endl;
//    /////////////////////////////////////////////////
//
//    /////////////////////////////////////////////////
//    t = clock();
//    for (size_t i = 0; i < lista.size(); ++i)
//    {
//        //std::cout << lista[i] << std::endl;
//    }
//    t = clock() - t;
//    cout << "indice (++i): " << t << endl;
//    /////////////////////////////////////////////////
//
//    std::vector<int>::iterator it;
//    t = clock();
//    for (it = lista.begin(); it != lista.end(); it++) {
//        //    std::cout << *it << std::endl;
//    }
//    t = clock() - t;
//    cout << "iterador it++: " << t << endl;
//
//
//    /////////////////////////////////////////////////
//
//    t = clock();
//    for (it = lista.begin(); it != lista.end(); ++it) {
//        //    std::cout << *it << std::endl;
//    }
//    t = clock() - t;
//    cout << "iterador ++it: " << t << endl;
//    /////////////////////////////////////////////////
//
//    t = clock();
//    for_each(lista.begin(), lista.end(),
//             [](auto const& elem)   // para cada elemento ejecutar la función lambda
//             {
//                 //std::cout << elem << std::endl;
//             });
//    t = clock() - t;
//    cout << "std::for_each con lambda: " << t << endl;
//    /////////////////////////////////////////////////
//
//    t = clock();
//    for (auto it : lista) {
//        //std::cout << it << std::endl;
//    }
//    t = clock() - t;
//    cout << "for de rango " << t << endl;
//    /////////////////////////////////////////////////
//    cout << "end." << endl;
//
//}
