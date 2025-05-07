#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 3;
    int out = 1;
    for (int i=0; i<n; i++){ //inner start
        
        for(int j=0; j<n; j++){ //outer start
            cout<< out;
            out++;  
        }
        cout<< endl;
    }
    return 0;
}