#include <bits/stdc++.h>
#include <cctype>
#include <string>

using namespace std;
#define ll long long
#define pb push_back
#define vi vector<int>
#define all(x) x.begin(), x.end()
#define sz(x) (int)(x).size()
#define FAST_IO() ios_base::sync_with_stdio(false); cin.tie(NULL);

int main() {
    FAST_IO();
    vi nums;   
    string input; getline(cin, input);

    for (char& ch: input) {
        if (isdigit(ch)) nums.pb(ch - '0');
    }

    sort(all(nums));
    
    string output = "";
    int i = 0;
    for (int& n: nums) {
        output += n + '0';
        if (i < sz(nums) - 1) {
               output += '+'; 
        }
        i++;
    }

    cout << output;
    return 0;
}
