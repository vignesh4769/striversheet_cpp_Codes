#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    if (n == 0) {
        cout << 1 << endl;
        return 0;
    }
    
    int count = 0;
    while (n > 0) {
        n /= 10;
        count++;
    }
    
    cout << count << endl;
    return 0;
}