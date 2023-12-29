#include<bits/stdc++.h>
using namespace std;

const int N=2e5+1;



vector<int> isPrime(N,1); //intializes to 1;
int least_prime[N];/* initalizes to 0*/


void sieve(){
	isPrime[0]=isPrime[1]=0;
	for(int i=2;i<N;i++){
		if(isPrime[i]){
			least_prime[i]=i;
			for(int j=2*i;j<N;j+=i){
				isPrime[j]=0;
				if(least_prime[j]==0){
					least_prime[j]=i;
				}
			}
		}
	}
}

int main(){
	sieve();
  
}