#include <bits/stdc++.h>
#define MAX 100005
#define ll long long
#define upperlimit 1000100
#define INF 1e18
#define eps 1e-8
#define endl '\n'
#define pcc pair<char,char>
#define pii pair<int,int>
#define pll pair<ll,ll>
#define tr(container,it) for(typeof(container.begin()) it=container.begin();it!=container.end();it++)
#define MOD 1000000007
#define slld(t) scanf("%lld",&t)
#define sd(t) scanf("%d",&t)
#define pd(t) printf("%d\n",t)
#define plld(t) printf("%lld\n",t)
#define mp(a,b) make_pair(a,b)
#define FF first
#define SS second
#define pb(x) push_back(x)
#define vi vector<int>
#define clr(a) memset(a,0,sizeof(a))
#define debug(a) printf("check%d\n",a)
#define csl ios::sync_with_stdio(false);cin.tie(0);
#define fi(a,b,c) for(int i=a;i<b;i=i+c)
#define fj(a,b,c) for(int j=a;j<b;j+=c)
using namespace std;
 
ll gcd(ll n1,ll n2) {
	if(n1%n2==0)return n2;
	return gcd(n2,n1%n2);
}
ll powmod(ll base,ll exponent) {
	ll ans=1;
	while(exponent){
		if(exponent&1)ans=(ans*base)%MOD;
		base=(base*base)%MOD;
		exponent/=2;
	}
	return ans;
}
ll max(ll a,ll b,ll c) {
	return max(a,max(b,c));
}
int max(int a,int b,int c) {
	return max(a,max(b,c));
}

int main()
{
	//int t;
	// scanf("%d", &t);
	// while(t--){
		int n,k;
		sd(n);sd(k);
		vi s1, s2, s3;
		for (int i = 0; i < n; ++i)
		{
			int ti, a, b;
			sd(ti);sd(a);sd(b);
			if(a==1&&b==1){
				s1.pb(ti);
			}else if(a==1){
				s2.pb(ti);
			}else if(b==1){
				s3.pb(ti);
			}
		}
		sort(s1.begin(), s1.end());
		sort(s2.begin(), s2.end());
		sort(s3.begin(), s3.end());
		if (s2.size()+s1.size()<k || s3.size()+s1.size()<k)
		{
			pd(-1);
		}else{
			vi pre1, pre2, pre3;
			pre1.pb(0);
			pre2.pb(0);
			pre3.pb(0);
			fi(1,s1.size()+1,1){
				pre1.pb(pre1[i-1]+s1[i-1]);
				//pd(pre1[i]);
			}
			fi(1,s2.size()+1,1){
				pre2.pb(pre2[i-1]+s2[i-1]);
				//pd(pre2[i]);
			}
			fi(1,s3.size()+1,1){
				pre3.pb(pre3[i-1]+s3[i-1]);
				//pd(pre3[i]);
			}
			int ans=INT_MAX;
			//debug(pre1.size());
			for(int i=0 ;i<k+1 && i<pre1.size() ;i++){
				if(pre2.size()<k-i+1 || pre3.size()<k-i+1){}
				else{
					ans=min(ans, pre1[i]+pre2[k-i]+pre3[k-i]);
					//printf("debug:%d %d %d %d\n", i, pre1[i], pre2[k-i], pre3[k-i]);
				}
			}
			pd(ans);
		}
	// }
}