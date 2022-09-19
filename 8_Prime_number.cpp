#include<bits/stdc++.h>
using namespace std;
//Method 1:Simple iterative solution
//Step 1: checking the number of divisors b/w 1 and number n
//Step 2: 0 and 1 are not prime number
//Step 3: check if number of divisors of n are greater than 2 or not.

int main(){
    int count = 0;
    int n = 21;
    for(int i=1;i<n+1;i++){
        if(n%i==0)
        count+=1;
        // cout<<i<<endl;
    }
    if(n==0 || n==1){
        cout<<"The given is number "<< n <<" is not prime";
    }
    else if(count>2){
        cout<<"The given number "<< n <<" is not prime";
    }
    else {
        cout<<"The given number "<< n <<" is prime";
    }
    return 0;
}