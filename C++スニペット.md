# 競プロC++　スニペット集

## ベース

```C++
#include <bits/stdc++.h>
 
using namespace std;

//使用する配列の最大要素数
#define MAX_SIZE_N 100
//使用する変数の宣言と初期化
int a=0,b=0,c=0,n;
int array[MAX_SIZE_N]={0};
int result=0;

int main()
{
  cin >> n;

  //処理
    
  
  cout << result;
    
  return 0;
}
```



## 入力系

### 要素数N指定の次行に区切り文字空白で要素数羅列

```C++
  int N,a[100]={0};
  cin >> N;
  for(int i=0;i<N;++i) cin >> a[i];
```





## 出力系

### ## aa





## ソート系

### 昇順(小さい順)ソート

```C++
//a[]には整数でランダムな数字が入っている。
//ソートする配列の初期位置、ソースする配列の最後尾
sort(a, a + N);

```

### 降順(大きい順に)ソート

```C++
//a[]には整数でランダムな数字が入っている。
//ソートする配列の初期位置、ソースする配列の最後尾、降順のフラグ
sort(a, a + N, greater<int>());

```



## 分類不能

### 各桁の和

```C++
// 事前に宣言する
// 各桁の和を計算する関数
int findSumOfDigits(int n) {
  int sum = 0;
  while (n > 0) { // n が 0 になるまで
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int sum = findSumOfDigits(i); // i の各桁の和

```

### バケット法

```C++
#define MAX_SIZE_N 100 
//境界値有るので＋１して確保
#define MAX_VALUE_A 100+1 

int a[MAX_SIZE_N],n;
cin >> n;
for (int i = 0; i < n; ++i) cin >> a[i];

//a[i]の取りうる最大値でバケットを作成
int bucket[MAX_VALUE_N] = {0};
for (int i = 0; i < MAX_SIZE_N; ++i) {
    bucket[a[i]]++;  // a[i] が 1 個増える
}
```

