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

    int cnt=0,cnt1=0,x;

    rep(i,n) {
        cin>>x;
        if(x%2) cnt1++;
        else cnt++;
    }

    if(cnt1%4==2) cout<<"Bob\n";
    else if(cnt1%4==3) cout<<"Alice\n";
    else if(cnt1%4==0) cout<<"Alice\n";
    else {
        if(cnt%2==1) cout<<"Alice\n";
        else cout<<"Bob\n";
    }

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
