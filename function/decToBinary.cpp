#include<iostream>
#include<vector>
using namespace std;

int decToBinary(int decNum){
    int binaryNum = 0, pow= 1;
    while(decNum> 0){
        int remain = decNum% 2;
        decNum = decNum/2;
        binaryNum += (remain*pow);
        pow*= 10;
    }
    return binaryNum;
}
int main()
{
    int decNum = 15;
    cout<< "Decimal to Binary number of "<< decNum<< " = "<< decToBinary(decNum)<< endl;
    return 0;
}