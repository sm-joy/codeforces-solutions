#include <bits/stdc++.h>

using namespace std;
#define pb push_back
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define FAST_IO() ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    FAST_IO();
    int n, m; cin >> n >> m;
    vi tvs;

    while (n--) {
        int x; cin >> x;
        tvs.pb(x);
    }

    sort(all(tvs));

    int sum = 0; 
    while (m--) {
        if (tvs[m] < 0) {
            sum += -tvs[m];
        }
    }

    cout << sum;
    
    return 0;
}
