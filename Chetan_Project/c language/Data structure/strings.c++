#include <iostream>
using namespace std;

int main() {
    string str;
    int count = 0;

    cout << "Enter a string: ";
    cin >> str;   

    for (int i = 0; i < str.length(); i++) {
        if (i == 'a' || i == 'e' || i == 'i' ||
            i == 'o' || i == 'u' ) {
            count++;
        }
    }

    cout << "Vowels count = " << count;
    return 0;
}
