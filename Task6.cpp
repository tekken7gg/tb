#include<iostream>
#include<fstream>
using namespace std;

int b2(int a[]) {
    int max = a[0];
    for (int i = 0;i < 5;i++)
    {
        if (a[i] > max) {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int arr[5];
    cout << "Enter numbers:";
    for (int i = 0;i < 5;i++)
    {
        cin >> arr[i];
    }
    int max2 = b2(arr);
    cout << "Maximum Number : " << max2;
    return 0;
}