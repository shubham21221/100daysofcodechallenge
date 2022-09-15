// Using Brute Force
// Step 1: Start
// Step 2: Insert the number.
// Step 3: If the number is greater then Zero then print "The number is Positive"
// Step 4: If the number is smaller then zero, then print, "The number is Negative"
// Step 5: Else print, "The number is Zero"
// Step 6: Stop

#include<bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin>>num;

    if(num>=0){
        if(num==0)
            cout<<"Zero";
        else
            cout<<"The number is positive";
    }
    else 
            cout<<"The number is negative";
    return 0;
}