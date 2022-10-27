
#include <iostream>
using namespace std;
int main()
{
    float KECQ_x, KECQ_s = 0, KECQ_vb, KECQ_piva = 12, KECQ_viva, KECQ_pdesc = 10, KECQ_vdesc, KECQ_vn;
    int KECQ_i = 0, KECQ_l;
    cout << "Ingrese l: ";
    cin >> KECQ_l;
    do
    {
        cout << "Ingrese x: ";
        cin >> KECQ_x;
        KECQ_i = KECQ_i + 1;
        KECQ_s = KECQ_s + KECQ_x;
    } while (KECQ_i < KECQ_l);
    KECQ_vb = KECQ_s;
    KECQ_viva = KECQ_vb * KECQ_piva / 100;
    KECQ_vdesc = KECQ_vb * KECQ_pdesc / 100;
    KECQ_vn = KECQ_vb + KECQ_viva - KECQ_vdesc;
    cout << "El valor a pagar es de: " << KECQ_vn << endl;
    return 0;
}