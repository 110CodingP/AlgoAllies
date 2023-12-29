#include <bits/stdc++.h>
using namespace std;
// //Better write a function
// void reverse_arr(int* A, int N) {
//   int first=0,last=N-1;
//   while(first!=last) {
//     swap(A[first],A[last]);
//     first++;
//     last--;
//   }
//   return;
// }
//Better way to write the above function such that it will work 
//for other containers too
void reverse_arr2(int* A, int N) {
  int* first=A,*last=A+N-1;
  while(first!=last) {
    swap(*first,*last);
    first++;
    last--;
  }
  return;
}
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  vector<int> vec={1,2,3,4,5,6,7,8,9};
  // reverse_arr(&vec[0],9);
  reverse_arr2(&vec[0],9);
  // //C style solution
  // for (int i=0;i<9/2;i++) {
  //   int temp=vec[8-i];
  //   vec[8-i]=vec[i];
  //   vec[i]=temp;
  // }
  for (int i:vec) {
    cout<<i<<' ';
  }
  return 0;
}