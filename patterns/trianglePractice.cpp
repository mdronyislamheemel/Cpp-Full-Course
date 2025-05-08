#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 3;
    char ch = 'A';
    for (int i=0; i<n; i++){ //inner start
        for(int j=0; j<i+1; j++){ //outer start  
            cout<< ch <<" ";    
        }
        cout<< endl;
        ch = ch +1;
    }
    return 0;
}
// output:
// A 
// B B 
// C C C 