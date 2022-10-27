#include <iostream>
using namespace std;
int main ()
{
	float KECQ_x,KECQ_pm=0;
	int KECQ_i=0,KECQ_l;
	cout<<"Ingrese l: ";cin>>KECQ_l;
	do{
	
	cout<<"Ingrese x: ";cin>>KECQ_x;
	KECQ_i=KECQ_i+1;
	if(KECQ_x>KECQ_pm){
		KECQ_pm=KECQ_x;
	}
	
	}while(KECQ_i<KECQ_l);
	cout<<"El promedio maximo del curso es: "<<KECQ_pm<<endl;
	return 0;
}