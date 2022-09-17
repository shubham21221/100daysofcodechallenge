#include<bits/stdc++.h>
using namespace std;
//Method 1 Using simple if-else condition
//Step 1: Check if first number is greater than second and third
//  Print first is the greatest
//Step 2: Check if second number is greater than first and third
//  Print second is the greatest
//Step 3: Third number has to be greatest
//  Print third is the greatest
int main(){
    int first;cin>>first;
    int second;cin>>second;
    int third;cin>>third;

    if((first>=second) && (first>=third))
       cout<<first<<"is the greatest";
    else if((second>=first) && (second>=third))
       cout<<second<<"is the greaterst";
    else
       cout<<third<<"is the greaterst";
       cout<<endl;

//method 2 Using inbuilt max functions
//Step 1: Create a result 
//Step 2: Using a max funtion
    int result = max(first,max(second,third));
    cout<<result<<"is the greaterst";

    return 0;
}