#include <iostream>
using namespace std;
int main () 
{
	float KECQ_imc,KECQ_peso,KECQ_altura;
	cout<<"Ingrese el peso (kg): ";cin>>KECQ_peso;
	cout<<"Ingrese la altura (metros): ";cin>>KECQ_altura;
	KECQ_imc=KECQ_peso/(KECQ_altura*KECQ_altura);
	if(KECQ_imc<18.5){
		cout<<"Usted tiene bajo peso"<<endl;
	}
	if(KECQ_imc>=18.5 && KECQ_imc<24.9){
		cout<<"Usted tiene peso normal"<<endl;
	}

	if(KECQ_imc>=25 && KECQ_imc<26.9){
		cout<<"Usted tiene sobrepeso grado I"<<endl;
	}

	if(KECQ_imc>=27 && KECQ_imc<29.9){
		cout<<"Usted tiene sobrepeso grado II"<<endl;
	}

	if(KECQ_imc>=30 && KECQ_imc<34.9){
		cout<<"Usted tiene obesidad tipo I"<<endl;
	}

	if(KECQ_imc>=35 && KECQ_imc<39.9){
		cout<<"Usted tiene obesidad tipo II"<<endl;
	}

	if(KECQ_imc>=40 && KECQ_imc<49.9){
		cout<<"Usted tiene obesidad tipo III (mórbida)"<<endl;
	}

	if(KECQ_imc>=50){
		cout<<"Usted tiene obesidad tipo IV (extrema)"<<endl;
	}
	return 0;
}