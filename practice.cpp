#include<bits/stdc++.h>

using namespace std;

//binary trees creation 

class TreeNode{
    public:
    int data;
    TreeNode*left;
    TreeNode*right;

    TreeNode(int data){
        this->data=data;
        left=NULL;

        right=NULL;

    }




};


//buildtree

void buildtree(TreeNode*&root){
    int data;
    cin>>data;

    if(data==-1){
        return;
    }

    root=new TreeNode(data);

    buildtree(root->left);
    buildtree(root->right);

}


void levelOrderTraversal(TreeNode*root){
    queue<TreeNode*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        TreeNode*temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;

            if(!q.empty()){
                q.push(NULL);
            }

        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void buildLevelOrder(TreeNode*&root){
    queue<TreeNode*>q;

    int data;
    cout<<"enter data for root"<<endl;
    cin>>data;
    root=new TreeNode(data);

    q.push(root);

    while(!q.empty()){
        TreeNode*temp=q.front();
        q.pop();

        cout<<"enter data for left node for"<<temp->data<<endl;

        int leftData;
        cin>>leftData;

        if(leftData!=-1){
            temp->left=new TreeNode(leftData);
            q.push(temp->left);
        }
        cout<<"enter data for right node for"<<temp->data<<endl;

        int rightData;
        cin>>rightData;

        if(rightData!=-1){
            temp->right=new TreeNode(rightData);
            q.push(temp->right);
        }

    }
}

int main(){
    TreeNode*root=NULL;

    // buildtree(root);
    buildLevelOrder(root);


    levelOrderTraversal(root);




    return 0;
}