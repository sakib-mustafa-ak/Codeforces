#include<bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define Start ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define all(v) v.begin(),v.end()
#define rall(v) v.rbegin(),v.rend()
#define ff first
#define ss second
void solve(){
    int a,b;
    cin>>a>>b;
    int x = min(a,b);
    if(x==a){
    	cout<<x*(x-1)/2+1<<endl;
    	return;
    }
    cout<<x*(x+1)/2<<endl;
}

signed main(){
    Start
    int t = 1;
    cin>>t;
    while(t--){
        solve();
    }
}