//check is this number a prime or not
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n=8;
    bool isPrime = true;

    for(int i = 2; i<n; i++){//if we do i*i <= n then it will be compromized solution
        if(n % i == 0){ //not a prime number
            isPrime = false;
            break;
        }
        
    }

    if(isPrime == true){
    cout<< n << " is a prime number "<< endl;
    }
    else
        cout<< n << " is not a prime number"<< endl;
    
    return 0;
}