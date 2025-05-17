#include<iostream>
#include<vector>
using namespace std;
int factorial(int a){
    int fact = 1;
    for(int i =1; i<=a; i ++){
        fact *=i;
    }
    return fact;
}

int nCr(int n, int r){
    int n_fact = factorial(n);
    int r_fact = factorial(r);
    int nmr_fact = factorial(n-r);

    int result = n_fact / (r_fact * nmr_fact);
    return result;
}
int main()
{
    int n = 8, r=4;
    cout<< "nCr = " << nCr(n, r);
    return 0;
}