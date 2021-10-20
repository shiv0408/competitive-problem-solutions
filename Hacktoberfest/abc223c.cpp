#include <bits/stdc++.h>
using namespace std;
 
int main() {
	// your code goes here
	int n;
	cin >> n;
	vector<double> a(n), b(n);
	for(int i = 0; i < n; i++){
		cin >> a[i] >> b[i];
	}
	double tmp = 0, ans = 0;
	for(int i = 0; i < n; i++){
    tmp += a[i] / b[i];
  }
	tmp /= 2;
	for(int i = 0; i < n; i++){
		ans += min(a[i], tmp * b[i]);
		tmp -= min(a[i] / b[i], t);
	}
	cout<<fixed<<setprecision(15);
	cout<<ans<<endl;
	return 0;
}
