/******************************************
* AUTHOR : kevin_007 *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define Speed_UP  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
clock_t clk=clock();
typedef long long ll;
typedef long double ld;
typedef pair<ll, ll> pt;
#define vi vector<int>
#define vll vector<ll>
#define N 100005
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define repe(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define F first
#define S second

int solve(){

    ll a,b,c,d;     cin>>a>>b>>c>>d;

    ll m=a*b;

    for(ll i=a+1;i<=c;i++) {
        ll gcd=__gcd(i,m);

        if(gcd==m) {
            cout<<i<<" "<<b+1<<"\n";
            return 0;
        }

        ll y=m/gcd;
        ll rem=d%y;

        if(d-rem>b) {
            cout<<i<<" "<<d-rem<<"\n";

            return 0;
        }
    }

    cout<<"-1 -1\n";

    return 0;
}

int main() {
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);    
    #endif 
    Speed_UP


    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;

}
