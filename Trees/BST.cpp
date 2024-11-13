#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class node {
    public:
    int data;
    node* left;
    node* right;

    node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

void inOrder(node* root){
    if (root == NULL){
        return;
    }

    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

void levelOrderTraversal(node* root){
    if (root == NULL) {
        cout << "if (root == NULL) { return; }" << endl;
        return;
    }

    queue<node*> q;
    q.push(root);
    q.push(NULL);
    cout << "queue<node*> q; q.push(root); q.push(NULL);" << endl;

    while(!q.empty()){
        node* temp = q.front();
        q.pop();
        cout << "node* temp = q.front(); q.pop();" << endl;

        if(temp == NULL){
            cout << endl;

            if(!q.empty()){
                q.push(NULL);
                cout << "if(!q.empty()){ q.push(NULL); }" << endl;
            }
            cout << "if(temp == NULL){ cout << endl; }" << endl;
        }
        else{
            cout << temp->data << " ";
            cout << "else{ cout << temp->data << " "; }" << endl;

            if(temp->left){
                q.push(temp->left);
                cout << "if(temp->left){ q.push(temp->left); }" << endl;
            }

            if(temp->right){
                q.push(temp->right);
                cout << "if(temp->right){ q.push(temp->right); }" << endl;
            }
        }
        cout<<endl;
        cout<<endl;
    }
}

node* insertIntoBST(node* root, int d){
    if(root == NULL){
        root = new node(d);
        return root;
    }

    if(d > root->data){
        root->right = insertIntoBST(root->right, d);
    }
    else{
        root->left = insertIntoBST(root->left, d);
    }

    return root;
}

void input(node*& root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

node* Min(node* root){
    node* temp = root;

    while(temp->left != NULL){
        temp = temp->left;
    }

    return temp;
}

node* Max(node* root){
    node* temp = root;

    while(temp->right != NULL){
        temp = temp->right;
    }
    return temp;
}



int main() {
    node* root = NULL;

    cout << "Enter data to create BST" << endl;
    input(root);

    levelOrderTraversal(root);
}