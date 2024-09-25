#include <iostream>
using namespace std;
double bit_kb(double a);
double tb_mb(double a);
double gb_pb(double a);
int main () 
{
	int opcion;		double a,b;
	cout<<"ingrese la opcion que requiere:\n1-Bytes(8 bits) a Kilobytes(kb)\n2-Terabytes(tb) a Megabytes(mb)\n3-Gigabytes(gb) a Petabytes(pb)";
	cin>>opcion;
	switch(opcion)
	{
		case 1:
			cout<<"ingrese la cantidad de bytes que quire pasar a kilobytes: ";
			cin>>a;
			cout<<a<<" bytes son "<<bit_kb(a)<<" kilobytes";
		break;
		case 2:
			cout<<"ingrese la cantidad de terabytes que quire pasar a megabytes: ";
			cin>>a;
			cout<<a<<" terabytes son "<<tb_mb(a)<<" megabytes";
		break;
		case 3:
			cout<<"ingrese la cantidad de gigabytes que quire pasar a petabytes: ";
			cin>>a;
			cout<<a<<" gigabytes son "<<gb_pb(a)<<" petabytes";
		break;
	}
	return 0;
}
double bit_kb(double a)
{
	return a/1024;
}
double tb_mb(double a)
{
	return a*1024;
}
double gb_pb(double a)
{
	return a/1024;
}
