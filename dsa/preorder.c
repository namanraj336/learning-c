#include <stdio.h> 
#include <malloc.h>

struct node{
    int data;
    struct node* left;
    struct node* right;
};

struct node* createNode(int data)
{
    struct node* n;
    n=(struct node *) malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
};

void preOrder(struct node* root)
{
    if(root!=NULL){
    printf("%d",root->data);
    preOrder(root->left);
    preOrder(root->right);
    }
}

void postOrder(struct node* root)
{
    if(root!=NULL){
    //printf("%d",root->data);
    postOrder(root->left);
    postOrder(root->right);
    printf("%d",root->data);
    }
}

void inOrder(struct node* root)
{
    if(root!=NULL){
    //printf("%d",root->data);
    inOrder(root->left);
    printf("%d",root->data);
    inOrder(root->right);
    }
}

struct node* inOrderpre(struct node *root){
    root=root->left;
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}
int isBST(struct node* root){
    //struct node
    static struct node *prev=NULL;
    if(root!=NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if(prev!=NULL && root->data <= prev->data){
            return 0;
        }
        prev=root;
        return(isBST(root->right));
    }
    else{
        return 1;
    }
}

int search(struct node* root, int n){
    if(root!=NULL){
    if(n==root->data){
        return 1;
    }
    if(n<=root->data){
            return(search(root->left,n));
        }
    
    else{
            return(search(root->right,n));
        }
    }
    else{
        return 0;
    }
}
void insert(struct node* root,int key){
    struct node *prev=NULL;
    while (root!=NULL)
    {
        prev=root;
        if(key==root->data){
            printf("\ninsertion not possible,%d is already present",key);
            return;
        } 
       if(key>root->data){
            root=root->right;
        }
        else{
            root=root->left;
        }
    }
    struct node* i=createNode(key);
    if(key>prev->data){
        prev->right=i;
    }
    if(key<prev->data){
        prev->left=i;
    }
}

struct node* deletenode(struct node* root, int key){
    struct node* ipre;
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL && root->right==NULL && root->data==key){
        free(root);
        return NULL;
    }
    //searching the node to be deleted
    if(key<root->data){
        root->left=deletenode(root->left,key);
    }
    else if(key>root->data){
       root->right=deletenode(root->right,key);
    }
    //deletion strategy when node is found
    else{
        ipre=inOrderpre(root);
        root->data=ipre->data;
        root->left=deletenode(root->left,ipre->data);
    }
    return root;
}

int main (){
    struct node *p=createNode(5);
    struct node *p1=createNode(3);
    struct node *p2=createNode(6);
    struct node *p3=createNode(1);
    struct node *p4=createNode(4);
    
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;

    //printf("%d  ",p->data);
    //printf("%d  ",p1->data);
    //printf("%d  ",p2->data);
    //printf("%d  ",p3->data);
    //printf("%d  ",p4->data);
    
    //printf("\n");
    //printf("\n");

    //preOrder(p);

    //printf("\n");
    //printf("\n");

    //postOrder(p);

    //printf("\n");
    //printf("\n");

    //inOrder(p);

    //printf("\n");
    //printf("\n");
    
    //printf("%d",isBST(p));

    //printf("\n");
    //printf("\n");
    //int r=search(p,14);
    //printf("%d",r);

    //printf("\n");
    //printf("\n");
    //insert(p,9);
    //preOrder(p);
    //printf("\n \n %d",p->right->right->data);
    inOrder(p);
    deletenode(p,4);
    printf("\n \n");
    inOrder(p);
    return 0;
}