#include<iostream>
#include<string>
#include<fstream>
using namespace std;


void b2(string str) {
    ofstream a("output.txt");

    for (int i = 0;str[i] != '\0';i++)
    {
        a << str[i];
    }
    a.close();
}
int main()
{
    string s;
    cout << "enter string\n";
    getline(cin, s);
    b2(s);
    return 0;
}