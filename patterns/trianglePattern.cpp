#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 3;
    for (int i=0; i<n; i++){ //inner start 
        for(int j=0; j<i+1; j++){ //outer start
            cout<< "*";  
        }
        // for(int j=0; j<i+1; j++){ //outer start
        //     cout<< i+1 <<" ";  
        // }
        cout<< endl;
    }
    return 0;
}