#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14

int main()
{
	setlocale(LC_ALL, "");
	float r1, r2, r_polz, x, y, x1, y1, s1, s2, s_polz;
	cout << "\n\n������� ������ ����� ����������  "; cin >> r1;
	cout << "\n\n������� ������ ������� ����������  "; cin >> r2;
	while (r1 > r2)
	{
		cout << "\n\n������ ����� ���������� ������, ��� \
������ ������� ����������. ��������� ����!\n ";
		cout << "\n\n������� ������ ����� ����������  "; cin >> r1;
		cout << "\n\n������� ������ ������� ����������  "; cin >> r2;
	}
	cout << "\n\n������� ���������� ������ ���������� � �������: x y  "; cin >> x; cin >> y;
	cout << "\n\n������� ���������� ����� � �������: x y  "; cin >> x1; cin >> y1;
	s1 = pi * r1 * r2;
	s2 = pi * r2 * r2;
	r_polz = sqrt((y - y1) * (y - y1) + (x - x1) * (x - x1));
	s_polz = pi * r_polz - r_polz;
	if (s_polz >= s1 && s_polz <= s2) cout << ("����� �������� � ������� ������");
		
	else  cout << ("����� �� �������� � ������� ������"); 

	return (0);
}