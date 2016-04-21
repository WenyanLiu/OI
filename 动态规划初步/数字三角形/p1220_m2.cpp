#include <iostream>
#define MAXN 100
using namespace std;

int N;
int a[MAXN][MAXN];
int d[MAXN][MAXN];

int p1220() {
    
    cin >> N;
    
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            cin >> a[i][j];
        }
    }
    
//    递推计算
    for (j = 0; j < N; j++) {
        d[N-1][j] = a[N-1][j];
    }
    for (i = N-2; i >= 0; i--) {
        for (j = 0; j <= i; j++) {
            d[i][j] = a[i][j] + max(d[i+1][j], d[i+1][j+1]);
        }
    }
    
    cout << d[0][0] << endl;
    
    return 0;
}