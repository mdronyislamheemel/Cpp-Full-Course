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
int main()
{
    int n = 8;
    cout<< factorial(n);
    return 0;
}