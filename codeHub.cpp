#include<iostream>
#include<string>
using namespace std;

//A. Team

int main()
{
	int numOfTeam = 0;
	int x, y, z;
	int res=0;
	cout << "Enter Num Of Teams\n";
	cin >> numOfTeam;
	cout << "Enter Opinions\n";
	for (int i = 0; i < numOfTeam; i++) {
		cin >> x >> y >> z;
		//to calc the opinions;
		res += (x + y + z >= 2);

	}cout << res;

	



	return 0;
}