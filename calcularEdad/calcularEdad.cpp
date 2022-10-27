#include <iostream>
using namespace std;
int main()
{
    int KECQ_aa, KECQ_ma, KECQ_da, KECQ_an, KECQ_mn, KECQ_dn, KECQ_a, KECQ_m, KECQ_d;
    cout << "Ingrese la fecha actual Año-Mes-Dia :";
    cin >> KECQ_aa >> KECQ_ma >> KECQ_da;
    cout << "Ingrese la fecha de nacimiento Año-Mes-Dia : ";
    cin >> KECQ_an >> KECQ_mn >> KECQ_dn;

    if (KECQ_da > KECQ_dn)
    {

        KECQ_d = KECQ_da - KECQ_dn;
    }
    else
    {
        KECQ_da = KECQ_da + 30;
        KECQ_ma = KECQ_ma - 1;
        KECQ_d = KECQ_da - KECQ_dn;
    }

    if (KECQ_ma > KECQ_mn)
    {

        KECQ_m = KECQ_ma - KECQ_mn;
    }
    else
    {

        KECQ_ma = KECQ_ma + 12;
        KECQ_aa = KECQ_aa - 1;
        KECQ_m = KECQ_ma - KECQ_mn;
    }
    KECQ_a = KECQ_aa - KECQ_an;

    cout << "Usted tiene " << KECQ_a << " años, " << KECQ_m << " meses," << KECQ_d << " dias" << endl;
    return 0;
}