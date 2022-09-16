#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int cal(int ,int);
};
int Solution::cal(int a,int b){
    if(a>b)
       return a;
    else
       return b;
}

int main(){
    Solution obj;
    int num1, num2, largest;

    num1=36;
    num2=23;

    largest = obj.cal(num1,num2);
    cout<<"largest: "<<largest;

    return 0;
}

