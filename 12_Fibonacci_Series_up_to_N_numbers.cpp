#include <bits/stdc++.h>
using namespace std;

//Method: This method uses dynamic programming concept.
void fib(int n){
    int f[n + 1];
    f[0] = 0;
    f[1] = 1;
    cout << f[0] << ", " << f[1] <<", ";
    for (int i = 2; i < n; i++){
        f[i] = f[i - 1] + f[i - 2];
        cout << f[i] <<", ";
    }
}
int main(){
    int n = 10;
    fib(n);
    
    return 0;
}