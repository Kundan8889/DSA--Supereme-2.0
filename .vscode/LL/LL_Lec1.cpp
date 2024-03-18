#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        //cout << "I am inside defoult constructor" << endl;
        this->next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
       // cout << "hey" << endl;
    }
    void printLL(Node *head)
    {
        // yha copy  karwa rahe hain orignol(head) ko nhi chdna h
        Node *temp = head;
        while (temp != NULL)
        {
            // 1:jab tak temp = null nhi hain to ,temp ka data print kro
            cout << temp->data << "->";
            // 1:temp ka data print kro ,2:or aage badado
            temp = temp->next;
        }
        cout << endl;
    }
    // bas practise ke liye :ek linklist ke andr kitni no. of node hain vo print karni hain
    int getLength(Node *head)
    {
        Node *temp = head;
        int length = 0;
        while (temp != NULL)
        {
            length++;
            temp = temp->next;
        }
        return length;
    }
    void insertAtHead(Node *&head, Node *&tail, int data)
    {
        if (head == NULL)
        {
            // empty LL
            // create new node
            Node *newNode = new Node(data);
            // update head
            head = newNode;
            tail = newNode;
        }
        else
        {
            // creation new node
            Node *newNode = new Node(data);
            // attach new node to head node
            newNode->next = head;
            // update head
            head = newNode;
        }
    };
    void insertAtTail(Node *&head, Node *&tail, int data)
    {
        //empty Null
        if(tail==NULL){
            //step 1:create a new node
             Node *newNode = new Node(data);
             //step 2:  single node hain entire list me to
             //tha's why head or tail ko ish pr point karwa denge
             head=newNode;
             tail=newNode;
          
        }
        else
        {
            // non empty link-list
            // step 1:create a new node
            Node *newNode = new Node(data);
            // step 2:tail node ko attaich kardo newnode me
            tail->next=newNode;
            // step 3:update tail
            tail = newNode;
        }
    }
    void createTail(Node*head,Node*&tail){
        Node*temp=head;
        while (temp->next!=NULL)
        {
           temp=temp->next;
        }
        //jb loop khatam ho jaye tab aapka temp vala
        //pointer last node pr khada hoga
        //tb tail=temp kake, tail ko last node pr le aao
        tail=temp;
    }
    void insertAtPosition(Node*&head,Node*&tail,int data,int position){
        //assumtion :position ki value 1 se length tk
        int length=getLength(head);
        if(position==1){
            insertAtHead(head,tail,data);
        }
        //yha pr glti ki thi babar bhaiya ne
         else if(position == length+1){
            insertAtTail(head,tail,data);
        }
        else{
            //insert at middle of linked list
            //creat a new node
            //copy karni hain valu ko na ki head(orignol value rakhni )
            Node*newNode=new Node(data);
            //traverse a prev//curr to position
            Node*prev=NULL;
            Node*curr=head;
            while (position!=1)
            {
                prev=curr;
                curr=curr->next;
                position--;
            }
        // attach prev to  new node
        prev->next=newNode;
        //attach prev  new node to curr 
        newNode->next=curr; 
        }
    }
};
int main()
{
    // //creation of node
    // Node a;//static object
    // dynamic allocation
    // Node*head=new Node();

    // Node *first = new Node(20);
    // Node *second = new Node(30);
    // Node *third = new Node(40);
    // Node *fourth = new Node(50);
    // Node *fifth = new Node(60);
    // Node *tail = fifth;

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // // NOW LinkList creat ho chuki hain
    // Node *head = first;
    
    // cout << "printing entire LL" << endl;
    // Node obj;
    // obj.printLL(head);
    // //    int len=obj.printNoLenLL(head);
    // //    cout<<"Length of LL:"<<len<<" ";//5
    // obj.insertAtTail(head, tail, 600);
    // obj.printLL(head);
    Node obj;
    Node*head=NULL;
    Node*tail=NULL;
    // obj.insertAtHead(head,tail,10);
    // obj.insertAtHead(head,tail,20);
    // obj.insertAtHead(head,tail,30);
    // obj.insertAtTail(head,tail,50);
    //ya
    obj.insertAtTail(head,tail,10);
    obj.insertAtTail(head,tail,20);
    obj.insertAtTail(head,tail,30);
    obj.insertAtTail(head,tail,50);
   obj.printLL(head);
    obj.insertAtPosition(head,tail,1000,3);
      obj.printLL(head);
    return 0;
}