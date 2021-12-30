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
        cin>>n;
        map<int , int>mp;
        int x;

        for (int i = 0; i <n ; ++i) {
            cin>>x;
            mp[abs(x)]++;
        }
        int ans=0;
        for (auto elem : mp){
            if (elem.first==0){
                ans+=min(1 , elem.second);
            }
            else
            ans+=min(2, elem.second);
        }
        cout<<ans<<endl;
    }
}


/***************************************************************/


