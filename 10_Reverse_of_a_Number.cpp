#include<bits/stdc++.h>
using namespace std;

// Method : Algorithm
// Step 1: Initialize reverse = 0, rem
// Step 2: Extract the last digit of num (rem = num % 10)
// Step 3: Multiply reverse with 10 & add remainder (reverse = reverse * 10 + rem)
// Step 4: Reduce the original number (num = num/10)
// Step 5: Keep doing this until original number becomes 0

int main(){
    //variable initialization
    int num, reverse = 0, rem;
    num = 1234;
    cout<<"\nThe number is"<<num;

    while(num != 0){
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }
    //output
    cout<<"\nReversed Number: "<<reverse;

    return 0;
}