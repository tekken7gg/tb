#include<iostream>
using namespace std;
void b2(char a[]) {
    int c = 0;
    for (int i = 0;a[i] != '\0';i++) { c++; }
    for (int i = 0;i < c;i++) {
        cout << a[c - 1 - i];
    }
}
int main()
{
    char arr[100];
    cout << "Enter words : ";
    cin.getline(arr, 100);
    b2(arr);
    return 0;
}