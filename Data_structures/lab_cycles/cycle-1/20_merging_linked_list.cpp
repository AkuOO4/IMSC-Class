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
    Node *START=new Node();
public:
    linked_list(){
        START=NULL;
    }
    void push(int new_data);
    bool search(int x);
    void traverse(void);
    void insert(int new_data);
    friend void merge(linked_list* head1,linked_list* head2);
};

void linked_list::insert(int new_data){
    Node* head=new Node();
    head=START;
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

void merge(linked_list *list1,linked_list *list2){
    Node* head1=new Node();
    Node* head2=new Node();
    Node* head1_prev=new Node;
    Node* head2_prev=new Node;
    head1=list1->START;
    head1_prev=head1;
    head2=list2->START;
    head2_prev=head2;
    
    while((head1!=NULL) or (head2!=NULL)){
        if (head1->Data<head2->Data){
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
    int x,y;
 
    // Use push() to construct list
    // 14->21->11->30->10
    int len1,len2;
    cout<<"Enter the number of Elements in list1\n";
    cin >>len1;
    cout<<"Enter the Elements";
    for(int i=0;i<len1;i++){
        cin>>x;
        list1->push(x);
    }
    list1->traverse();
    // list1->push(10);
    // list1->push(11);
    // list1->push(14);
    // list1->push(21);
    // list1->push(30);
    // list1->insert(15);
    
    linked_list *list2 =new linked_list(); 

    cout<<"Enter the number of Elements in list1\n";
    cin >>len2;
    cout<<"Enter the Elements";
    for(int i=0;i<len2;i++){
        cin>>y;
        list2->push(y);
    }
    list2->traverse();
    // Use push() to construct list
    // 14->21->11->30->10
    // list2->push(9);
    // list2->push(12);
    // list2->push(16);
    // list2->push(22);
    // list2->push(29);
    //list1->insert(15);
    merge(list1,list2);
    // list1->search(10)? cout<<"Yes" : cout<<"No";
    list1->traverse();
    return 0;
}