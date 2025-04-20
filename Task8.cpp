#include<iostream>
#include<fstream>
using namespace std;
void b2() 
{
    ifstream b("output.txt");
    int c = 0;
    string a;
    while (b >> a) 
    { 
        c++; 
    }
    cout << "count = " << c;
    b.close();
}
int main()
{
    b2();
    return 0;
}