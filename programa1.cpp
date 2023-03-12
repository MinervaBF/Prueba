#include <iostream>
//comentario editado

using namespace std;

int main (void)
{
    int op1, op2, suma;

    //Leer primer operando
    cout << "Introduzca el primer operando: ";
    cin >> op1;

    //Leer segundo operando
    cout << "Introduzca el segundo operando: ";
    cin >> op2;

    //Calcular la suma
    suma=op1+op2;

    //Mostrar el resultado
    cout << "La suma de los números introducidos es: " << suma << endl;
    return 0;
}
