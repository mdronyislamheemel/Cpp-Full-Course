#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 3;
    int num = 1;
    for (int i=0; i<n; i++){ //inner start
        for(int j=0; j<i+1; j++){ //outer start  
            cout<< num <<" ";
            num++;       
        }
        cout<< endl;   
    }
    return 0;
}
// output:
// 1 
// 2 3 
// 4 5 6