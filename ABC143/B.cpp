#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX_SIZE_N 50
//使用する変数の宣言と初期化
int a=0,b=0,c=0,n;
int d[MAX_SIZE_N]={0};
int result=0;

int main()
{
  //入力
  cin >> n;
  for(int i=0;i<n;++i) cin >> d[i];

  //処理

  for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){
      result += d[i]*d[j];
    }
  }    

  //出力
  cout << result;
    
  return 0;
}