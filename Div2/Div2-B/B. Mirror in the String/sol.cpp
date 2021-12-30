#include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int x;
        cin >> x;
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


