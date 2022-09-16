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
};

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
    // Start with the empty list
    linked_list *list =new linked_list();
    int x;

    list->push(10);
    list->push(30);
    list->push(11);
    list->push(21);
    list->push(14);

    list->traverse();

    cout<<"Enter the element to be searched\n";
    cin>>x;
    list->search(10)? cout<<"\nElement Found" : cout<<"\nElement Not Found";

    return 0;
}