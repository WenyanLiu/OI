#include <iostream>
#include <cstring>
#define MAXN 100
#define ADD (222*222)
using namespace std;

int N;
int a[MAXN][MAXN], x, y;
int d[MAXN][MAXN];

int p(int i, int j) {
    
    if (d[i][j] >= 0) {
        return d[i][j];
    }
    return d[i][j] = a[i][j] + (i == N-1 ? 0 : max(p(i+1,j), p(i+1,j+1)));
}

int p2198() {
    
    memset(d, -1, sizeof(d));
    
    cin >> N;
    
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    
    cin >> x >> y;
    
    a[x][y] = a[--x][--y] + ADD;
    
    cout << p(0, 0) - ADD << endl;
    
    return 0;
}