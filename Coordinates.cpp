#include<iostream>
#include<string>

using namespace std;

int main()
{
	float I1, I2;
	cin >> I1 >> I2;
	if (I1 > 0 && I2 > 0)
		cout << "Q1";
	else if (I1 < 0 && I2>0)
		cout << "Q2";
	else if (I1 > 0 && I2 < 0)
		cout << "Q4";
	else if (I1 < 0 && I2 < 0)
		cout << "Q3";
	else if (I1 == 0 && I2 == 0)
		cout << "Origem";
	else if (I1 != 0 && I2 == 0)
		cout << "Eixo X";
	else if (I1 == 0 && I2 != 0)
		cout << "Eixo Y";







	return 0;
}