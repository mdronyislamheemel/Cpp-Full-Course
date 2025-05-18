#include<iostream>
#include<vector>
using namespace std;
int main()
{
    // vector declaration method
    // vector<int> vec1;
    // vector<int> vec2 ={1,2,3};
    // vector<int> vec3(3,0);
    vector<char> vec = {'a', 'b', 'c','d','e'};
    
    //for each loop
    for(char val : vec){
        cout<< val <<" ";
    }
    cout << endl;
    
    //vector size 
    cout<< "vector size = "<< vec.size()<< endl;

    vector<int> vec1;
    //vector push_back()
    vec1.push_back(21);
    vec1.push_back(26);
    vec1.push_back(37);

    cout<< "value after push back: ";
    for(int val : vec1){
        cout<< val <<" ";
    }
    cout<< endl;
    //vector pop_back() function 
    cout<< "value after pop back: ";
    vec1.pop_back();
    for(int val : vec1){
        cout<< val <<" ";
    }
    cout<< endl;

    //vector front, back and at use kora hoi prothom ,ses and particular index er 
    //value access korar jonno
    cout<<"front: "<< vec1.front()<< endl;
    cout<< vec1.back()<< endl;
    cout<< vec1.at(0)<< endl;

    return 0;
}