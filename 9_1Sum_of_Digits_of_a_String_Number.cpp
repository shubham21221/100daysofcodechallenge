#include<bits/stdc++.h>
using namespace std;

//Step 1: Initialize sum = 0
//Step 2: Traverse through the whole string(char array)
//Step 3: Ascii value pf numbers start from 48
//Step 4: subtracting 48 will give us value in int

int getSum(string num){
    int sum = 0;

    for(int i=0;i<num.length();i++){
        sum = sum + num[i] - 48;
    }
    return sum;
}
int main(){
    string num = "12345";
    
    cout<<"Sum : "<<getSum(num);
    return 0;
}

