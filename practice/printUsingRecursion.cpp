#include<iostream>
#include<vector>
using namespace std;

int reverse(int n){
    
    if(n < 1){
        return 0;
    }
    cout <<n <<" ";
    return reverse(n-1);
}

int front(int n){
    
    if(n < 1){
    return 1;
    }
    front(n-1);
    cout<< n <<" ";
    return 0;
}

int main()
{
    int n;
    cin>> n;
    cout<< "Front sequence: ";
    front(n);
    cout << endl;
    cout<< "Reverse sequence: ";
    reverse(n);
    return 0;
}
