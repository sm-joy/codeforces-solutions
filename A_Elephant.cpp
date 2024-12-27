#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int x, s = 0; cin >> x;
    while (x) {
        if (x >= 5) { 
            x -= 5;
            s++;
        }
        else if (x >= 4) {
            x -= 4;
            s++;
        }
        else if (x >= 3) { 
            x -= 3;
            s++;
        }
        else if (x >= 2) { 
            x -= 2;
            s++;
        }
        else { 
            x -= 1;
            s++;
        }
    }
    cout << s;

    return 0;
}



