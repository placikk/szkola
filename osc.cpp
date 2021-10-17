#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define st first
#define nd second
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define all(a) a.begin(),a.end()

int suma_cyfr_r(int x){
	if(x < 10) return x;
	return x%10 + suma_cyfr_r(x/10);
}

int suma_cyfr_i(int x){
	int w = 0;
	while(x){
		w += x%10;
		x /= 10;
	}
	return w;
}

int osc_r(int x){
	if(suma_cyfr_i(x) < 10) return suma_cyfr_i(x);
	return osc_r(suma_cyfr_i(x));
}

int osc_i(int x){
	while(x >= 10) x = suma_cyfr_i(x);
	return x;
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int x; cin >> x;
	cout << osc_r(x) << "\n";
	cout << osc_i(x) << "\n";
}
