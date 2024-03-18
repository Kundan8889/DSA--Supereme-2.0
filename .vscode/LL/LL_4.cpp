#include<iostream>
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
    void removeLoop(Node*&head){
        //cheak for loop
        //cheack loop
        Node*slow=head;
        Node*fast=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            if(fast==slow){
                break;
            }
        }
            //yha pohucha ishka mtlb slow and fast meet kr chuke hain
            slow=head;
            // //according to ques
            // if(fast==NULL){
            //     return NULL;
            // }
            // ab slo or fast ko ek ek step aage bdao
            while(fast!=slow){
                 slow=slow->next;
                 fast=fast->next;
    }
    //starting point
    Node*startPoint=slow;
    Node*temp=slow;
    while (temp->next!=startPoint)
    {
     temp= temp->next;
    }
    temp->next=NULL;
    
    }
    
     Node* reverse(Node* &head){
        Node*prev=NULL;
        Node*curr=head;
        
        while (curr!=NULL)
        {
           Node*nextNode=curr->next;
           curr->next=prev;
           prev=curr;
           curr=nextNode;
        }
        return prev;   
    }
     // add 1 to a Linkedlist
     void addOne(Node*&head){
        // reverse linklist
        head=reverse(head);
        // add one
        Node*temp=head;
        int carry =1;
        while(temp->next!=NULL){
            int totalSum=temp->data+carry;
            int digit=totalSum%10;
            carry=totalSum/10;
            temp->data=digit;
            temp=temp->next;
            if(carry==0){
                break;
            }
        }
        //process last node
        if(carry!=0){
            int totalSum=temp->data+carry;
            int digit=totalSum%10;
            carry=totalSum/10;
            temp->data=digit;
            if(carry!=0){
                Node*newNode=new Node(carry);
                temp->next=newNode;
            }
    }
     // reverse
        head=reverse(head);
     }

};
int main(){
 Node *head =NULL;
    Node*tail=NULL;
    Node obj;
    // obj.insertAtHead(head,tail,77);
    // obj.insertAtHead(head,tail,20);
    // obj.insertAtHead(head,tail,50);
    // obj.insertAtHead(head,tail,60);
    // obj.insertAtHead(head,tail,90);
    // tail->next=head->next;
    // obj.removeLoop(head);
    // obj.printLL(head);
     obj.insertAtHead(head,tail,0);
    obj.insertAtHead(head,tail,0);
    obj.insertAtHead(head,tail,0);
    obj.printLL(head);
    cout<<endl;
    obj.addOne(head);
    obj.printLL(head);
}