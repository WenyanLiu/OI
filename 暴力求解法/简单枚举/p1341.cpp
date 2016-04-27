#include <iostream>
using namespace std;

bool ir (int a) {
    
    if (3 == a / 100 || 5 == a / 100) {
        return false;
    }
    if (3 == (a / 10) % 10 || 5 == (a / 10) % 10) {
        return false;
    }
    if (3 == a % 10 || 5 == a % 10) {
        return false;
    }
    return true;
}

int p1341() {
    
    int n;
    cin >> n;
    
    int sum = 0;
    
    for (int i = 1; i <= n; i++) {
        if (0 != i % 3 && 0 != i % 5 && ir(i) ) {
            sum += i * i;
        }
    }
    
    cout << sum << endl;
    
    return 0;
}