#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }

    ~Node(){
        int value=this->data;
        //Memory Free
        if (next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"Memory is free for node with data : "<<value<<endl ;
    }
};
void insertAtHead(Node* &head,Node* &tail,int data){
    if (head==NULL)
    {
        Node* temp=new Node(data);
        head=temp;
        tail=temp;
    }
    else{
        Node* temp=new Node(data);
        temp->next=head;
        head->prev=temp;
        head=temp;
    }
}
void insertAtTail(Node* &tail,Node* &head,int data){
     if (tail==NULL)
    {
        Node* temp=new Node(data);
        tail=temp;
        head=temp;
    }
    else
    { 
    Node* temp=new Node(data);
    tail->next=temp;
    tail->prev=tail;
    tail=temp;
    }
    
}
void insertAtPosition(Node* &head,Node* &tail,int Position,int data){
   if (Position==1)
    {
        insertAtHead(head,tail,data);
        return;
    }
    
    Node* temp = head;
    int cnt=1;
    while (cnt<Position-1)
    {
        temp=temp->next;
        cnt++;
    }
    
    if (temp->next==NULL)
    {
        insertAtTail(tail,head,data);
        return;
    }
    Node* ntoi =new Node(data);
    ntoi -> next =temp -> next;
    temp ->next->prev=ntoi;
    temp->next=ntoi;
    ntoi->prev=temp;
    
}
void deleteNode(int position,Node* &head,Node* &tail){
    //first node delete
    if (position==1)
    {
        Node* temp = head;
        temp->next->prev=NULL;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else
    {
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while (cnt<position)    
        {
           prev=curr;
           curr=curr->next;
           cnt++;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
    
}
void print(Node* head){
    Node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    
    cout<<"After Inserting at head : ";
    insertAtHead(head,tail,9);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    cout<<"After Inserting at Tail : ";
    insertAtTail(tail,head,6);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    cout<<"After Inserting at Any Position : ";
    insertAtPosition(head,tail,4,2);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;

    deleteNode(4,head,tail);
    cout<<"After deleting : ";
    print(head);
    
    return 0;
}