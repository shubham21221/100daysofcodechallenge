#include<bits/stdc++.h>
using namespace std;
// Step 1: Check if both numbers are equal
// If true then print “Both are equal”
// Step 2: Else if num1 > num2
// If true then print num1 greater than num2
// Step 3: Else num2 has to be thee greatest
// Print num2 is greater than num1
int main(){
    int num1 = 23;
    int num2 = 43;

    if(num1 == num2)
       cout<<"Both are equal";
    else if(num1>num2)
       cout<< num1 <<" is greater than "<<num2;
    else
       cout<< num2 <<" is greater than "<<num1;
    return 0;
}
// Time Complexity : O(1)
// Space Complexity : O(1)