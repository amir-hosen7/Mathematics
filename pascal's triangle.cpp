#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mid(b,e) b+(e-b)/2
#define inf 1e18
double PI=2*acos(0.0);

//---------------------------------------------------------------------------//
//Timus: 314795JS
//knight moves
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
//------------------------------------------------------------------------------//


const ll p=29;
const ll N=1e3+50;
const ll mod=1e9;

ll pascal[N][N]; 
void solve(){
	pascal[0][0] = 1;
	for (ll n=1; n<N; n++) {
	    pascal[n][0]=pascal[n][n]=1;
	    for (ll k=1; k<n; k++)
	        pascal[n][k]=(pascal[n-1][k-1]+pascal[n-1][k])%mod;
	}
}


int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

	solve();

	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		ll n; cin>>n;
		for(ll i=0; i<=n; i++){
			cout<<pascal[n][i]<<" ";
		}
		cout<<"\n";
	}
	return 0;
}



