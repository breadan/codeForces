#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;


int main()
{
	string value;
	cin >> value;
	for (int i = 0; i < value.length(); i++) {
		for (int j = 0; j < value.length() - i - 1; j++) {
			if (value[j] > value[j + 2] && value[j] != '+') {
				value[j] = value[j + 2];
			}
		}cout << value[i];
	}

	/*string value;
	cin >> value;
	for (int i = 0; i < value.length()-1; i += 2) {
		for (int j = 0; j < value.length() - 2; j += 2) {
			if (value[j] > value[j + 2]) {
				char temp = value[j];
				value[j] = value[j + 2];
				value[j + 2] = temp;

			}
		}
	}cout << value;*/

	//string value; cin >> value;
	//string res;
	//for (int i = 0; i < value.length(); i++) {
	//	if (value[i] != '+')res.push_back(value[i]);
	//}
	//sort(res.begin(), res.end());
	//string::iterator it;

	//for (it = res.begin(); it != res.end(); it++) {
	//	if (it == res.begin())cout << *it;
	//	else cout << "+" << *it;
	//}

	

	return 0;
}