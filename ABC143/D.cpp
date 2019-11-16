#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX_SIZE_N 2000
//使用する変数の宣言と初期化
int a=0,b=0,c=0,n;
int L[MAX_SIZE_N]={0};
int result=0;

int main()
{
  cin >> n;
  for(int i=0;i<n;++i) cin >> L[i];
  sort(L, L + n);

  //処理
  for(int i=0;i<n-2;i++){
    for(int j=i+1;j<n-1;j++){
      for(int k=j+1;k<n;k++){

        if(L[i]<L[j]+L[k] && L[j]<L[k]+L[i] && L[k]<L[i]+L[j] ) result++;
        else break;

      }
    }
  }    
  
  cout << result;
    
  return 0;
}