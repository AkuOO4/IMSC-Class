
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
	cout<<"\t Number inserted.\n";
}

void printList(Node* node)
{
	Node* last;
	cout << "\nTraversal in forward direction \n";
	while (node != NULL) 
	{
		cout << " " << node->data << " ";
		last = node;
		node = node->next;
	}

	cout << "\nTraversal in reverse direction \n";
	while (last != NULL) 
	{
		cout << " " << last->data << " ";
		last = last->prev;
	}
	cout<<endl;
}

void deleteNode(Node** head_ref, Node* del)
{
    if (*head_ref == NULL || del == NULL)
        return;

    if (*head_ref == del)
        *head_ref = del->next;

    if (del->next != NULL)
        del->next->prev = del->prev;

    if (del->prev != NULL)
        del->prev->next = del->next;

    return;
}

void deleteAllOccurOfX(Node** head_ref, int x)
{
   int count = 0;
    if ((*head_ref) == NULL)
        return;

    Node* current = *head_ref;
    Node* next;

    while (current != NULL) 
    {
        if (current->data == x) 
        {
            next = current->next;
            deleteNode(head_ref, current);
            current = next;
            cout<<"\tElement Deleted\n";
            count =1;
        }
        else
            current = current->next;
    }
    if (current == NULL && count == 0)
    	cout<<"\tElement not found\n";
}

void search(Node** head_ref, int key)
{
    if ((*head_ref) == NULL)
        return;
    Node* current = *head_ref;
    while(current != NULL){
        if(current->data==key)
        {
            cout<<"\nKEY found"<<endl;
            return;
        }
        current = current->next;
    }
    cout<<"\nKEY not located"<<endl;
}

int main()
{
	Node* head = NULL;
	cout<<"\n\tTWO-WAY LINKED LIST\n";

	int option;
	do
	{
		cout<<"\nMake your choice : \n1.INSERT()\n2.DELETE()\n3.PRINT()"//
		        "\n4.Exit\n";
		cin>>option;
		switch (option) 
		{

			case 1:
				int val;
				cout<<"\n\tINSERTION\n";
				cout<<"Enter the number : ";
				cin>>val;
				insert(&head,val);
				break;
			
			case 2:
				cout<<"\n\tDELETION\nEnter the number : ";
				cin>>val;
				deleteAllOccurOfX(&head, val);
				break;
				
			case 3:
				cout<<"\n\tPRINTING\n";
				printList(head);
				break;
			case 4:
			  	option = 0;
				break;
			default:
				cout<<"\nWrong choice"<<endl;
				break;
		}
		
		if (option != 4)
		{
			cout<<"\nDo you want to continue-1 or Exit-0 :";
			cin>>option;
		}
	}while(option != 0);	
	cout<<"\n\tEND\n"<<endl;
	return 0;
}