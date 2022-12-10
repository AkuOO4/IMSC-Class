#include <iostream>
using namespace std;

class Node{
	int coff,power;
	Node* link;
public:
	Node(){
		coff = 0;
		power = 0;
		link = NULL;
	}
	Node(int coff){
		this->coff = coff;
		power = 0;
		link = NULL;
	}
	Node(int coff,int power){
		this->coff = coff;
		this->power = power;
		link = NULL;
	}
	int getPower(){
		return this->power;
	}
	int getCoefficient(){
		return this->coff;
	}
	friend class LinkedList;
};

class LinkedList{
	Node* head;
public:
	LinkedList(){
		head = NULL;
	}
	void newNode(int val,int pow);
	void printPolynomial();
	void addPolynomial(LinkedList poly1,LinkedList poly2);
};

void LinkedList::newNode(int val,int pow){
	Node* newNode = new Node(val,pow);
	if(head==NULL){
		head = newNode;
		return;
	}
	Node* temp = head;
	while(temp->link!=NULL){
		temp = temp->link;
	}
	temp->link = newNode;

}

void LinkedList::printPolynomial(){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->coff<<"x^"<<temp->power;
		if(temp->link!=NULL){
			cout<<" + ";
		}
		temp = temp->link;
	}
}

void LinkedList::addPolynomial(LinkedList p1,LinkedList p2){
	Node* temp1 = p1.head;
	Node* temp2 = p2.head;
	while(temp1!=NULL and temp2!=NULL){
		if(temp1->getPower()==temp2->getPower()){
			int sum = temp1->getCoefficient() + temp2->getCoefficient();
			newNode(sum, temp1->getPower());
			temp1 = temp1->link;
			temp2 = temp2->link;
		}
		else if (temp1->getPower()>temp2->getPower()){
			newNode(temp1->getCoefficient(), temp1->getPower());
			temp1 = temp1->link;
		}
		else{
			newNode(temp2->getCoefficient(), temp2->getPower());
			temp2 = temp2->link;
		}
	}
	while(temp1!=NULL){
		newNode(temp1->getCoefficient(), temp1->getPower());
		temp1 = temp1->link;
	}
	while(temp2!=NULL){
		newNode(temp2->getCoefficient(), temp2->getPower());
		temp2 = temp2->link;
	}
}

int main() {
	LinkedList p1;

	p1.newNode(4, 4);
	p1.newNode(3, 3);
	p1.newNode(2, 2);
	p1.newNode(4, 0);

    cout<<"\nPollynomial 1: \n";
	p1.printPolynomial();

	LinkedList p2;


	p2.newNode(10, 5);
	p2.newNode(3, 4);
	p2.newNode(1, 0);

    cout<<"\nPollynomial 2: \n";
	p2.printPolynomial();

	LinkedList sum;
	sum.addPolynomial(p1, p2);

    cout<<"\nPollynomial sum: \n";
	sum.printPolynomial();
	return 0;
}