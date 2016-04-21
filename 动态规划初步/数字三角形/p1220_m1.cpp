#include <iostream>
#define MAXN 100
using namespace std;

int N;
int a[MAXN][MAXN];

// 递归计算
int d(int i, int j) {
    
    return a[i][j] + (i == N-1 ? 0 : max(d(i+1,j), d(i+1,j+1)));
}

int p1220() {
    
    cin >> N;
  
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << d(0, 0) << endl;
    
    return 0;
}