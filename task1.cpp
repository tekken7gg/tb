#include<iostream>
using namespace std;
void arrayf(int a[])
{
	for (int i = 0; i < 5; i++)
	{
		cout << a[i] << "";
	}
}
int main()
{
	int array[5];
	cout << "Enter any 5 numbers in array";
	for (int i = 0; i < 5; i++)
	{
		cin >> array[i];
	}
	arrayf(array);
	return 0;
}