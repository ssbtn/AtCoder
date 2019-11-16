#include <bits/stdc++.h>
 
using namespace std;

//使用する変数の宣言と初期化
double N,result;

int main()
{
  cin >> N;

  if(int(N)%2==0){
    result = 0.5;
  }
  else{
    result = (N+1.0)/2.0/N;
  } 
  
  cout << result;
    
  return 0;
}