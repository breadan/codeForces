#include<iostream>
using namespace std;

int main()
{
	int v1, v2, v3, v4;
	cin >> v1 >> v2 >> v3 >> v4;
	int newV1 = v1 % 100;
	int newV2 = v2 % 100;
	int newV3 = v3 % 100;
	int newV4 = v4 % 100;
	int result = (newV1 * newV2 * newV3 * newV4);
	if (result % 100 <= 9)
		cout << "0" << result % 100 << endl;
	else
		cout << result % 100;

	return 0;
}