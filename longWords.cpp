#include<iostream>
#include<string>
using namespace std;

int main()
{
	int size;
	cin >> size;
	

	for (int i = 0; i < size; i++) {
		string words;
		cin >> words;
		int mySize = words.length();
		if (mySize>10)
		{
			cout << words[0] << mySize - 2 << words[ mySize-1];
		}
		else {
			cout << words;
		}
	}


	return 0;
}