#include <iostream>
using namespace std;

struct Node{
    int data;
    Node*next;


};

class linkedList{
    public:
    Node* head;

    LinkedList(){
        head=nullptr;
    }

    //insertion at start
    void InsertAtstart(int val){
        Node* newNode= new Node();
        newNode->data=val;
        newNode->next=head;
        head= newNode;
    }

    /insertion at end
    void InsertAtend(int val){
        Node* newNode=new Node();
        newNode->data=val;
        newNode->next=nullptr;
       
        if(head==nullptr){
            head=newNode;
        }

        Node* temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }

    //Inseet at speicfic position
    void insertAtRandom(int val, int pos){
        if(pos<0){
            cout<<"Invalid Position"<<endl;
            return;
        }
        if(pos==1){
            InsertAtstart(val);
            return;
        }

        

    }

   
};