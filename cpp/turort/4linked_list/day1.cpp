#include <bits/stdc++.h>
using namespace std;
  

// struct Node // new type data group together 
// {
//     /*
//     if i want to group up multiple data type together to 
//     pursue same purpose i will create struct 

//     here struct node is serving purpose of nodes in linked list
//     every node has data and address  
//     */ 
//     int data; 
//     Node* next;

// };


struct Node {
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

void ll() {

    // Create 5 nodes
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    // Connect them
    head->next = sixth;
    sixth->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    // Print the linked list
    Node* temp = head;

    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

}

int main(){
    int x =10;
    cout<<&x; // address of x
    int* p= &x; // assign pointer to address of x 
    cout<< *p; // print value present on address 
    *p=20;  // assigning new value to pointer address means x
    cout<<x; // it change the orignal value of x 
    cout<<endl;

    int*j;
    int* c =j;
    cout<<j<<endl;
    cout<<c<<endl;
    ll();

    return 0;
}