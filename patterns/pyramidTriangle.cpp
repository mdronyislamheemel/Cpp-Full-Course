#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 4;
    
    for (int i=0; i<n; i++){ //inner start
        for(int j=0; j<n-(i+1); j++){ //outer start  
            cout<<" ";       
        }
        
        for(int j=0; j<i+1; j++){ //outer start  
            cout<<j+1;       
        }
        for(int j=i; j>0; j--){ //outer start  
            cout<<j;       
        }
        cout<< endl;   
    }
    return 0;
}

output:
   1
  121
 12321
1234321