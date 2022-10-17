#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a;
	string b;
	cin >> a;
	cin >> b;
	

	for (int i = 0; i < a.size(); i++) {
		int a1 = tolower(a[i]);
		int a2 = tolower(b[i]);


		if (a1 < a2) {
			cout << -1;
			return 0;
		}
		else if (a1 > a2) {
			cout << 1;
			return 0;
		}

	}cout << 0;

	return 0;
}