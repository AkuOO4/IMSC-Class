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
        void delete_it(int Data){
            root = delete_node(root,Data);
        }
        Node* deleteRoot(Node* root);

        void post_pre_in(void){
            cout<<"\npre-oreder ";
            pre(root);
            cout<<"\nin-order ";
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
                cout<<newNode->Data<<"L ";
                break;
            }

            else{
                temp=temp->left;
                //break;
            }         
        }
        else if (value>temp->Data){
        if (temp->right==NULL){
            temp->right = newNode;
            cout<<newNode->Data<<"R";
			break;
        }
        else{
            temp=temp->right;
			//break;

        }
        }
    }
    
}/*
Node* BST:: deleteRoot(Node* root){
         if(!root || root->Data == 0)return NULL;
            if(root->right == NULL) return root->left;
         Node* x = root->right;
         while(x->left)x = x->left;
         x->left = root->left;
         return root->right;
      }
   Node* BST::deleteRoot(Node* root, int key) {
      if(root == NULL || root->Data == key) return deleteRoot(root);
         Node* curr = root;
      while(1) {
         int x = curr->Data;
         if(key < x){
            if(curr->left == NULL || curr->left->Data == key){
               curr->left = deleteRoot(curr->left);
               break;
            }
            curr = curr->left;
         } else {
            if(curr->right == NULL || curr->right->Data == key){
               curr->right = deleteRoot(curr->right);
               break;
            }
            curr = curr->right;
         }
      }
      return root;
   }
   */
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
			Node* succParent = node;
			Node* succ = node->right;
			while (succ->left != NULL){
				succParent = succ;
				succ = succ->left;
			}
			if (succParent != node){
				succParent->left = succ->right;
			}
			else{
				succParent->right = succ->right;
			}
			node->Data = succ->Data;
			delete succ;
			return node;
		}
	}
}
*/
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
    binary_search_tree->insert_node(4);
    binary_search_tree->insert_node(2);
    binary_search_tree->insert_node(1);
    binary_search_tree->insert_node(5);
    binary_search_tree->insert_node(3);
    
    
    binary_search_tree->insert_node(5);
    binary_search_tree->deleteRoot(5);
    binary_search_tree->post_pre_in();
    cout<<"done";

}