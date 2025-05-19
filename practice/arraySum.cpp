#include<iostream>
#include<vector>
using namespace std;

int arrSum(int arr[], int n){
    if(n <0){
        return 0;
    }
    return arrSum(arr, n-1) + arr[n];
}

int main()
{
    int arr []= {1, 3, 4, 5, 6, 7};
    int n =6;
    cout<< arrSum(arr, n-1);
    return 0;
}