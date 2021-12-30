#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define loop(n)          for(int i = 0; i < (n); i++)
#define IOS    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
void file() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

/***************************************************************/


int main() {
    file();
    IOS

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string str;
        cin >> str;
            string ans, res;
            for (int i = 0; i < x; ++i) {
                ans += str[i];
                if ( str.size()==1||str[1]==str[0])
                    break;
                else if (str[i+1]>str[i])
                    break;
            }
            res = ans;
            reverse(res.begin() , res.end());
            cout << ans << res << endl;
        }
    }


/***************************************************************/


