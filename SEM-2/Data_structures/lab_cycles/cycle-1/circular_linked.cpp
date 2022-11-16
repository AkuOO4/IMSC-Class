#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};
void push(Node** head_ref, int data)
{
    Node* ptr1 = new Node();
    ptr1->data = data;
    ptr1->next = *head_ref;
    if (*head_ref != NULL) {
        Node* temp = *head_ref;
        while (temp->next != *head_ref)
            temp = temp->next;
            temp->next = ptr1;
        }
    else {
        ptr1->next = ptr1;
    }
    *head_ref = ptr1;
    }
    void printList(Node* head)
    {
        Node* temp = head;
        if (head != NULL) {
            do {
                cout << temp->data << " ";
                temp = temp->next;
            } while (temp != head);
        }
        cout << endl;
}
void deleteNode(Node** head, int key){
    if (*head == NULL) {
        return;
        }
        if ((*head)->data == key && (*head)->next == *head) {
            *head = NULL;
            return;
        }
        Node* last = *head, * d;
        if ((*head)->data == key) {
            while (last->next != *head) {
            last = last->next;
        }
        last->next = (*head)->next;
        *head = last->next;
        return;
        }
        while (last->next != *head && last->next->data != key) {
            last = last->next;
        }
        if (last->next->data == key) {
            d = last->next;
            last->next = d->next;
    }
    else {
        cout << "Key not found!!" << endl;
    }
}
int main() {
    Node* head = NULL;
    int ch;
    cout << "\tCIRCULAR HEADER LIST\n" << endl;
    cout << "1.Add Node\n2.Delete Node\n3.Print Node\n4.Exit" << endl;
    do
    {
        cout<<"\nEnter your choice : ";
        cin >> ch;
        switch (ch) {
            case 1:
                int val;
                cout << "Enter the value you want to insert : ";
                cin >> val;
                push(&head, val);
                break;
            case 2:
                cout << "Enter the value you want to delete : ";
                cin >> val;
                deleteNode(&head, val);
                cout << "List after deletion : ";
                printList(head);
                break;
            case 3:
                cout << "List : ";
                printList(head);
                break;
            case 4:
                break;
            default:
                cout << "Invalid Choice!!" << endl;
                break;
        }
    }while(ch!=4);
    return 0;
}