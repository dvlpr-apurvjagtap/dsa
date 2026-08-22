#include <bits/stdc++.h>
using namespace std;
// node
struct Node{
    int data;
    Node* next;
    Node(int val){
        data = val;
        next= nullptr;
    }
};

// middle of linked list 
Node* middle(Node* head){
    Node* slow=head;
    Node* fast=head;
    
    while (fast->next != nullptr&& fast->next->next !=nullptr)
    {
        slow= slow->next;
        fast= fast->next->next;
    }
    return slow;
}


// rotate linked list 
/*
 right shift 
 make liinkedlist circular
 move to n-k node 
 link null to n-k-1 node
 n-k = head


 left shift 
 make linkedlist circular
 move to k node 
 link null to k-1 node
 k = head
*/ 
Node* rotateRight(Node* head, int k) {

        if (head == nullptr || head->next == nullptr || k == 0)
            return head;

        int n = 1;
        Node* tail = head;

        while (tail->next != nullptr) {
            tail = tail->next;
            n++;
        }

        k %= n;

        if (k == 0)
            return head;

        tail->next = head;          // make circular

        int steps = n - k - 1;

        Node* temp = head;

        while (steps--) {
            temp = temp->next;
        }

        Node* newHead = temp->next;
        temp->next = nullptr;

        return newHead;
    }


int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);

    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;

    Node*temp =head;

    cout<<middle(head)->data;

    // while (temp != nullptr)
    // {
    //    cout<<temp->data;
    //    temp = temp->next;
    // }
    
    return 0;
}