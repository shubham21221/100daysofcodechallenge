#include <bits/stdc++.h>
using namespace std;
//Method 3: Using Recursion 1
//Step 2: Call a recursive funtion calcSum(a,b)
//Step 3: in each recursion call add the current 'a'value and call the next 
//    iterative with 'a+1' value
//Step 4: That is do this : return a+ calcSum(i+1,d)
//Step 5: Print value returned by the recursion function in main
int calcSum(int a,int b){
    //stop when any  recursion call tries go to over b
    //(larger number)
    if(a>b)
     return 0;
     return a + calcSum(a+1,b);
}
int main(){
    int a = 10;
    int b = 15;

    int sum = calcSum(a,b);

    cout<<sum;

    return 0;
}
