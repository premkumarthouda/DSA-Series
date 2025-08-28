#include<bits/stdc++.h>
using namespace std;

int sumn(int n){
    if(n==1) {
        return 1;
        
    }
    return sumn(n-1)*n;
}
int main() {
  // write your code here...
  int n;
  cin >> n;
  cout <<sumn(n) << endl;
  return 0;
}
