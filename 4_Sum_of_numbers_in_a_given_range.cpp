#include <bits/stdc++.h>
using namespace std;
//method 1: Using Brute force
//Step 1: Gating a two Input1 ! Input2
//Step 2: Initialize sum = 0;
//Step 3: Run an iterative loop between [s,r]in iteration of (i)
//step 4: In each iteration do sum = sum + i;
// Step 5: Print sum value 

int main(){

    int s ; cin>>s;  //Input 1
    int e ; cin>>e;  //Input 2

    int sum = 0; //Initialize sum = 0
    for(int i=s;i<=e;i++) //
        sum+=i; //sum = sum + i;

    cout<<sum;

return 0;
}

