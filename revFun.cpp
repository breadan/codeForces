#include <iostream>
#include <string>
#include <ctime>     //to random
#include <stdlib.h>  //to call randomعشوائية 
using namespace std;

//overloading fun. تغيير المعاملات او عددها علشان تكون كلها باسم واحد
//recursion  بتستدعي نفسها

int max()
{
	cout << "Enter the numbers\n";
	int n1, n2, n3;
	cin >> n1 >> n2 >> n3;
	if (n1 > n2 && n1 > n3)
	{
		cout << "the max is\n" << n1;
		return n1;
	}
	else if (n2 > n1 && n2 > n3)
	{
		cout << "The max is\n" << n2;
		return n2;
	}
	else {
		cout << "The max is\n" << n3;
		return n3;
	}
}

int get(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else {
		return 1 + get(n - 1);
	}
}

int fun(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else {
		return 8 + fun(n - 2);
	}
}

//factorial  by recursion
/*
if() it is Base Case
else{} it's Recursive procedure إجراء تكراري
*/
int fun2(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else {
		return n * fun(n - 1);
	}
}



int main()
{
	//factorial  by recursion
	//cout << fun2(7);    //هل في ارقام ليس لها مضروب


	//recursion   امشي معاها هتفهم
	cout << fun(4) << endl;
	/*
	int n = 3;
	cout << get(3) << endl;

	//srand(time(0));  //time() calculate time from 1970 untill now

		
	max();
	
	
	//rand
	for (int i = 0; i <= 10; i++)
	{
		//cout << rand() << endl;
		//or
		//cout << rand() % 50 << endl;
		//to change numbers:
		//start + rand()%(end - start +1)
		cout << 20 + rand() % (30 - 20 + 1) << endl;
	}	
	*/

	











	





	return 0;
}