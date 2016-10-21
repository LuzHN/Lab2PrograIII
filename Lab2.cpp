#include <iostream>
using namespace std;
#include <string>
#include <math.h>

int MetodoDivisor(int);



int main(){

	int opcion = 0;

	while(opcion >= 0 && opcion < 5){
		cout<< "Ingrese opcion: " << endl << "1. Ej 1" << endl << "2. Ej 2" << endl << "3. Ej3." << endl << "4. Salir" << endl;
		cin >> opcion;

		switch(opcion){
			case 1:{ 
				string r = "";
    			cout<< "Ingrese numero:";
    			cin >> r;
   				int arr[r.size()];
    			int arr2[r.size()];
  	  
			    for(int i = 0; i < r.size(); i++){
			        arr[i] = r[i]-48;
			    }

			    int menor = 0;
			    int mayor = 0;
			   	for (int i = 0; i < r.size(); ++i)
			   	{
			   		if(mayor < arr[i]){
			   			mayor = arr[i];
			   		} else if(menor > arr[i]){
			   			menor = arr[i];
			   		}
			   	}

			   	int base = mayor + 1;

			   	cout<< "La base del numero es: "<< base << endl;

			   	int total = 0;



			   	int cont = 0;

			   	for (int i = r.size() -1; i >= 0; --i)
			   	{

			   		total = total + (arr[i] * pow(base, cont));
			   		cont++;
			   	}
   	
    
    			cout << "La base en 10 es: " << total << endl;
    			break;
			}
		
		case 2:{
				int numero = 0;
				int contador = 0;
				int contadorarreglo = 0;
				cout<< "Ingrese numero: ";
				cin >> numero;

				for (int i = 1; i <= numero; ++i)
				{
					if(numero % i == 0){
						contador++;
					}
				}
				int arr[contador];

				for (int i = 1; i <= numero; ++i)
				{
					if (numero % i == 0)
					{
						arr[contadorarreglo] = i;
						contadorarreglo++;
					}
				}

				int numeroalmomento = 0;
				int cantidaddivisores = 0;


				for (int i = 0; i < contadorarreglo; ++i)
				{
					numeroalmomento = (arr[i] + numero) / arr[i];
					cantidaddivisores++;
				}
				int arr2[cantidaddivisores];


				for (int i = 0; i < contadorarreglo; ++i)
				{
					numeroalmomento = (arr[i] + numero) / arr[i];
					arr2[i] = numeroalmomento;
				}

				int esprimoono = 0;
				int total = 0;
				for (int i = 0; i < cantidaddivisores; ++i)
				{
					cout<< arr2[i] << endl;
				}

				for (int i = 0; i < cantidaddivisores; ++i)
				{
					esprimoono = MetodoDivisor(arr2[i]);
					if(esprimoono == 1){
						total = total + arr2[i];
					}
				}
				cout<< "El total es: " << total << endl;



			}
			case 3:{
				string numero = "";
				cout << "Ingrese numero: ";
				cin >> numero;
				int arr[numero.size()];

				for (int i = 0; i < numero.size(); ++i)
				{
					arr[i] = numero[i] - 48;
				}

				int divisor = 0;

				for (int i = 0; i < numero.size(); ++i)
				{
					divisor = divisor + arr[i];
				}

			
				
			}
		}
    
    
    
    
	}
	return 0;
}


int MetodoDivisor(int x){
	int contador = 0;
	for (int i = 1; i < x; ++i)
	{
		if(x % i == 0){
			contador++;
		}
	}
	return contador;
}
