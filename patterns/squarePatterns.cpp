#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 5;
    for (int i=0; i<n; i++){ //inner start
        char ch = 'A';
        for(int j=0; j<n; j++){ //outer start
            cout<< ch;
            ch++;  //ch+1 = 65+1
        }
        cout<< endl;
    }
    return 0;
}