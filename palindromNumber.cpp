#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int num =123;
    // cin>>num;
    long rev = 0;
    int digit;
    int temp = num;

    if(num<0){
        return false;
    }
    while(num!=0){
        //suppose num =121
        digit = num % 10; // 121%10 = 1
        rev = (rev * 10) + digit;
        num = num / 10; 
    }

    if(temp == rev){
        cout<< temp << " is a Palindrom number."<< endl;
    }
    else{
        cout<< temp << " is not a Palindrom number."<< endl;
    }

    return 0;
}