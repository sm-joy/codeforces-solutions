#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    char buff[1000];
    cin >> buff;
    if (buff[0] >= 'a' && buff[0] <= 'z')
        buff[0] -= 32;
    cout << buff;
    return 0;
}
