#include<bits/stdc++.h>
using namespace std;

//Method: Mathematical approach
//Step 1: Assign reverse = num
//Step 1: Extract last digit of temp as ‘rem’
//Step 2: Construct reverse as reverse = reverse * 10 + rem
//Step 3: Reduce length of temp as temp = temp / 10
//Step 4: Keep doing until temp becomes 0
//Step 5: If num == reverse
//Step 6: Print palindrome else print its not
int main(){
    int num = 12321;
    int reverse = 0;
    int rem , temp;
    cout<<"The number is: ";

    temp = num ;
    //loop to find reverse number
    while(temp!=0){
        rem = temp % 10;
        reverse = reverse * 10 + rem;
        temp /= 10;
    }
    //palindrome if num and reverse are equal
    if(num == reverse)
       cout<< num << " is Palindome";
    else
       cout<< num << " is not a Palindrome";

    return 0;
}