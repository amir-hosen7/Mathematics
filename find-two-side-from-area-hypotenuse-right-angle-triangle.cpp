#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define inf 1e18

const double eps = 1e-6;
const ll P = 29, N = 2e5 + 50, mod = 1e9 + 7;

//(h * h) = (a * a) + (b * b)
//A = 1/2 * (a * b)
//so, a^4 - (h*h) * (a*a) + 4*(A*A)

int main() {
	//freopen("input.txt", "r", stdin);
  //ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
  ll t = 1;
  cin >> t;
  for (ll T = 1; T <= t; T++) {
    double h, A;
    cin >> h >> A;
    double d = pow(h, 4) - (16 * (A * A));	
    if (d < 0) cout << "-1\n";
    else {
    	double r1 = ((h * h) + sqrt(d)) / 2;
      double r2 = ((h * h) - sqrt(d)) / 2;
      double a = sqrt(r1), b = sqrt(r2);
    	cout << fixed << setprecision(6) << min(a, b) << " " << max(a, b) << " " << h << "\n";
    }
  }
  return 0;
}



