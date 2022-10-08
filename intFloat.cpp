#include<iostream>
using namespace std;

int main()
{
	double num;
	cin >> num;
	//to take the int part
	int Int = num;
	double res = num - Int;
	if (res != 0) {
		cout << "float  " << Int << "  " << res << endl;
	}
	else {
		cout <<  " int  " << Int << endl;
	}


	return 0;
}