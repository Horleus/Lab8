#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double tgf,k1,k2,f; // Ідентифікація зміних для формул
	double PI = 3.1415926;

	cout << "Пряма y=k1x+b1, введіть k1:";
    cin >> k1;
    cout << endl;

    cout << "Пряма y=k2x+b2, введіть k2:";
    cin >> k2;
    cout << endl;

    tgf=abs((k2-k1)/(1+k1*k2));

    f=atan(tgf)*180/PI;

    cout << "Кут між прямими: " << f << "градусів" << endl;

    return 0;
}
