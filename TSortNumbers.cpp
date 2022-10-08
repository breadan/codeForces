#include<iostream>
using namespace std;

	/*طباعة الارقام ترتيب تصاعدي وطباعتها كما ادخلها اليوزر 
وممكن طبعا تبقي تصاعدي وتنازلي*/
int main()
{
	int Num_1, Num_2, Num_3;
	cin >> Num_1 >> Num_2 >> Num_3;
	int max, def, min;
	if (Num_1 >= Num_2 && Num_1 >= Num_3)
	{
		max = Num_1;
		if (Num_2 >= Num_3)
		{
			def = Num_2;
			min = Num_3;
		}
		else {
			def = Num_3;
			min = Num_2;
		}
	}
	else if (Num_2 >= Num_1 && Num_2 >= Num_3)
	{
		max = Num_2;
		if (Num_1 >= Num_3)
		{
			def = Num_1;
			min = Num_3;
		}
		else {
			def = Num_3;
			min = Num_1;
		}
	}
	else
	{
		max = Num_3;
		if (Num_1 >= Num_2)
		{
			def = Num_1;
			min = Num_2;
		}
		else {
			def = Num_2;
			min = Num_1;
		}
	}
	cout << min << endl;
	cout << def << endl;
	cout << max << endl;
	cout << endl;

	cout << Num_1 << endl;
	cout << Num_2 << endl;
	cout << Num_3 << endl;
	return 0;
}



