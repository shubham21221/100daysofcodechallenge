#include <bits/stdc++.h>
using namespace std;

//Step 1: Initialize sum = 0
//Step 2: While extracting the last digit of num add it to the sum (sum += num % 10)
//        Reduce the number  (num = num / 10)
//Step 3: Keep doing this until num becomes 0

int main(){
    int num = 1234;
    cout<<"\nThe number is: "<<num;
    int sum = 0;
    //loop to find sum if digits
    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
    //output
    cout<<"\nSum of digit"<<sum;
    return 0;
}

//Time complexity : O(N)
//Space complexity : O(1)