#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX_SIZE_N 100000
//使用する変数の宣言と初期化
int N=0,K=0;
int h[MAX_SIZE_N]={0};
int result=0;

int main()
{
  cin >> N >> K;
  for(int i=0;i<N;++i) cin >> h[i];

  //処理
  sort(h, h + N, greater<int>());
  for(int i=0;i<N;++i){
    if(h[i]>=K) result++;
  }
  
  cout << result;
    
  return 0;
}


