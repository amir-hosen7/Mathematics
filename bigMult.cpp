ll bigMult(ll a,ll b){
	ll res=0;
	a=a%mod;
	while(b>0){
		if(b%2==1){
			res=(res+a)%mod;
		}
		a=(a*2)%mod;
		b/=2;
	}
	return res;
}
