//Using Brute force
//Step 1: Input an integer input "number"
//step 2: Check whether the number is divisible by 2
//step 3: This mean using nodulo/remainder operator leaves 0 as a remainder
//step 4: Do: if (number % 2==0)
    //   1.if yes, print "Even no"
    //   2.if not, print "Odd number"

#include <bits/stdc++.h>
using namespace std;

int main(){
    int number;
    cout<<"Enter a number:";
    cin>>number;
    //checking whether the number is even or odd
    if(number % 2 == 0)
        cout<< number <<": Even";
    else
        cout<< number << ": Odd";

    //Checking if the number is divisible by 2
    // number % 2 == 0 ? cout << "Even":cout << "Odd";
    return 0;
}