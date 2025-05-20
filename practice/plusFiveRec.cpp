#include<iostream>
#include<vector>
using namespace std;
void rec(int n){
    
    if(n <= 0){
        cout<< n<<" ";
        return;
    }
    cout<< n <<" ";
    rec(n-5);
    cout<< n <<" ";
    
}

int main()
{
    int n = 17;
    rec(n);
    return 0;
}