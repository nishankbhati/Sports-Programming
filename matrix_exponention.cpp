
#include <bits/stdc++.h>
using namespace std;
inline void IO(void){
	freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
};
inline void FAST_IO(void){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
};
const long long int INF=2e18;
const long MOD=1e9+7;

void multiply(long long int F[2][2],long long int M[2][2]);
void power(long long int F[2][2],long long int n);

long long int fib(long long int n){
	long long int F[2][2]={{1,1},{1,0}};
	if(n==0) return 0;

	power(F,n-1);
	return ((F[0][0])%MOD);
}

void power(long long int F[2][2],long long int n){
	if(n==0 || n==1) return;

	long long int M[2][2]={{1,1},{1,0}};
	power(F,n/2);
	multiply(F,F);
	if(n%2!=0) {
		multiply(F,M);
	}
	//cout << F[0][0]<< "()()()()()()";
}

void multiply(long long int F[2][2],long long int M[2][2]){
	long long int w,x,y,z;
	x = ((F[0][0]*M[0][0])%MOD + (F[0][1]*M[1][0])%MOD)%MOD;
	y = ((F[0][0]*M[0][1])%MOD + (F[0][1]*M[1][1])%MOD)%MOD;
	z = ((F[1][0]*M[0][0])%MOD + (F[1][1]*M[1][0])%MOD)%MOD;
	w = ((F[1][0]*M[0][1])%MOD + (F[1][1]*M[1][1])%MOD)%MOD;

	F[0][0]=x;
	F[0][1]=y;
	F[1][0]=z;
	F[1][1]=w;
	//cout << F[0][0] << "\n";
}

int main(int argc, char const *argv[])
{
	/* code */
	//IO();
	FAST_IO();	
	int t;
	cin >> t;
	while(t--){
		long long int x;
		cin >> x;
		cout << fib(x) << "\n";
		
	}
	
	return 0;
}
