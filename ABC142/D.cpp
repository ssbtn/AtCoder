#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX 10000
//使用する変数の宣言と初期化
int A=0,B=0;
int count=0,prifac[MAX]={0};
int result=0;

int gcd(int a,int b)
{
	if (a%b==0)
	{
		return(b);
    }
	else
	{
		return(gcd(b,a%b));
    }
}

int main()
{
  cin >> A >>B;

  //処理
  int GCD=gcd(A,B)

  for(n=1;n<=GCD;n++){
    if(GCD%n==0){
      prifac[count]=n;
      count++;
    }
  }

  for(i=0;i<count;i++){
    for(j=i+1;j<count;j++){
        if(prifac[i]==0 || prifac[j]==0) break;
        if(gcd(prifac[i],prifac[j])==1) result++;
    }
  }

  cout << result;
    
  return 0;
}