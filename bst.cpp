#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* left;
        node* right;
        node(int val){
            data = val;
            left = NULL;
            right = NULL;
        }
};

node* insert(node* root , int val){
    if(root == NULL){
        return new node(val);
    }
    else if(val < root->data){
        root->left = insert(root->left , val);
    }
    else if(val > root->data){
        root->right = insert(root->right , val);
    }
}

void preorder(node* root){
    if(root == NULL) return;
    else{
        preorder(root->left);
        cout << root->data << "  ";
        preorder(root->right); 
    }
}

void inorder(node* root){
    if(root == NULL) return;
    cout << root->data << "  ";
    preorder(root->left);
    preorder(root->right);
}

void postorder(node* root){
    if(root == NULL) return;
    preorder(root->left);
    preorder(root->right);
    cout << root->data << "  ";
}

int height(node* root){
    if(root == NULL) return 0;
    int l = height(root->left);
    int r = height(root->right);
    return max(l,r)+1;
}

node* clone(node* root){
    if(root == NULL) return NULL;
    node* ptr = new node(root->data);
    node* x = clone(root->left);
    node* y = clone(root->right);
    ptr->left = x;
    ptr->right = y;
    return ptr;
}

void iter_preorder(node* root){
    if(root == NULL) return;
    stack<node*> st;
    st.push(root);
    while(st.empty() == false){
        node* curr = st.top();
        st.pop();
        cout << curr->data << " ";
        if(curr->right != NULL) st.push(curr->right);
        if(curr->left != NULL) st.push(curr->left);
    }
    return;    
}

void iter_inorder(node* root){
    if(root == NULL) return;
    stack<node*> st;
    node* curr = root;
    st.push(root);

    while(curr != NULL or st.empty() == false){
        while(curr != NULL){
            st.push(curr);
            curr = curr->left;
        }
        curr = st.top();
        st.pop();
        cout << curr->data << "  ";
        curr = curr->right;
    }
    return;
}

void iter_postorder(node* root){
    if(root == NULL) return;
    stack<node*> st1, st2;
    node* curr = NULL;
    st1.push(root);
    while(st1.empty() == false){
        curr = st1.top();
        st1.pop();
        if(curr->left != NULL) st1.push(curr->left);
        if(curr->right != NULL) st1.push(curr->right);
        st2.push(curr);
    }
    curr = NULL;
    while(st2.empty() == false){
        curr = st2.top();
        st2.pop();
        cout << curr->data << "  ";
    }
    return;
}

void iter_levelorder(node* root){
    if(root == NULL) return ;
    queue<node*> q;
    node* curr = root;
    q.push(curr);
    while(q.empty()){
        curr = q.front();
        q.pop();
        if(curr->left != NULL) q.push(curr->left);
        if(curr->right != NULL) q.push(curr->right);
        cout << curr->data;
    }

}

node* mirror(node* root){
    if(root == NULL) return NULL;
    node* ptr = new node(root->data);
    node* x = clone(root->left);
    node* y = clone(root->right);
    ptr->left = y;
    ptr->right = x;
    return ptr;
}

bool equal(node* root1 , node* root2){
    if(root1 == root2) return 1;
    if(root1 == NULL and root2 != NULL) return 0;
    if(root2 == NULL and root1 != NULL) return 0;

    if(root1->data == root2->data){
        bool x = equal(root1->left , root2->left);
        if(x == 1){
            bool y = equal(root1->right , root2->left);
            if(y==1) return 1;
        }
    }
    else return 0;
    
}




int main(){
    cout << "HELLO" << endl;
    node* root = NULL;
    root = insert(root , 56);
    insert(root , 58);
    insert(root , 8);
    insert(root , 48);
    insert(root , 23);
    insert(root , 1);
    insert(root , 90);
    cout << endl << "Preorder : " ;preorder(root);
    cout << endl << "iterPreorder : " ;iter_preorder(root);
    cout << endl << "Postorder : " ;postorder(root);
    cout << endl << "iterPostorder : " ;iter_postorder(root);
    cout << endl << "inorder : " ;inorder(root);
    cout << endl << "iterInorder : " ;iter_inorder(root);

    return 0;
}