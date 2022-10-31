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

    int n;  cin>>n;

    ll ans=0;

    map<ll,ll> mp1;

    ll x;   

    rep(i,n) {
        cin>>x;
        mp1[x]++;
    }

    int cnt=0;

    for(auto itr: mp1) {
        if(cnt>1) ans += itr.second*itr.first;
        cnt++; 
    }

    cout<<-ans<<"\n";

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
