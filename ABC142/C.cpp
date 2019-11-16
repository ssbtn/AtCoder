#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX_SIZE_N 100000
#define MAX_BUCKET 10000+1 
//使用する変数の宣言と初期化
int N=0;
int A[MAX_SIZE_N][2]={0};
int bucket[MAX_BUCKET] = {0};
int result=0;

int main()
{
  cin >> N;
  for(int i=0;i<N;++i){ 
    cin >> A[i][0];
    A[i][1]=n;
  }

  //処理
    
  
  cout << result;
    
  return 0;
}

#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX_SIZE_N 100001
//使用する変数の宣言と初期化
int N=0;
int A[MAX_SIZE_N]={0};
int n[MAX_SIZE_N]={0};
int result=0;

void sort2vectors(vector<int> &av, vector<int> &bv)
{
        int n = av.size();
        vector<int> p(n), av2(n), bv2(n);
        iota(p.begin(), p.end(), 0);
        sort(p.begin(), p.end(), [&](int a, int b) { return av[a] < av[b]; });
        for (int i = 0; i < n; i++) {
                av2[i] = av[p[i]];
                bv2[i] = bv[p[i]];
        }
        av = av2;
        bv = bv2;
}

int main()
{
  cin >> N;
  for(int i=1;i<=N;++i){ 
    cin >> A[i];
    n[i]=i;
  }

  vector<int> av(A, A+N+1);
  vector<int> bv(n, n+N+1);
  sort2vectors(av, bv);

  //答え
  for(int i=1;i<=N;++i){ 
    cout << bv[i] << " ";
  }
    
  return 0;
}

3
2 3 1

3 1 2


5
1 2 3 4 5

1 2 3 4 5

8
8 2 7 3 4 5 6 1

8 2 4 5 6 7 3 1
