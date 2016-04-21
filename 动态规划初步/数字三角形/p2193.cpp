#include <iostream>
#include <cstring>
#define MAXN 25
using namespace std;

int N;
int a[MAXN][MAXN];
int d[MAXN][MAXN];

int p(int i, int j) {
    
    if (d[i][j] >= 0) {
        return d[i][j];
    }
    return d[i][j] = a[i][j] + (i == N-1 ? 0 : max(p(i+1,j), p(i+1,j+1)));
}

int p2193() {
    
    memset(d, -1, sizeof(d));
    
    cin >> N;
    
    int sum = 0;
    int checkpoint = N/2-1;
    
    int i, j;
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            cin >> a[i][j];
            if (i == j && i < checkpoint) {
                sum += a[i][j];
            }
        }
    }
    
    cout << sum + p(checkpoint, checkpoint) << endl;
    
    return 0;
}