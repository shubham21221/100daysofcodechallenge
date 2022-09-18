#include <bits/stdc++.h>
using namespace std;
//Method 1: Using a if else
//Step 1: if year % 400 = 0
    //1.print leap year
//Step 2: if year % 4==0 && 100 != 0
    //2.print leap year
//Step 3 else, 
    //3.year will be not leap

int main(){
    int year = 2000;

    if(year % 400 == 0)
        cout<< year <<" is a Leap Year";
    else if(year % 4 == 0 && year % 100 != 0)
        cout<< year <<" is a Leap year";
    else
        cout<< year <<" is not a Leap year";
    
    return 0;
}

