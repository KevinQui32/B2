#include <iostream>
using namespace std;
int main ()
{
	float KECQ_x,KECQ_s=0;
	int KECQ_i=0,KECQ_l;
	cout<<"Ingrese numero de egresos  ";cin>>KECQ_l;
	cout<<"Ingrese numero saldo inicial : ";cin>>KECQ_s;
	
	do{
	cout<<"Ingrese numero egreso(x): ";cin>>KECQ_x;
	KECQ_i=KECQ_i+1;
	KECQ_s=KECQ_s-KECQ_x;

	}while(KECQ_i<KECQ_l);
	cout<<"El saldo final es: "<<KECQ_s<<endl;
	return 0;
}