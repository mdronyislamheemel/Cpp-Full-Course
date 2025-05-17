#include<iostream>
#include<vector>
using namespace std;
sumofdigits(int n){
    int sum =0;
    while (n>0)
    {   
        int digits= n % 10;
        n = n/10;
        sum  = sum+digits;
    }
    return sum;
    
}
int main()
{
    int n =547;
    cout<< "Sum of digits of "<< n <<" = " << sumofdigits(n);
    return 0;
}