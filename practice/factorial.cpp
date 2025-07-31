#include<iostream>
#include<vector>
using namespace std;

//in general way
int factByGeneral(int n){
    int ans = 1;
    for(int i=1 ; i<= n; i++){
        ans *= i;
    }
    return ans;
}

// factorial using recursion
int factByRecursion(int n){
    if(n ==0|| n==1){
        return 1;
    }
    return n * factByRecursion(n-1);
}
int main()
{
    int n;
    cin>> n;
    cout<< factByGeneral(n)<< endl;
    cout<< factByRecursion(n)<< endl;
    return 0;
}