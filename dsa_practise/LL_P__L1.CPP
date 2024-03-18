#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(){
        cout<<"default constructor is called "<<endl;
        this->next=NULL;
    }
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
    void printLL(Node*head){
        Node*temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<" -> ";
            temp=temp->next;
        }
        cout<<endl;
        
    }
    int getLength(Node*head){
        Node*temp=head;
        int length=0;
        while(temp!=NULL){
            length++;
            temp=temp->next;
        }
        return length;
    }
    void insertAtHead(Node*&head,Node*&tail,int data){
        if(head==NULL){
            Node*newNode=new Node(data);
           head= newNode;
           tail= newNode;
        }
        else 
        {
            Node*newNode=new Node(data);
            newNode->next=head;
            head=newNode;
        }
        
    }
    void insertAtTail(Node*&head,Node*&tail,int data){
        if(head==NULL){
            Node*newNode=new Node(data);
           head= newNode;
           tail= newNode;
        }
        else 
        {
            // LL is non empty
            Node*newNode=new Node(data);
            tail->next=newNode;
            tail=newNode;
        }
        
    }
    Node* creatingTail(Node*&head,Node*&tail){
        Node*temp=head;
        while(temp!=NULL){
            temp=temp->next;
        }
        tail=temp;
        return tail;
    }
};

int main(){
// Node*head=new Node();
Node obj;
// Node*head=new Node();
// Node*first=new Node(20);
// Node*second=new Node(30);
// Node*third=new Node(40);
// Node*fourth=new Node(50);
// Node*fifth=new Node(60);

// first->next=second;
// second->next=third;
// third->next=fourth;
// fourth->next=fifth;
// Node*tail=fifth;
// //LL created
// Node*head=first;
// cout<<"print LL : "<<endl;
// obj.printLL(head);
// cout<<"lenght of LL is : "<<obj.getLength(head)<<endl;
// obj.printLL(head);
// obj.printLL(head);
// // obj.insertAtHead(head,tail,400);
// obj.printLL(head);
Node*head=NULL;
Node*tail=NULL;
obj.insertAtHead(head,tail,10);
obj.insertAtHead(head,tail,20);
obj.insertAtHead(head,tail,30);
obj.insertAtHead(head,tail,40);
obj.insertAtHead(head,tail,50);
obj.printLL(head);


return 0;
}