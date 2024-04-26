/*REalice un programa que permita:
1. Ingresar x cantidad de numero
2. Calcular la suma de dichos numeors
3. Mostrar todos los numeros
4. Salir*/

/*Uso de swithc - Recursividad*/

#include <iostream>

using namespace std;

//Constante
#define MAX 8

/*Variables global*/
int nums[MAX];
int pos = 0; //Posicion del elemento en el arreglo
int suma = 0;

void agregarNum(int num)
{
    if (pos < MAX){
        nums[pos] = num;
        pos++;
    } else{
        cout << "No se puede agregar el numero" << endl;
    }
}

int sumar(int ultElem)
{
    if(ultElem == -1){
        return suma;
    }
    else suma = suma + nums[ultElem];
    sumar(ultElem - 1);
}

void menu(){
    int op, num;
    cout << "1. Agregar elementos." << endl;
    cout << "2. Sumar." << endl;
    cout << "3. Mostrar." << endl;
    cout << "4. Salir." << endl;
    cin >> op;

    switch (op)
    {
    case 1:
    cout << "Dime un numero: ";
    cin >> num;
    agregarNum(num);
        break;
    case 2:
        cout << "La suma es: " << sumar(pos - 1) << endl ;
        break;
    case 3:
        cout << "Los numeros digitados son: " << num << endl;
    case 4:
        break;
    default:
    cout << "No existe la opcion... \n";
        break;
    }
    menu();
}

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
