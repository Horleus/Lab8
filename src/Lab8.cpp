#include <iostream>
#include <math.h>
using namespace std;

int main() {
	double tgf,k1,k2,f; // ������������� ����� ��� ������
	double PI = 3.1415926;

	setlocale(LC_ALL, "Ukrainian");

	cout << "����� y=k1x+b1, ����i�� k1:";
    cin >> k1;
    cout << endl;

    cout << "����� y=k2x+b2, ����i�� k2:";
    cin >> k2;
    cout << endl;

    tgf=abs((k2-k1)/(1+k1*k2));

    f=atan(tgf)*180/PI;

    cout << "��� �i� �������: " << f << " ������i�" << endl;

    return 0;
}
