#include <iostream>

using namespace std;

int main(){
    int opcion;
     do{
         //Mostrar Menu
         cout <<"Bienvenido a su programa en c++ \n\n";
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
                     cout <<"El alunmo ha aprobado"<<endl;
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