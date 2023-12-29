#include<bits/stdc++.h>
using namespace std;

// /*

// O(Q*N); 4*10^10>10^8
// O(N+Q) 4*10^5 <10^7


// 5

// 7 
// 8
// 3
// 4
// 1

//     For Q queries of integers N_i, 
//     print (N_i)! in each line i
    
//     Constraints:
//     1<= Q<= 2*10^5
//     0<=N<=2*10^5

//     Input format:
//     Q
//     N_1
//     N_2
//     N_3
//     ...
//     N_Q


// */


int main(){
	int q;
	cin>>q;
	int N=2e5+1;
	vector<int> fact(N);
	fact[0]=fact[1]=1;
	for(int i=2;i<N;i++){
		fact[i]=i*fact[i-1];/* n! = n* (n-1)!*/
	}
	while(q--){
		int n;
		cin>>n;
		cout<<fact[n]<<endl;
	}
}


// int main() {
// 	int q;
// 	cin>>q;
// 	while(q--){
// 		int n;
// 		cin>>n;
// 		int prod=1;
// 		for (int i=1;i<=n;i++) {
// 			prod*=i;
// 		}
// 		cout<<prod<<endl;
// 	}
// }