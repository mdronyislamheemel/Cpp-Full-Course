#include<iostream>
#include<vector>
using namespace std;

void reverseArray(int ar[], int s){
    int start = 0, end = s-1;
    while (start< end)
    {
        swap(ar[start], ar[end]);
        start++;
        end--;
        
    }
}
int main()
{
    int arr[] ={2,4,5,6,7,12,13};
    int size = sizeof(arr)/sizeof(arr[0]);
    reverseArray(arr, size);
    for(int i=0; i<size; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    return 0;
}