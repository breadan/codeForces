#include<iostream>
using namespace std;

int main()
{
	int n1, n2, result;
	char opr,oprres;
	cin >> n1 >> opr>>n2>>oprres>>result;
	switch (opr)
	{
	case '+':
		if (n1 + n2 == result) {
			cout << "YES\n";
		}
		else {
			cout << n1 + n2;
		}
		break;
	case '-':
		if (n1 - n2 == result) {
			cout << "YES\n";
		}
		else {
			cout << "NO";
		}
		break;
	case '*':
		if (n1 * n2 == result) {
			cout << "YES\n";
		}
		else {
			cout << n1 * n2;
		}
		break;

	default:
		break;
	}

	return 0;
}