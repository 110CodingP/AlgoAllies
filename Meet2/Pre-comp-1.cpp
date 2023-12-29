#include<bits/stdc++.h>
using namespace std;

/*	

	Problem:
	
	For a given integer N return N! (Factorial of N)

*/


int main(){
	int n;
	cin>>n;
	int product=1;
	for(int i=1;i<=n;i++){
		product*=i;/*product=product*i*/
	}
	cout<<product;
}

