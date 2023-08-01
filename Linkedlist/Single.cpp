#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int data){
        this -> data=data;
        this -> next=NULL;
    }

    ~Node(){
        int value=this->data;
        //Memory Free
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node with data : "<<value<<endl ;
    }
};

void InsertAtHead(Node* &head,int d)
    {
        Node* temp= new Node(d);
        temp -> next = head;
        head=temp;
    }
void InsertAtTail(Node* &tail,int d)
    {
        Node* temp= new Node(d);
        tail -> next = temp;
        tail=temp;
    }
void InsertAtMiddle(Node* &head,Node* &tail,int position,int d)
{
    if (position==1)
    {
        InsertAtHead(head,d);
        return;
    }
    
    Node* temp = head;
    int cnt=1;
    while (cnt<position-1)
    {
        temp=temp->next;
        cnt++;
    }
    
    if (temp->next==NULL)
    {
        InsertAtTail(tail,d);
        return;
    }
    Node* nodetoinsert= new Node(d);
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;

}
void deleteNode(int position,Node* &head){
    //first node delete
    if (position==1)
    {
        Node* temp = head;
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
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
        
    }
    
}
void print(Node* &head)
    {
        Node* temp=head;
        while (temp !=NULL)
        {
        cout<<temp -> data <<" ";
        temp=temp -> next;
        }
        cout<<endl;
    }
int main()
{
    Node* node1=new Node(5);
    //cout<<node1 -> data <<endl;
    //cout<<node1 -> next <<endl;
    Node* head = node1;
    Node * tail=node1;

    cout<<"Head :";
    print(head);
    cout<<"After Inserting at Head : ";
    InsertAtHead(head,12);
    print(head);
    cout<<"After Inserting at Tail : ";
    InsertAtTail(tail,32);
    print(head);
   cout<<"After Inserting at Middle : ";
    InsertAtMiddle(head,tail,1,34);
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;
    
     
    deleteNode(4,head);
    cout<<"After deleting : ";
    print(head);
    cout << "head  " << head -> data << endl;
    cout << "tail  " << tail -> data << endl;   
    return 0;
}