#include<iostream>
#include<vector>
using namespace std;

int binaryToDecimal(int bNum){
    int pow = 1, decNum =0;
    while (bNum>0)
    {
        int lastDigit = bNum % 10;
        decNum += lastDigit*pow;
        bNum = bNum/10;
        pow *= 2;
        /* code */
    }
    return decNum;
    
}
int main()
{
    int binaryNum = 101011;
    cout<< "Binary to decimal number of "<< binaryNum << binaryToDecimal(binaryNum)<<endl;
    return 0;
}