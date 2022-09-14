#include <bits/stdc++.h>
using namespace std;
//Method 1: Using for Loop
//step 1: Input.
//step 2: Initilize a variable sum = 0.
//step 3: Using a for loop i iterte bt'n [1,num].
//step 4: Print sum.

int main(){
    int n;
    cin>>n;
//Using for loop
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
return 0;
}

#include <bits/stdc++.h>
using namespace std;
//Method 2: Using Formula for the Sum of Nth Term
//step 1: Initillize a veriable sum = 0
//step 2: Use formula sum = n(n+1)/2
//step 3: Print sum
int main(){
    int n;
    cin>>n;
//Using formula for the Sum of Nth Term
    cout<<n*(n+1)/2;
return 0;
}
    
