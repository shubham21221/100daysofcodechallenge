#include<bits/stdc++.h>
using namespace std;
//Method 2: Optimization by skipping even iteration
//Step 1: 0 and 1 are not prime number
//Step 2: negative number are not prime
//Step 3: special case as 2 is the only even number that is prime
//Step 4: check if n is a multiple of 2 thus all these won't be prime
//Step 5: If not , then just check the odds

bool isPrime(int n){
    if(n <= 1)
       return false;

    else if(n == 2)
       return true;
    else if(n % 2 == 0)
       return false;
    for(int i=3; i<=sqrt(n);i+=2){
        if(n%i == 0)
           return false;
    }
    return true;
}
int main(){
    int n = 29;

    if(isPrime(n))
        cout<< n <<" is a prime Number";
    else
       cout<< n <<" is not a prime Number";
    
    return 0;
}