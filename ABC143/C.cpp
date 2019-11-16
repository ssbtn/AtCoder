#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX_SIZE_N 10000
//使用する変数の宣言と初期化
int n;
string S;
char s[MAX_SIZE_N]={0};
int result=1;

int main()
{
  cin >> n;
  cin >> S; 
  for(int i = 0; i < n-1; ++i){
    if(S[i]!=S[i+1]) result++;
}
 
  cout << result;
    
  return 0;
}