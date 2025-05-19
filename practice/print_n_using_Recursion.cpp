#include<iostream>
#include<vector>
using namespace std;

int fact(int n){
    
    if(n < 1){
        return 1;
    }
    cout<< n <<" ";
    return fact(n-1);
}

// int fact(int n){
    
//     if(n < 1){
//     return 1;
//     }
//     fact(n-1);
//     cout<< n <<" ";
//     return 0;
// }

int main()
{
    int n = 20;
    fact(n);
    return 0;
}
