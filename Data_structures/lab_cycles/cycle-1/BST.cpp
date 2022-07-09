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
        int Data=data;
        left=NULL;
        right=NULL;
    }

    friend class BST;
};

class BST
{
    Node* root;
    public:
        BST(){
            root=NULL;
        }
        void insert_node(int data);
        Node* delete_node(Node* node,int key);
        void delete_it(int val){
            root = delete_node(root,val);
        }

};

void BST::insert_node(int value){
    Node* newNode=new Node(value);
    if (root==NULL){
        root=newNode;
    }

    Node* temp=root;

    while (true){
        if (value<=temp->Data){
            if(temp->left==NULL){
                temp->left=newNode;
            }

            else{
                temp=temp->left;
            }         
        }

        else if (temp->right==NULL){
            temp->right = newNode;
				break;
        }
        else{
            temp->right = newNode;
			break;

        }
    }
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

void SearchNode

int main(){
    BST binary_search_tree;
    binary_search_tree.insert_node(1);
    binary_search_tree.insert_node(2);
    binary_search_tree.insert_node(3);
    binary_search_tree.insert_node(4);
    binary_search_tree.insert_node(5);
    binary_search_tree.delete_it(5);
    cout<<"done";

}