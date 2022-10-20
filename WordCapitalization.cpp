#include<iostream>

using namespace std;

int main()
{
	string value;
	cin >> value;
	value[0] = towupper(value[0]);
	cout << value;


	return 0;
}