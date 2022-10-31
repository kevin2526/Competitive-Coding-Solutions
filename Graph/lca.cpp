/******************************************
* AUTHOR : kevin_007 *
******************************************/
#include <bits/stdc++.h>
using namespace std;
#define Speed_UP  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define LL long long
#define N 5000
#define MOD 1000000007
#define dd double
#define rep(i, n) for(int i = 0; i < n; i++)
#define REP(i,a,b) for(int i=a;i<b;i++)
#define rep1(i,b) for(int i=1;i<=b;i++)
#define pb push_back
#define mp make_pair
#define sz(x) ((int)(x).size())
#define F first
#define S second

vector<vector<int>> adj(N), up;

vector<int> tin1(N), tout(N);

int timer = 0, n, l;

void dfs(int v, int p){
    
    tin1[v] = ++timer;

    up[v][0] = p;

    for(int i=1;i<=l;i++)
        up[v][i] = up[up[v][i-1]][i-1];

    for(auto i : adj[v])
        if(i != p)
            dfs(i,v);

    tout[v] = ++timer;
}

bool is_ancestor(int u,int v){
    return tin1[u] <= tin1[v] && tout[u] >= tout[v];
}

int lca(int u, int v){

    if(is_ancestor(u,v)) return u;

    if(is_ancestor(v,u)) return v;

    for(int i=l;i>=0;i--)
        if(!is_ancestor(up[u][i],v))
            u = up[u][i];

    return up[u][0];
}

int main() {
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);    
    #endif 
    Speed_UP

    int m,a,b;

    cin >> n >> m; l = ceil(log2(n));   timer = 0;

    up.assign(N,vector<int>(l,0));

    tin1.assign(N,0);    tout.assign(N,0);

    while(m--) {
        cin >> a >> b;

        adj[a].pb(b);  
    }

    dfs(1,1);

    cin >> m;

    while(m--){
        cin >> a >> b;

        cout << lca(a,b) << "\n";
    }


    return 0;
}
