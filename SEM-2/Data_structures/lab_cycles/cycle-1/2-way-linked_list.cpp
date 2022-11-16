#include <iostream>
using namespace std;

class Node {
public:
	int data;
	Node* next;
	Node* prev;
};

void insert(Node** head_ref, int new_data)
{
	Node* new_node = new Node();
	new_node->data = new_data;

	new_node->next = (*head_ref);
	new_node->prev = NULL;

	if ((*head_ref) != NULL)
		(*head_ref)->prev = new_node;

	(*head_ref) = new_node;

}

void search(Node** head_ref, int key){
    if ((*head_ref) == NULL)
        return;
    Node* current = *head_ref;
    while(current != NULL){
        if(current->data==key){
            cout<<"\tKEY found"<<endl;
            return;
        }
        current = current->next;
    }
    cout<<"\tKEY not located"<<endl;
}


int main(){
	Node* head = NULL;
	cout<<"\n\tTWO-WAY LINKED LIST\n";

	int option, terms , val;
	cout<<"Enter the number for elements to be inserted : ";
	cin>>terms;
	cout<<"Enter the elements\n";
	for(int i=1 ; i <= terms; i++)
	{
	 cin>>val;
	 insert(&head,val);
	}
	do
	{
            cout<<"\n\tSEARCHING\nEnter the number :";
            cin>>val;
            search(&head,val);
				
			cout<<"\ncontinue-1\nExit-0 :";
			cin>>option;
			
	}while(option != 0);	
	
	cout<<"\n\tEND\n"<<endl;
	return 0;
}