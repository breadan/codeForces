#include<iostream>
using namespace std;

int main()
{
	double n1, n2, n3, n4;
	//cout<<"Enter numbers Please\n";
	cin >> n1 >> n2 >> n3 >> n4;
	double result1 = n2 * log(n1);
	double result2 = n4 * log(n3);
	if (result1 > result2) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}



	return 0;
}
