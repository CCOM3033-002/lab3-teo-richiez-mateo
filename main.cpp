/*
Asignación 1: Binary Digit
Nombre: Teo Richiez Mateo
Núm. Est: 801-234364
*/

#include <iostream>
#include <cstdlib>
using namespace std;

int main () {

    //variables
    int num_rand1, num_rand2, num_rand3;
    srand(time(0));

    //introduccion
    cout << "Este programa generara tres numeros aleatorios y los organizara!‧₊˚❀༉‧₊˚." << endl;
    
    //define las variables con valores aleatorios
    num_rand1 = rand() % (1000 - 0 + 1) + 0;
    num_rand2 = rand() % (1000 - 0 + 1) + 0;;
    num_rand3 = rand() % (1000 - 0 + 1) + 0;

    //despliega los numeros aleatorios
    cout << "Aqui estan tus numeros aleatorios!: " 
         << num_rand1 << ',' << ' '
         << num_rand2 << ',' << ' '
         << num_rand3 << endl;
    
    return 0;

}
