#include<iostream>
#include<string>
#include <algorithm>

using namespace std;

int main()
{

	int size;
	cin >> size;
	/*if (size < 26) {
		return 0;
	}*/
	string litters;
	cin >> litters;
	for (int i = 0; i < size; i++) {
		litters[i] = towlower(litters[i]);

	}
	int count = 0;
	sort(litters.begin(), litters.end());
	for (int i = 0; i < size; i++) {
		if (litters[i] != litters[i + 1]) {
			count++;
		}
	}
	if (count == 26) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}



	return 0;
}