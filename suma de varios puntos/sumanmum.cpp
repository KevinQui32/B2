#include<iostream>
using namespace std;

int main () {
    float KECQ_x,KECQ_s=0.0;
    int KECQ_i=0, KECQ_l;
    cout<<"Ingrese el valor de KECQ_l: ";
    cin>>KECQ_l;
    do{
        cout<<"Ingrese el valor de KECQ_x: ";
        cin>>KECQ_x;
        KECQ_i=KECQ_i+1;
        KECQ_s=KECQ_s+KECQ_x;
    }while(KECQ_i<KECQ_l);

    cout <<"La suma de los numeros fue: "<<KECQ_s<<endl;
    return 0;

}