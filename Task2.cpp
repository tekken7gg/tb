#include<iostream>
using namespace std;
int arrayfunction(int a[])
{
    int sum = 0;
    for (int i = 0;i < 5;i++)
    {
        sum += a[i];
    }
    return sum;
}

int main()
{
    int array[5];
    cout << "Enter 5 numbers:\n";
    for (int i = 0;i < 5;i++)
    {
        cin >> array[i];
    }
    int sum = arrayfunction(array);
    cout << "Sum of all numbers = " << sum;
    return 0;
}