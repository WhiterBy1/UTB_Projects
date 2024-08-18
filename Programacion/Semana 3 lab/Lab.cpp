/*
Instrucciones para el Programa en C++ - Resolución Individual

Resuelve de manera individual el siguiente programa en C++. Asegúrate de documentar el código adecuadamente utilizando comentarios de múltiples líneas,
empleando los símbolos especiales . Además, proporciona los datos necesarios según lo explicado en clase.

Menú Interactivo: Crea un menú interactivo utilizando la estructura switch() para permitir al usuario seleccionar entre las siguientes opciones:
1, 2 o salir del programa.

Presentación del Menú: El menú debe mostrarse de la siguiente manera:

BIENVENIDO A SU PROGRAMA EN C++

Opción 1: Ejercicio Almacén
Opción 2: Ejercicio Cálculo de Notas
Opción 3: Salir del Programa
Detalles de las Opciones:

Ejercicio Almacén:

Un almacén ofrece un descuento del 15% si el total de la compra supera los $150,000 y un descuento del 5% si la compra es inferior a $50,000. 
Desarrolla un programa en C++ que calcule el monto total que el cliente pagará, incluyendo el respectivo descuento. Al finalizar,
muestra los resultados para esta opción.
Ejercicio Cálculo de Notas:

Un alumno desea conocer su calificación en el primer corte del curso de Programación. La calificación se compone de:
50% del promedio de talleres.
30% del examen parcial.
20% del quiz. El programa en C++ debe imprimir la nota definitiva, indicar si el alumno aprueba o reprueba, y en caso de reprobar, 
mostrar cuánto le falta para aprobar.
*/

#include <iostream>

using namespace std;

int main(){
    int opcion;
     do{
         //Mostrar Menu
         cout <<"\n\nBIENVENIDO A SU PROGRAMA EN C++ \n\n";
         cout <<"Opción 1: Ejercicio Almacén\n";
         cout <<"Opción 2: Ejercicio Cálculo de Notas\n";
         cout <<"Opción 3:Salir del programa\n\n";
         cout <<"Seleccione una opcion: ";
         cin >> opcion;
         
         switch(opcion){
             case 1:{
                 double totalCompra, totalPagar;
                 cout <<"Ingrese el monto total de la compra: ";
                 cin >> totalCompra;
                 
                 if (totalCompra>150000){
                     //Descuento del 15%
                     totalPagar = totalCompra*0.85;
                 }else if (totalCompra <50000) {
                     //Descuento del 5%
                     totalPagar = totalCompra*0.95;
                 }else{
                     //Sin descuento
                     totalPagar = totalCompra;
                 }
                 //Imprimir el total a pagar
                 cout << " El total a pagar es: $"<< totalPagar <<endl;
                 break;
             }
             case 2:{
                 double  promedioTalleres, examenParcial, quiz, notaFinal;
                 cout <<"Ingrese el promedio obtenido en los talleres: ";
                 cin >> promedioTalleres;
                 cout << "Ingrese la nota del examen parcial: ";
                 cin >> examenParcial;
                 cout <<"Ingrese la nota del quiz: ";
                 cin>> quiz;
                 
                 notaFinal = (promedioTalleres*0.5)+(examenParcial*0.3)+(quiz*0.2);
                 
                 cout<<"La nota final es de: "<<notaFinal<<endl;
                 
                 if (notaFinal>3.0){
                     cout <<"El alumno ha aprobado"<<endl;
                 }else{
                     cout<< "El alumno ha reprobado "<<endl;
                     cout<<"Necesita "<< 3.0 - notaFinal <<" puntos para aprobar."<<endl;
                 }
                 break;
             }
             case 3:{
                 cout<<"Saliendo del programa......" <<endl;
                 break;
             }
             default:{
                 cout <<"Opción inválida. Seleccione una opción valida."<< endl;
                 
             }
             
         }
         
         
     }while (opcion !=3);
    return 0;
}
