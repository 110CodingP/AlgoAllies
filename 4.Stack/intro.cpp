#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  //Creating a stack named tower
  stack<int> tower;
  //Adding elements to the stack
  tower.push(2);
  tower.push(3);
  tower.push(4);
  //Printing last element of stack
  cout<<tower.top();
  //Removing last element of stack
  tower.pop();
  cout<<' ';
  cout<<tower.top();
  return 0;
}