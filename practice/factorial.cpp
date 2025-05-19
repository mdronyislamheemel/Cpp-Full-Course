#include<iostream>
#include<vector>
using namespace std;

// int fact(int n){
//     int ans = 0;
//     for(int i=1 ; i<= n; i++){
//         ans += i;
//     }
//     return ans;
// }

int fact(int n){
    if(n ==0){
        return 0;
    }
    return n + fact(n-1);
}
int main()
{
    int n = 5;
    cout<< fact(n)<< endl;
    return 0;
}