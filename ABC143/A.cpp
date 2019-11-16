#include <bits/stdc++.h>
 
using namespace std;

//A,Bの最大要素数
#define MAX_SIZE 100
//使用する変数の宣言と初期化
int A=0,B=0,result=0,n;

int main()
{
  //A,B入出力受取り
  cin >> A >> B;

  //処理
  if(A<=2*B) result = 0;
  else result = A-2B;
  
  cout << result;
  return 0;
}