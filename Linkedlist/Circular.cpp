#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    ~Node(){
        int value=this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next =NULL;
        }
       cout<<"Memory is free for node with data : "<<value<<endl ;
    }
};
void insertNode(Node* &tail,int element,int data ){
     if(tail==NULL){
        Node* newNode=new Node(data);
        tail=newNode;
        newNode->next=newNode;
     }
     else{
        Node* curr=tail;
        while (curr->data!=element)
        {
            curr=curr->next;//non empty list && element is present in list
        }
        
        Node* temp=new Node(data);
        temp->next=curr->next;
        curr->next=temp;
     }
}
void deleteNode(Node* &tail,int value){
    if (tail==NULL)
    {
        cout<<"List is empty,Please check again "<<endl;
        return;
    }
    else
    {
        Node* prev=tail;
        Node* curr=prev->next;
        while (curr->data != value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if (curr==prev)//1 node 
        {
            tail=NULL;
        }
        
        if (tail==curr)
        {
            tail=prev;
        }
        
        curr->next=NULL;
        delete curr;
    }
    
}
void print(Node* tail){
    Node* temp=tail;
    if (tail==NULL)
    {
        cout<<"List is Empty "<<endl;
        return;
    }
    
    do
    {
       cout<<tail->data<<" ";
        tail=tail->next;
    } while (tail!=temp);
    cout<<endl;
}
int main(){
    Node* tail=NULL;

    insertNode(tail,5,3);
    print(tail);
  insertNode(tail,3,4);
    print(tail);
    insertNode(tail,4,5);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    insertNode(tail,6,8);
    print(tail);
    insertNode(tail,6,7);
    print(tail);

    cout<<"After Deletion: "<<endl;
    deleteNode(tail,3);
    print(tail);
    
    return 0;
}
