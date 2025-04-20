#include<iostream>
#include<fstream>
using namespace std;

void b2(char a[]) 
{
    for (int i = 0;a[i] != '\0';i++)
    {
        cout << a[i] << endl;
    }
}

int main()
{
    char arr[100];
    cout << "Enter words : " << endl;
    cin.getline(arr, 100);
    b2(arr);

    return 0;
}