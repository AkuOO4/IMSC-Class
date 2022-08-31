#include <iostream>
using namespace std;

class Node{
    int Data;
    Node* right;
    Node* left;

public:
Node(){
    right=NULL;
    left=NULL;
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
    void push_it(int new_data);
};

void linked_list::push_it(int new_data){
    Node* new_node = new Node();

    new_node->Data = new_data;
 
    /* 3. Make next of new node as head
    and previous as NULL */
    new_node->right =href;
    new_node->left = NULL;
 
    /* 4. change prev of head node to new node */
    if (href!= NULL)
        href->left = new_node;
 
    /* 5. move the head to point to the new node */
    href = new_node;
}

void linked_list::insert(int new_data){
    Node* head=new Node();
    head=href;
    Node* new_node=new Node();
    Node* next_node=new Node();
    new_node->Data=new_data;
    
    while(head!=NULL){
        next_node=head->right;
        cout<<head->Data;
        if (next_node->Data<new_data){
            head->right=new_node;
            new_node->right=next_node;
            //break;
            return;
        }
        head=head->right;
    }
    
}


void linked_list::push(int new_data){
    Node* new_node=new Node();
    new_node->Data=new_data;
    new_node->right=href;
    href->left=new_node;
    cout<<"\nkai\n";
    href=new_node;
}

bool linked_list::search(int x){
    Node* head=new Node();
    head=href;
    while(head!=NULL){
        if (head->Data==x)
            return true;
        head=head->right;
    }
    return false;
}

void linked_list::traverse(void){
    Node* head=new Node();
    head=href;
    cout<<"\nDATA\n";
    while(head!=NULL){
        cout<<head->Data<<endl;
        head=head->right;
    }
    //head=head->left;
   // cout<<head->Data;
}
int main()
{
    cout<<"\nstart\n";
    // Start with the empty list
    linked_list *list =new linked_list();
    int x = 21;
 
    // Use push() to construct list
    // 14->21->11->30->10
    list->push_it(10);
    list->push_it(11);
    list->push_it(12);
    list->push_it(13);
    // list->push(14);
    // list->push(21);
    // list->push(30);
    //list->insert(15);
    
    
 
   // list->search(10)? cout<<"Yes" : cout<<"No";
    list->traverse();
    return 0;
}