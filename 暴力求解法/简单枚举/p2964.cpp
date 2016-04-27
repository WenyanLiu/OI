#include <iostream>
using namespace std;

int gcd (int a, int b) {
    if (a % b != 0)
        return gcd(b, a % b);
    else
        return b;
}

int main () {
    
    int a, b;
    cin >> a >> b;
    
    int GCD = gcd(a, b);
    int count = 0;
    
    for (int i = 2; i <= GCD; i++) {
        for ( ; GCD % i == 0; ) {
            GCD /= i;
            count++;
        }
    }
    cout << count << endl;
    
    return 0;
}