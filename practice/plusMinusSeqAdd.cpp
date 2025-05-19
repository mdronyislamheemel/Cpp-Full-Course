#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n = 8;
    int ans = 0;
    if(n%2 == 0){
        ans = -(n+1)/2;
    }
    else{
        ans = (n+1)/2;
    }
    cout << ans;
    return 0;
}