#include <bits/stdc++.h>
using namespace std;

class Node{
    int Data;
    Node* left;
    Node* right;

public:
    Node(){
        int Data=0;
        left=NULL;
        right=NULL;
    }

    Node(int data){
        Data=data;
        left=NULL;
        right=NULL;
    }
    void set_data(int data){
        Data=data;

    }

    friend class BST;
};

class BST
{
    Node* root;
    //static int count;

    public:
        BST(){
            root=NULL;
        }
        void insert_node(int data);
    
        void pre(Node* node);
        void in(Node* node);
        void post(Node* node);
        Node* delete_node(Node* node,int key);
        void delete_it(int val){
            root = delete_node(root,val);
        }

        void post_pre_in(void){
            cout<<"\npre-oreder ";
            pre(root);
            cout<<"\nin-reder ";
            in(root);
            cout<<"\npost-order ";
            post(root);
        }
};

//int BST::count = 0;

void BST::insert_node(int value){
    Node* newNode=new Node();
    newNode->set_data(value);
    if (root==NULL){
        root=newNode;
        return;
    }
    Node* temp=root;

    while (true){
        if (value<=temp->Data){
            if(temp->left==NULL){
                temp->left=newNode;
                return;
            }

            else{
                temp=temp->left;
                return;
            }         
        }
        else if (value>temp->Data){
        if (temp->right==NULL){
            temp->right = newNode;
				break;
        }
        else{
            temp->right = newNode;
			break;

        }
        }
    }
    cout<<root->Data;
}

Node* BST::delete_node(Node* node,int key){
	if (node==NULL){
		return NULL;
	}
	else if(key>node->Data){
		node->right=delete_node(node->right, key);
		return node;
	}
	else if(key<node->Data){
		node->left=delete_node(node->left, key);
		return node;
	}
	else{
		if (node->left ==NULL){
			Node* temp = node->right;
			delete node;
			return temp;
		}
		else if (root->right == NULL){
			Node* temp = node->left;
			delete node;
			return temp;
		}
		else {
			Node* Parent = node;
			Node* child = node->right;
			while (child->left != NULL){
				Parent = child;
				child = child->left;
			}
			if (Parent != node){
				Parent->left = child->right;
			}
			else{
				Parent->right = child->right;
			}
			node->Data = child->Data;
			delete child;
			return node;
		}
	}
}

void BST::pre(Node* node){

	 if (node != NULL){
    cout<<node->Data;
	 pre(node->left);
	 pre(node->right);
    }
}
void BST::in(Node* node){

	 if (node != NULL){
    
	 in(node->left);
     cout<<node->Data<<" ";
	 in(node->right);
    }
}
void BST::post(Node* node){

	 if (node != NULL){
    
	 post(node->left);
	 post(node->right);
     cout<<node->Data;
    }
}

int main(){
    BST* binary_search_tree=new BST();
    binary_search_tree->insert_node(1);

    binary_search_tree->insert_node(3);
    binary_search_tree->insert_node(4);
    binary_search_tree->insert_node(5);
    binary_search_tree->insert_node(5);
    binary_search_tree->delete_it(5);
    binary_search_tree->post_pre_in();
    cout<<"done";

}