#include <iostream>
#include <stdlib.h>
using namespace std;
int suma(int a,int b);
int resta(int a,int b);
int multiplicacion(int a,int b);
double division(double a,double b);
int main () {
	int opcion;	double a,b;	bool ciclo=true;
	while(ciclo=!false)
	{
		system("cls");
		bool ciclo=true;
		cout<<"ingrese la operacion que quiera realizar"<<endl;
		cout<<"1-suma\n2-resta\n3-multiplicacion\n4-division\n5-salir\n"<<endl;
		cin>>opcion;
		switch(opcion)
		{
			case 1:
				cout<<"ingrese 2 numeros: ";
				cin>>a>>b;
				cout<<"\nel resultado es: "<<suma(a,b)<<endl;
				system("pause");
			break;
			case 2:
				cout<<"\ningrese 2 numeros: ";
				cin>>a>>b;
				cout<<"\nel resultado es: "<<resta(a,b)<<endl;
				system("pause");
			break;
			case 3:
				cout<<"\ningrese 2 numeros: ";
				cin>>a>>b;
				cout<<"\nel resultado es: "<<multiplicacion(a,b)<<endl;
				system("pause");
			break;
			case 4:
				cout<<"\ningrese 2 numeros: ";
				cin>>a>>b;
				cout<<"\nel resultado es: "<<division(a,b)<<endl;
				system("pause");
			break;
			case 5:
				cout<<"\nadios"<<endl;
				return 0;
			break;
			default:
				cout<<"\nla seleccion fue incorrecta recuerda que solo puedes elegir entre 1 y 5"<<endl;
				return 0;
			break;
		}	
	}
	return 0;
	}
int suma(int a,int b)
{
	return a+b;
}
int resta(int a,int b)
{
	return a-b;
}
int multiplicacion(int a,int b)
{
	return a*b;
}
double division(double a,double b)
{
	return a/b;
}
