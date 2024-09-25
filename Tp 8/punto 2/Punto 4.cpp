#include <iostream>
#include <string.h>
using namespace std;

int buscar(char plb[],char cad[])
{
	int long1=strlen(cad);
	int long2=strlen(plb);
	bool encontrado=false;
	for(int i=0;i<=long1-long2;i++)
	{
		int contador=0;	
		for(int x=0;x!=long2;x++)
		{
			if(cad[i+x]==plb[x])
			{
				contador++;
			}
		}
		if(contador==long2)
		{
			return true;
		}
	}
	return false;
}

void validar(bool encontrado)
{
	if(encontrado)
	{
		cout<<"\nla palabra que busca si esta dentro de la cadena"<<endl;
	}
	else
	{
		cout<<"\nla palabra que busca no esta dentro de la cadena"<<endl;
	}
}

int main ()
{
	char plb[100];	char cad[100];
	cout<<"ingrese una cadena: ";
	cin.getline(cad,100);
	cout<<"\ningrese la palabra que busca: ";
	cin.getline(plb,100);
	bool encontrado=buscar(plb,cad);
	validar(encontrado);
	return 0;
}
