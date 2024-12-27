// INCOMPLETE

#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define FAST_IO() ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    FAST_IO();
    const char* timur = "Timur";
    int t; cin >> t;  cin.ignore();
    char* str;
    while (t--) {
        int l; cin >> l;  cin.ignore();
        str = new char[l+1];
        cin.get(str, l+1);  cin.ignore();
        bool error = false;
        for (int i = 0; i < l; ++i) {
            bool found = false;
            for (int j = 0; j < 5; ++j) {
                if (str[i] == timur[j]) {
                    found = true;
                    break;
                }
            }

            if (!found) {
                error = true;
                break;
            }
        }


        if (error) cout << "NO\n";
        else cout << "YES\n";

        delete[] str;
    }

    return 0;
}
