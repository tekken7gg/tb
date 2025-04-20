#include<iostream>
using namespace std;

void vowels(char a[]) {
    int count = 0;
    for (int i = 0;a[i] != '\0';i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            count++;
        }
    }
    cout << "Number of vowels : " << count;
}
int main()
{
    char array[100];
    cout << "enter sentence \n";
    cin.getline(array, 100);
    vowels(array);

    return 0;
}