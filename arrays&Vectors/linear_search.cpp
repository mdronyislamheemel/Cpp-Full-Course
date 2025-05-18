#include<iostream>
#include<vector>
using namespace std;

int searchTarget(int ar[], int size, int target){
    for (int i = 0; i < size; i++)
    {
        if(ar[i] == target)
        return i;
    }
    return -1;

    
}
int main()
{
    int arr[] ={2,4,5,6,7,12,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 12;
    cout << searchTarget(arr, size, target);
    return 0;
}