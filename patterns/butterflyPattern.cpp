#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n= 4;
    //top 
    for(int i=0; i<n; i++){
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        //left spaces
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        //right spaces
        for(int j=0; j<n-i-1; j++){
            cout<< " ";
        }
        for(int j=0; j<i+1; j++){
            cout<<"*";
        }
        cout<<endl;

    }
    //bottom 
    for(int i=0; i<n-1; i++){
        //left "*"
        for(int j=0; j<n-1-i;j++){
            cout<< "*";
        }
        //left spaces
        for(int j=0; j<i+1; j++){
            cout<< " ";
        }
        //right spaces
        for(int j=0; j<i+1; j++){
            cout<< " ";
        }
        //right "*"
        for(int j=0; j<n-1-i; j++){
            cout<< "*";
        }
        cout<< endl;
    }
    return 0;
}
// output:
// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *