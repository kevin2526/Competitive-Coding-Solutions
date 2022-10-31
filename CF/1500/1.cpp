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

    vi a(n);    rep(i,n) cin>>a[i];

    int ans=n-1,ans1=0,p=0;

    for(int idx=1;idx<n;idx++) {
        int diff=a[idx]-a[0];     ans1=0;
        for(int i=1;i<n;i++) {
            
            int temp=i*diff;

            if(temp%idx) {
                ans1++; continue;
            }

            int cd = temp/idx;
            int pre=a[0]+cd,pre1=a[i]-cd;

            if(pre==a[i] or pre1==a[0]) continue;

            ans1++;
        }

        ans=min(ans,ans1);
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
