#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class List{
    Node* head;
    Node* tail;

public:
    List(){
        head = tail = NULL;
    }


    //push_front funtion
    void push_front(int val){
        Node* newNode = new Node(val); //dynamic 
        // Node newNode(val); //static
        if(head == 0){
            head = tail = newNode;
        }
        else {
            newNode -> next = head;  //akhane newNode = Node* pointer sejonno take
            //dereference kore (*newNode) er property access kora bodole (->) use kora hoi
            //(*newNode).next = newNode -> next
            head = newNode;
        }
    }


    //push_back function
    void push_back(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = tail = newNode;
        }
        else {
            tail ->next = newNode;
            tail = newNode;
        }
    }


    void print_LL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp ->next;
        }
        cout << "NULL" << endl;
    }
};

//there are 4 main functions in linked list
//push_front(), pop_front()
//push_back(), pop_back()

int main()
{
    List ll;
    //push front
    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    //push back
    ll.push_back(4);

    ll.print_LL();

    return 0;
}