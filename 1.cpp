/******************************************
* AUTHOR : kevin_007 *
******************************************/
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
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
#define sz(x) ((int)(x).size())
#define F first
#define S second
template<class T> using ordered_set = tree<T, null_type, less_equal<T>, 
rb_tree_tag,tree_order_statistics_node_update> ;
// order_of_key (k) : Number of items strictly smaller than k .
// find_by_order(k) : K-th element in a set (counting from zero).

int solve(){

    int n;  cin>>n;

    vi a(n);

    rep (i,n) cin>>a[i];

    sort(a.begin(),a.end());

    vll pref(n+1,0);

    rep1(i,n) {
        pref[i] = pref[i-1] + a[i-1]; 
    }

    ll ans=0;

    ll pt=1,pt1=n-1,w1,w2,w3;

    ll len=1, len1=pt1-pt;

    while(len<=len1) {
        w1=pref[pt];
        w2=pref[pt1]-pref[pt1-len];
        w3=pref[n]-pref[pt1];

        ans = max(ans, 2*w3-w2-w1);

        pt++;   pt1--;

        len++;  len1=pt1-pt;
    }

    cout<<ans<<"\n";

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
