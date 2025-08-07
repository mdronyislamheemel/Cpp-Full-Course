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

    //pop front
    void pop_front(){
        if(head == NULL){
            cout << "The linked list is empty" << endl;
            return;
        }
        
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        
    }

    //pop back
    void pop_back(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        while(temp->next != tail){
            temp = temp->next;
        }
        temp->next = NULL;
        delete tail;
        tail = temp;
    }

    //insert in the middle in ll
    void insert_middle(int val, int pos){
        if(pos < 0){
            cout << "Invalid pos" << endl;
            return;
        }
        if(pos == 0){
            push_front(val);
            return;
        }
        Node* temp = head;
        for(int i = 0; i < pos-1; i++){
            if(temp == NULL){
                cout << "Invalid Pos"<<endl;
                return;
            }
            temp = temp->next;
        }
        Node* newNode = new Node(val);
        newNode ->next = temp->next;
        temp->next = newNode;
    }


    //print the linked list
    void print_LL(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp -> data << "->";
            temp = temp ->next;
        }
        cout << "NULL" << endl;
    }

    //seraching a value in linked list
    int search(int key){
        Node* temp = head;
        int idx = 0;
        while(temp != NULL){
            if(temp->data == key){
                return idx;
            }
            temp = temp->next;
            idx ++;
        }
        return -1;
    }

};

//there are 4 main functions in linked list
//push_front(), pop_front()
//push_back(), pop_back()

int main()
{
    List ll;
    //push front
    ll.push_front(1); //output: 1->NULL
    ll.push_front(2); //2->1->NULL
    ll.push_front(3); //3->2->1->NULL

    //push back
    ll.push_back(4); //3->2->1->4->NULL

    //pop front
    ll.pop_front(); //2->1->4->NULL

    //pop back
    ll.pop_back(); //2->1->NULL

    //insert middle in the linked list
    ll.insert_middle(4,1); //2->4->1->NULL

    ll.print_LL();

    cout << ll.search(1) << endl; //2 

    return 0;
}