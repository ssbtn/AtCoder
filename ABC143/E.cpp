#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX_SIZE_N 300
#define MAX_SIZE_M N*(N-1)/2
#define MAX_SIZE_L 1000000000
#define MAX_SIZE_Q N*(N-1)

//使用する変数の宣言と初期化
int N,M,Q;
long int L;
int A[MAX_SIZE_M]={0};
int B[MAX_SIZE_M]={0};
int C[MAX_SIZE_M]={0};
int s[MAX_SIZE_Q]={0};
int t[MAX_SIZE_Q]={0};
int result=0;
int Distance[MAX_SIZE_N][MAX_SIZE_N]={{0}};
int main()
{
  cin >> N >> M >> L;
  for(int i=0;i<M;++i) cin >> A[i]>> B[i]>> C[i];
  cin >> Q;
  for(int i=0;i<Q;++i) cin >> s[Q]>> t[Q];

  for(int i=0;i<N;++i){
      for(int j=0;j<N;++j){
        Distance[i][j]=-1
        if(i==j)Distance[i][j]=0;
     }
  }
  
  for(int i=0;i<M;++i){
    Distance[A[i]][B[i]]=C[i];
    Distance[B[i]][A[i]]=C[i];
  }  

  
  for (int x=0;x<Q;x++){

    int nPoint=N;/* 地点の数 */
    int sp=s[i];/* 出発地の地点番号 */
    int dp=t[i];/* 目的地の地点番号 */ 


    /* 出力変数sRouteとsDistを定義 */
    int sRoute[nPoint];/* 出発地から目的地までの最短経路上の地点の地点番号を目的地から出発地の順に設定する1次元配列 */
    int sDist;/* 出発地から目的地までの最短距離 */
    
    /* その他使う変数 */
    int pDist[nPoint];/* 出発地から各地点までの最短距離を設定する配列 */
    int pRoute[nPoint];
    bool pFixed[nPoint];/* 出発地から各地点までの最短距離が確定しているかどうかを識別するための配列 */
    int sPoint,i,j,newDist;
    
    sDist=99999; /* 出発地から目的地までの最短距離に初期値を格納する（変更しなくてよい） */
    
    for(i=0;i<nPoint;i++){
      sRoute[i]=-1; /* 最短経路上の地点の地点番号に初期値を格納する */
      pDist[i]=99999; /* 出発地から各地点までの最短距離に初期値を格納する */
      pFixed[i]=false; /* 各地点の最短距離の確定状態に初期値を格納する */
    }
    
    pDist[sp]=0;/* 出発地から出発地自体への最短距離に0を設定する */
    
    while(true){ /* 最短経路探索処理 */
      i=0;
      while(i<nPoint){/* 未確定の地点を1つ探す */
        if(pFixed[i]==0){
          break; /* 再内側の繰り返しから抜ける */
        }
        i=i+1;
      }
      
      if(i==nPoint){ /* 出発地から全ての地点までの最短経路が確定していれば */
        break; /* 最短経路探索処理を抜ける */
      }
      
      for(j=i+1;j<nPoint;j++){ /* 最短距離がより短い地点を探す */
        if((pFixed[j]==0) && (pDist[j] < pDist[i])){
          i=j;
        }
      }
      
      sPoint=i;
      pFixed[sPoint]=true; /* 出発地からの最短距離を確定する */
      
      for(j=0;j<nPoint;j++){
        if((Distance[sPoint][j]>0) && (pFixed[j]==0)){
          newDist=pDist[sPoint]+Distance[sPoint][j];
          if(newDist<pDist[j]){
            pDist[j]=newDist;
            pRoute[j]=sPoint;
          }
        }
      }
    }
    
    sDist=pDist[dp];
    j=0;
    i=dp;
    while(i!=sp){
      sRoute[j]=i;
      i=pRoute[i];
      j=j+1;
    }
    sRoute[j]=sp;
    
    //燃料
    int l=L;
    /* 出力値表示 */
    for(i=j;i>=0;i--){
      printf("%d,",sRoute[i]);
      Distance[sRoute[i]][sRoute[i+1]]
    }
  }

  
  cout << result;
    
  return 0;
}