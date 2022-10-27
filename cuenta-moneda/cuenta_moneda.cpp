#include <iostream>
using namespace std;
int main ()
{
	float KECQ_x,KECQ_s=0,KECQ_s1=0,KECQ_s5=0;
	int KECQ_i=0,KECQ_l,KECQ_i1=0,KECQ_i5=0;
	cout<<"Ingrese l: ";cin>>KECQ_l;
	do{

	cout<<"Ingrese x: ";cin>>KECQ_x;
	KECQ_i=KECQ_i+1;
	KECQ_s=KECQ_s+KECQ_x;
	if(KECQ_x==1){
		KECQ_i1=KECQ_i1+1;
		KECQ_s1=KECQ_s1+KECQ_x;
	}else{

		KECQ_i5=KECQ_i5+1;
		KECQ_s5=KECQ_s5+KECQ_x;
	}

	}while(KECQ_i<KECQ_l);
	cout<<"La cantidad de monedas es: "<<KECQ_i<<endl;
	cout<<"El valor es: "<<KECQ_s<<endl;


	cout<<"La cantidad de monedas de 1$ es: "<<KECQ_i1<<endl;
	cout<<"El valor es: "<<KECQ_s1<<endl;

	cout<<"La cantidad de monedas de 50ctvs es: "<<KECQ_i5<<endl;
	cout<<"La cantidad de moneda es: "<<KECQ_s5<<endl;
	return 0;
}