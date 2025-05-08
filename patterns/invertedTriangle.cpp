#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 4;
    
    for (int i=0; i<n; i++){ //inner start
        for(int j=0; j<i; j++){ //outer start  
            cout<<" ";       
        }
        for(int j=0; j<n-i; j++){ //outer start  
            cout<<i+1;       
        }

        cout<< endl;   
    }
    return 0;
}

// output:
// 1111
//  222
//   33
//    4