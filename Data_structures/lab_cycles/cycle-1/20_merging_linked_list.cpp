#include <iostream>
using namespace std;

class linked_list;
class Node{
    int Data;
    Node* next;

public:
Node(){
    next=NULL;
}
    friend class linked_list;
    friend void merge(linked_list* head1,linked_list* head2);

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
     void merge(linked_list* head1,linked_list* head2);
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

void merge(linked_list *list1,linked_list *list2){
    Node* head1=new Node();
    Node* head2=new Node();
    Node* head1_prev=new Node;
    Node* head2_prev=new Node;
    head1=list1->href;
    head1_prev=head1;
    head2=list2->href;
    head2_prev=head2;
    
    while((head1!=NULL) or (head2!=NULL)){
        if (head1->Data>head2->Data){
            head1->next;
        }
        else{
            Node* temp=new Node();
            temp=head2;
            head1_prev->next=temp;
            temp->next=head1;
            head2=head2->next;
        }
        head1_prev->next=head2;
    }
}

int main()
{
    cout<<"\nstart\n";
    // Start with the empty list
    linked_list *list1 =new linked_list();
    int x = 21;
 
    // Use push() to construct list
    // 14->21->11->30->10
    list1->push(10);
    list1->push(11);
    list1->push(14);
    list1->push(21);
    list1->push(30);
    list1->insert(15);
    
    linked_list *list2 =new linked_list();

 
    // Use push() to construct list
    // 14->21->11->30->10
    list2->push(9);
    list2->push(12);
    list2->push(16);
    list2->push(22);
    list2->push(29);
    //list1->insert(15);
    merge(list1,list2);
   // list1->search(10)? cout<<"Yes" : cout<<"No";
    list1->traverse();
    return 0;
}