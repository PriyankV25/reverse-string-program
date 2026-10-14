#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int main() {
    cout << reverseString("Hello World");
    return 0;
}
