#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 3;
    for (int i=0; i<n; i++){ //inner start
        for(int j=i+1; j>0; j--){ //outer start  
            cout<< j <<" ";       
        }
        cout<< endl;
        
        
    }
    return 0;
}
// output:
// 1
// 2 1 
// 3 2 1 
