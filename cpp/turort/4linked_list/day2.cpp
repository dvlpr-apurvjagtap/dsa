#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int value){
        data = value;
        next = nullptr;
    }
};

// count node 



// find kth node



// find kth node from end 



//reverse linked list 
Node* reverseLL(Node* head) {

    Node* prev = nullptr;
    Node* curr = head;
    Node* next = nullptr;

    while (curr != nullptr) {

        next = curr->next;

        curr->next = prev;

        prev = curr;

        curr = next;
    }

    return prev;
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

    Node* temp = head;
    // int count =0;
    // while (temp!= nullptr)
    // {
    //     if(temp->data==2) cout<<"found";
    //     // else cout<<"not found"; //never do this never 
    //     temp = temp->next;
    //     count++;
    // }

/*
    // find kth node 
    int k =3;
    int count=0;
    while (temp!=nullptr){
        ++count;
        if(count==k){
            cout<<temp->data<<endl;
            break;
        }
        temp = temp->next;
    }
    
    // find kth node from end 
     k=6;
    Node* slow = head;
    Node* fast = head;
    for (int i = 0; i < k; i++)
    {
        if (fast == nullptr) {
        cout << "Invalid k";
        return 0;
    }

        fast = fast->next;
    }
    
    while(fast!=nullptr){
        fast= fast->next;
        slow=slow->next;
    }
    cout<<slow->data;

    */



    Node* rev = reverseLL(head);
    while (rev != nullptr)
    {
        cout<<rev->data;
        rev = rev->next;
    }
    
    return 0;
}

// What are the moving parts (pointers/indices/boundaries)?
// What does each one mean in plain English?
// What has to happen to each one, one step at a time?
// What do I need to remember before I overwrite/move something?