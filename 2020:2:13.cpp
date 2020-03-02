#include<iostream>
using namespace std;

int main(){
  int n;
  cin >> n;
  int a[][];
  for(int i = 0 ; i < n; i++){
    int t;
    cin >> t;
    int te[t];
    for(int j = 0 ; j < t ; j++){
      cin >> te[j];
    }
    a[i] = te;
  }
  for(int i = 0; i < n) ; i++){
    sort(a[i], a[i]+sizeof(a[i])/8);
  }
  for(i = n-1; i > 0; i--){
    for(j = 0; j <= i-1; j++){
      if(change(i,j))

    }
  }
}
