#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *prev;
    Node*next;
    Node()
    {
        this->prev = NULL;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    void printLL(Node*&head){
        Node*temp=head;
        while (temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        
    }
    int findLength(Node*head){
        Node*temp=head;
        int len=0;
        while (temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        return len;
        
    }
    void insertAtHead(Node*&head,Node*&tail,int data){
        //LL is empty
        if(head==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
        }
        else{
            //LL is note empty
            Node*newNode=new Node(data);
            newNode->next=head;
            head->prev=newNode;
            head=newNode;
        }
    }
    void insertAtTail(Node*&head,Node*&tail,int data){
        //LL is empty
        if(tail==NULL){
            Node*newNode=new Node(data);
            head=newNode;
            tail=newNode;
        }
        //LL is non Empty
        else{
        //creat a node
        Node*newNode=new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
        }
    }
    void inserAtPosition(Node*&head,Node*&tail,int data,int position){
        if(head==NULL){
            Node*newNode=new Node(data);
            head=newNode;
            tail=newNode;
        }
        else{
            int len=findLength(head);
         if(position==1){
            insertAtHead(head,tail,data);
        }
           else if(position==len+1){
                insertAtTail(head,tail,data);
           }
           else{
            //insert in middel
            //create a new node
            Node*newNode=new Node(data);
            //set prev and curr node
            Node*prevNode=NULL;
            Node*currNode=head;
            while (position!=1)
            {
                position--;
                prevNode=currNode;
                currNode=currNode->next;
            }
            //step 3:poiters update kare the
            prevNode->next=newNode;
            newNode->prev=prevNode;
            newNode->next=currNode;
            currNode->prev=newNode;

           }
        }

    }
    void deleteNode(Node*&head,Node*&tail,int position){
        //LL is empty
        if(head==NULL){
            cout<<"can't delete bcoz LL is empty"<<endl;
            return;
        }
        if(head==tail){
            Node*temp=head;
            delete temp;
            //now 0 LL bachi to->
            //mera head point kar raha hoga null pr and tain bhi null pr point kar raha hoaga
            head=NULL;
            tail=NULL;
            return;
            }

        //LL is non empty
        else{
             int len=findLength(head);
            if(position==1){
                //delete from head
                Node*temp=head;
                //yha head ko aage bada diya
                head=head->next;
                temp->next=NULL;
                head->prev=NULL;
                delete temp;
            }
            else if(position==len){
            Node*prevNode=tail->prev;
            prevNode->next=NULL;
            tail->prev=NULL;
            delete tail;
            prevNode=tail;
            }
            else{
                //delete from middele
                //step 1:set prevnode ,currNode and nextNode
                Node*prevNode=NULL;
                Node*currNode=head;
                while (position!=1)
                {
                    position--;
                    // prevNode ko aage bada diya
                    prevNode=currNode;
                    //  currNode ko bhi aage bada diya
                    currNode=currNode->next;
                }
                //next node:
                Node*nextNode=currNode->next;
                //now :
                prevNode->next=nextNode;
                currNode->prev=NULL;
                currNode->next=NULL;
                nextNode->prev=prevNode;
                delete currNode;
            }
        }
    }
} ;
int main()
{
    Node *head =NULL;
    Node*tail=NULL;
    Node obj;
    obj.insertAtHead(head,tail,10);
    obj.insertAtHead(head,tail,20);
    obj.insertAtHead(head,tail,30);
    obj.insertAtHead(head,tail,40);
    obj.printLL(head);
    cout<<endl;
    // obj.insertAtTail(head,tail,1000);
    // obj.printLL(head);
   
   // obj.inserAtPosition(head,tail,2000,3);
   // obj.printLL(head);
   //delete node:
   obj.deleteNode(head,tail,1);
   obj.printLL(head);
    return 0;
}