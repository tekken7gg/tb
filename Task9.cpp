#include <iostream>
using namespace std;
void b2(char a[]) {
    int len = 0;
    while (a[len] != '\0') {
        len++;
    }

    bool ispalindrome = true;
    for (int i = 0; i < len / 2; i++) {
        if (a[i] != a[len - i - 1]) {
            ispalindrome = false;
            break;
        }
    }

    if (ispalindrome)
        cout << "String is a palindrome";
    else
        cout << "String is not a palindrome\n";
}

int main() {
    char arr[100];
    cout << "Enter a word: ";
    cin.getline(arr, 100);
    b2(arr);
    return 0;
}
