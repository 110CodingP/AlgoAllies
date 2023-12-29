#include<bits/stdc++.h>
using namespace std;


/*
	Given a string S
	determine whether its characters can be rearranged to give a palindromic string.

	Constraints:
	1<=|S|<=2*10^5

	Input format:
	T
	S_1
	S_2
	S_3
	...
	S_T

Sample Input:
	5
abec
babacc
xy
carrace
b

*/


int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		unordered_map<char,int> m;
		for(auto c:s){
			m[c]++;
		}
		int f=1;
		int c=0;/* count of odd counts*/
		for(auto pr:m){
			// cout<<pr.first<<" "<<pr.second<<endl;
			if(pr.second%2){
				if(n%2==0){
					f=0;
					break;
				}
				else {
					c++;
					if(c>1){
						f=0;
						break;
					}
				}
			}
		}
		// cout<<endl;
		cout<<(f==0 ? "No": "Yes")<<endl;

	}
}
