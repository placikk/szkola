#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
#define st first
#define nd second
#define pb push_back
#define rep(i,a,b) for(ll i=a;i<=b;i++)
#define all(a) a.begin(),a.end()

void collatz(int n){
	int ile = 0;
	int mx = n;
	int wzrost = 0;
	while(n != 1){
		if(n%2 == 0){
			n /= 2;
			ile++;
		}else{
			n *= 3;
			n += 1;
			mx = max(mx,n);
			wzrost++;
		}
	}
	cout << "ilosc krokow do 1: " << ile << "\n";
	cout << "maks wartosc: " << mx << "\n";
	cout << "ilosc wzrostow: " << wzrost << "\n";
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout << "podaj liczbe startowa: ";
	int n; cin >> n;
	collatz(n);
}
