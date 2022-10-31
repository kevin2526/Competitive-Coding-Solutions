#include <bits/stdc++.h>
using namespace std;


#define rep(i, n) for(int i = 0; i < n; i++)

int main() {
    #ifndef ONLINE_JUDGE   
    freopen("input.txt", "r", stdin); 
    // freopen("output.txt", "w", stdout);    
    #endif 

    long long INF = 1e9;
    int n,m,i,a,b,s,c;
    cin>>n>>m;

    vector<vector<pair<int,int>>> adj(n);

    rep(i,m) {
    	cin>>a>>b>>c;	adj[a].push_back({b,c});
    }

    vector<int>d(n,INF);
    vector<int>p(n,-1);

    set<pair<int,int>>p1;

    cin>>s;
    
    d[s]=0;

    p1.insert({0,s});

    while(!p1.empty()){
    	int v = p1.begin()->second;
    	p1.erase(p1.begin());
    		for(auto edge : adj[v]){
    		int to = edge.first;	int len = edge.second;
    		if(d[to] > d[v]+len){
    			p1.erase({d[to],to});
    			d[to] = d[v] + len;
    			p1.insert({d[to],to});
				p[to] = v;
    			}
    		}	 	
    }
	rep(i,n) cout<<d[i]<<" ";	cout<<"\n";
    vector<int>ans;
    cin>>a;
    
    for(int i=a;i!=-1;i=p[i])  ans.push_back(i);
    
    
    reverse(ans.begin(),ans.end());
    
    rep(i,ans.size()) cout<<ans[i]<<" ";
    
    return 0;
}
