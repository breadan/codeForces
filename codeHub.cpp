#include<iostream>
#include<string>
#include<sstream>
using namespace std;

//string to int
//#include<sstream>

int main()
{
	string value = "200";
	int num; // to put the num as a number
	stringstream s;
	s << value; //to put num in s
	s >> num;	//get value and put it in int
	//to check
	int result = num - 50;
	cout << result;



	



	return 0;
}