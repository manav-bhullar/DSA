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
        this -> data = d;
        this -> left = NULL;
        this -> right = NULL;
    }
};

node* buildTree(node* root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    root = new node(data);

    cout<<"Enter the data for right side of "<<data<<endl;
    root -> right = buildTree(root -> right);
    cout << "Enter the data for left side of "<<data<<endl;
    root -> left = buildTree(root -> left);
    return root;
}

void levelOrderTraversal(node* root){
    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        if(temp == NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp -> data<<" ";

            if (temp -> left){
                q.push(temp -> left);
            }

            if (temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

void reverseOrderTraversal(node* root){

}

void inOrder(node* root){
    if (root == NULL){
        return;
    }

    inOrder(root -> left);
    cout<< root -> data;
    inOrder(root -> right);
}

void preOrder(node* root){
    if (root == NULL){
        return;
    }

    cout<< root -> data;
    preOrder(root -> left);
    preOrder(root -> right);
}

void postOrder(node* root){
    if (root == NULL){
        return;
    }

    postOrder(root -> left);
    postOrder(root -> right);
    cout<< root -> data;
}

void buildFromLevelOrder(node* &root){
    queue <node*> q;
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root = new node(data);

    q.push(root);

    while(!q.empty()){
        node* temp = q.front();
        q.pop();

        cout<<"Enter the left data for the "<<temp -> data<<endl;
        int leftData;
        cin>>leftData;


        
        cout<<"Enter the right data for the "<<temp -> data<<endl;
        int rightData;
        cin>>rightData;

        if(leftData != -1){
            temp -> left = new node(leftData);
            q.push(temp -> left);
        }
        if(rightData != -1){
            temp -> right = new node(rightData);
            q.push(temp -> right);
        }

        
    }
}


int main() {
    node* root = NULL;

    // root = buildTree(root);

    // levelOrderTraversal(root);
    // cout<<"InOrder"<<endl;
    // inOrder(root);
    // cout<<endl;
    // cout<<"PreOrder"<<endl;
    // preOrder(root);
    // cout<<endl;
    // cout<<"PostOrder"<<endl;
    // postOrder(root);
    // cout<<endl;
    
    buildFromLevelOrder(root);
    levelOrderTraversal(root);




    return 0;
}