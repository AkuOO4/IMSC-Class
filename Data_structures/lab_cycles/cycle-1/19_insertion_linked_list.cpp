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
    Node *href=new Node();
public:
    linked_list(){
        href=NULL;
    }
    void push(int new_data);
    bool search(int x);
    void traverse(void);
    void insert(int new_data);
};

void linked_list::insert(int new_data){
    Node* head=new Node();
    head=href;
    Node* new_node=new Node();
    Node* next_node=new Node();
    new_node->Data=new_data;
    
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
    new_node->next=href;
    href=new_node;
}

bool linked_list::search(int x){
    Node* head=new Node();
    head=href;
    while(head!=NULL){
        if (head->Data==x)
            return true;
        head=head->next;
    }
    return false;
}

void linked_list::traverse(void){
    Node* head=new Node();
    head=href;
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
    int x = 21;
 
    // Use push() to construct list
    // 14->21->11->30->10
    list->push(10);
    list->push(11);
    list->push(14);
    list->push(21);
    list->push(30);
    list->insert(15);
    
    
 
    list->search(10)? cout<<"Yes" : cout<<"No";
    list->traverse();
    return 0;
}