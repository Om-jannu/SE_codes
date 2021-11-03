#include<stdio.h>
#include<stdlib.h>
int main()
{
	struct node{
		int choice,data;
		struct node *right_child,*left_child;
	};
	
	struct node* new_node(int x){
    struct node *p;
    p = malloc(sizeof(struct node));
    p->data = x;
    p->left_child = NULL;
    p->right_child = NULL;

    return p;
}

struct node* insert(struct node *root, int x)
{
	printf("enter element :");
	scanf("%d",x)
    if(root==NULL)
        return new_node(x);
    else if(x>root->data) 
        root->right_child = insert(root->right_child, x);
    else 
        root->left_child = insert(root->left_child,x);
    return root;
}       
     while(1){
     	printf("1. insert element");
     	printf("\n 2. display");
	 }
	 printf("enter your choice : ");
	 scanf("%d",&choice);
	 
	 switch(choice){
	 	case 1:
	 	insert(root,x)
        } 
	 }

	return 0;
}

