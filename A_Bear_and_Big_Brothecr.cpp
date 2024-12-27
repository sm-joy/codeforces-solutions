#include <iostream>

using namespace std;

int main() {
    int a, b; cin >> a >> b;
    int y = 0; 
    while (true) {
        if (a > b) break;
        a *= 3; b *= 2;
        y++;
    }
    cout << y;
    return 0;
}
