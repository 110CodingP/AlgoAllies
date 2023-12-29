#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  // //Creating a vector of size zero,name vec and 
  // //then priting its size
  // vector<int> vec;
  // cout<<vec.size()<<'\n';
  // //Creating a vector of size 3
  // //Note that vector elements are initialized with 0 
  // //by default
  // vector<int> vec2(3);
  // cout<<vec2.size();
  // //Iterating over elements of the vector
  // for (auto i:vec2) {
  //   cout<<'\n'<<i;
  // }
  // //Creating a vector of size 2 and initialize each 
  // // element with 3
  // vector<int> vec3(2,3);
  // // Printing elements of array using 
  // // for each loop
  // for (auto i:vec3) {
  //   cout<<'\n'<<i;
  // }
  // //Printing new_line
  // cout<<'\n';
  // vec3[1]=2;
  // //Old way of printing elements of array
  // for (int i=0;i<vec3.size();i++) {
  //   cout<<vec3[i]<<' ';
  // }
  // //To add an element to vector
  // //Note we can't pass multiple arguments into push_back
  // vec3.push_back(4);
  // cout<<'\n';
  // for (int i=0;i<vec3.size();i++) {
  //   cout<<vec3[i]<<' ';
  // }
  // //To delete elements from vector
  // vec3.pop_back();
  // cout<<'\n';
  // //Fancy way of printing elements of the vector
  // for (auto it=vec3.begin();it!=vec3.end();it++) {
  //     cout<<*it<<' ';
  // }
  //Another method for initializing vector
  vector<int> v={1,2,3,4,5,6,7,8};
  for (int i: v) {
    cout<<i<<' ';
  }
  //Accessing first element of vector
  v.front()=0;
  //Acessing last element of vector
  v.back()=0;
  cout<<'\n';
  for (int i: v) {
    cout<<i<<' ';
  }
  //Sorting vector
  sort(v.begin(),v.end());
  cout<<'\n';
  for (int i: v) {
    cout<<i<<' ';
  }
  cout<<'\n';
  //Sorting vector in descending order
  sort(v.begin(),v.end(),greater<int>());
  for (int i:v) {
    cout<<i<<' ';
  }
  return 0;
}