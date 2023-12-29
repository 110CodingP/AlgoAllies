#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
  //Creating a queue with name line
  queue<int> line;
  //Adding elements to end of queue
  line.push(3);
  line.push(1);
  line.push(2);
  //Printing first element of queue
  cout<<line.front();
  cout<<' ';
  //Removing first element of queue
  line.pop();
  cout<<line.front();
  return 0;
}