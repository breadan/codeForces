#include<iostream>
using namespace std;

int main()
{
	int n1, n2;
	char opr;
	cin >> n1 >> opr >> n2;
	switch (opr)
	{
	case '<':
		if (n1 < n2) 
			cout << "Right\n";
		
		else 
			cout << "Wrong\n";
			break;
		
	case'>':
		if (n1 > n2) 
			cout << "Right\n";
		
		else 
			cout << "Wrong\n";
			break;
		
	case '=':
		if (n1 == n2) 
			cout << "Right\n";
		
		else 
			cout << "Wrong\n";
			break;
		


	}


	return 0;
}