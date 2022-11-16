#include <iostream>
using namespace std;

class Node{
    int Data;
    Node* next;

public:
Node(){
    next=NULL;
}
    friend class linked_list;
};

class linked_list{
    Node *START=new Node();
public:
    linked_list(){
        START=NULL;
    }
    void push(int new_data);
    bool search(int x);
    void traverse(void);
    void insert(int new_data);
};

void linked_list::insert(int new_data){
    Node* head=new Node();
    head=START;
    Node* new_node=new Node();
    Node* next_node=new Node();
    new_node->Data=new_data;
    if (head->Data<new_data){
        new_node->next= START;
        START=new_node;
        return;
    }
    while(head!=NULL){
        next_node=head->next;
        cout<<head->Data;
        if (next_node->Data<new_data){
            head->next=new_node;
            new_node->next=next_node;
            //break;
            return;
        }
        head=head->next;
    }
    
}

void linked_list::push(int new_data){
    Node* new_node=new Node();
    new_node->Data=new_data;
    new_node->next=START;
    START=new_node;
}

bool linked_list::search(int x){
    Node* head=new Node();
    head=START;
    while(head!=NULL){
        if (head->Data==x)
            return true;
        head=head->next;
    }
    return false;
}

void linked_list::traverse(void){
    Node* head=new Node();
    head=START;
    cout<<"\nDATA\n";
    while(head!=NULL){
        cout<<head->Data<<endl;
        head=head->next;
    }
}

int main()
{
    cout<<"\nstart\n";
    // Start with the empty list
    linked_list *list =new linked_list();
    int x;
    int len;
    cout<<"Enter the no of elements to insert\n";
    cin>>len;
    cout<<"Enter the elements in ascending order \n";
    for (int i=0;i<len;i++){
        cin>>x;
        list->push(x);
    }
    list->traverse();
    int val;
    cout<<"Enter the element to insert\n";
    cin>>val;
    list->insert(val);
    list->traverse();

    return 0;
}