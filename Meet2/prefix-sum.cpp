#include<bits/stdc++.h>
using namespace std;

/*
5 3
2 6 5 3 8



2 4 
1 5 

3 3 


    Given an array A of size N, For each query (L,R)
    return the sum of elements in sub-array [L, L+1,... R]

    Constraints:
    1<=Q<= 2*10^5
    0<=N<=2*10^5
    1<=L<=R<=N

    N Q
    A_1 A_2 A_3 ... A_N 



	4*10^5
*/

int main(){
	int n,q;
	cin>>n>>q;
	vector<int> a(n);

	/* O(n)*/
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int> prefix_sum(n);
	prefix_sum[0]= a[0];
	for(int i=1;i<n;i++){
		prefix_sum[i]=prefix_sum[i-1]+a[i];
	}
	prefix_sum.insert(prefix_sum.begin(),0);/* inserts a 0 at the beginning*/
	while(q--){
		int l,r;
		cin>>l>>r;
		int sum;
		sum=prefix_sum[r]-prefix_sum[l-1];
		cout<<sum<<endl;
	}
}