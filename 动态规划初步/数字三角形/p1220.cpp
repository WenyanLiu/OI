#include <iostream>
using namespace std;
#define MAXN 100

int p1220() {

    int N;
    cin >> N;
    
    int tree[MAXN][MAXN];
    int v[MAXN][MAXN];
    
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            cin >> tree[i][j];
        }
    }
    
    int v_l, v_r;
    v[0][0] = tree[0][0];
    for (i = 1; i < N; i++) {
        for (j = 0; j <= i; j++) {
            if (j-1 >= 0) {
                v_l = v[i-1][j-1];
            } else {
                v_l = -65535;
            }
            if (j != i) {
                v_r = v[i-1][j];
            } else {
                v_r = -65535;
            }
            v[i][j] = tree[i][j] + (v_l > v_r ? v_l : v_r);
        }
    }
    
    int max = -65535;
    for (j = 0; j < N; j++) {
        max = max > v[N-1][j] ? max : v[N-1][j];
    }
    
    cout << max;
    return 0;
}