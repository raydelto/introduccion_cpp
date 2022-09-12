#include <iostream>
#include <string>
#define HOLA cout<<"Hola mundo"<<endl;

using namespace std;

void Saludar();

int main()
{
    //arreglos
    int enteros[] = {1,2,3,4};

    for (const auto& i : enteros)
    {
        cout << i << endl;
    }

    cout << "Y ahora vamos a recorrer de manera tradicional: " << endl;

    int tamano = sizeof(enteros) / sizeof(int);

    for (int i = 0; i < 50; i++)
    {
        cout << enteros[i] << endl;
    }


    HOLA
    // enteros
    int8_t byte; // -128 , 127
    uint8_t unsignedByte; // 0 , 255
    unsigned short corto; //-32768 , 32767
    int entero;
    long largo;

    // reales
    float decimal;
    double doble;

    char caracter;
    bool booleano = -10;

    Saludar();
    //string nombre;
    //cout << "Introduzca su nombre: ";
    //cin >> nombre;
    //cout << "Hola " << nombre << endl;
    if (booleano)
    {
        cout << "El valor booleano es verdadero" << endl;
    }
}

void Saludar()
{
    cout << "Hola a todos" << endl;
}
