/*
Realice un programa que lea de la entrada estandar
 los siguientes datos de una persona:

    Edad: dato de tipo entero
    Sexo: dato de tipo caracter
    ALtura en metros: dato de tipo real

Tras leer los datos, el programa debe mostrarlos en la salida estandar
*/

#include<iostream>

using namespace std;

int mian(){
     int edad;
     char sexo[10];
    float altura;

    cout<<"Digite su edad: " << endl;
    cin >> edad;

    cout<<"Digite su sexo: " << endl;
    cin >> sexo;

    cout<<"Digite su altura: " << endl;
    cin >> altura;

    cout<<"\n Edad: "<< edad << endl;
    cout<<"\n sexo: "<< sexo << endl;
    cout<<"\n Altura: "<< altura << endl;

    return 0;
}
