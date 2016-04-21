#include <iostream>
#include <cstring>
#define MAXN 100
using namespace std;

int N;
int a[MAXN][MAXN];
int d[MAXN][MAXN];

// 记忆化搜索
int p(int i, int j) {
    
    if (d[i][j] >= 0) {
        return d[i][j];
    }
    return d[i][j] = a[i][j] + (i == N-1 ? 0 : max(p(i+1,j), p(i+1,j+1)));
}

int p1220() {
    
    memset(d, -1, sizeof(d));
    
    cin >> N;
    
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    
    cout << p(0, 0) << endl;
    
    return 0;
}