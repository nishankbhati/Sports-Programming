#include<bits/stdc++.h>
using namespace std;

long long int n=1000;

long long int prime[1001];
vector<long long int> PRIME;

void sieve(){
    long long int n=1000;
    for(long long int i=0;i<n+1;i++) prime[i]=1;

    prime[0]=0;
    prime[1]=0;
    for(long long int i=2;i<=n;i++){
        if(prime[i]==1){
            for(long long int j=i;i*j<=n;j++){
                prime[i*j]=0;
            }
        }
    }
    for(long long int i=2;i<=n;i++){
        if(prime[i]) PRIME.push_back(i);
    }

}

int main(){

    sieve();
    //auto::iterator i;
    for(long long int i=0;i<PRIME.size();i++) cout << PRIME[i] << endl;

return 0;
}
