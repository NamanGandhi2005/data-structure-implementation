#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(int data){
        this->data=data;
        this->next=NULL;

 
    }

    void print(Node*head){
        if(head==NULL){
            return NULL;

        }
        Node*temp=head;

        while(temp!=NULL){
            cout<<temp->data<<" ";
        }

    }


};

int main(){
    Node*head=new Node(10);
    print(head);
    


    return 0;
}