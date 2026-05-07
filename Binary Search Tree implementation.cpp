#include<stdio.h>
#include<stdlib.h>
struct tree
{
	struct tree *left;
	int data;
	struct tree *right;
};
struct tree *root=0,*temp=0;
void preorder(struct tree *root)
{
	if(root==NULL)
	{
		return;
	}
	printf("\t%d",root->data);
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct tree *root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	printf("\t%d",root->data);
	inorder(root->right);
}
void postorder(struct tree *root)
{
	if(root==NULL)
	{
		return;
	}
	postorder(root->left);
	postorder(root->right);
	printf("\t%d",root->data);
}
int main()
{
	int n,i;
	printf("\nenter no.of nodes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		struct tree *nn;
		nn=(struct tree*)malloc(sizeof(struct tree));
		printf("\nenter element : ");
		scanf("%d",&nn->data);
		nn->left=0;
		nn->right=0;
		if(i==0)
		{
			root=nn;
		}
		else
		{
			temp=root;
			while(1)
			{
				if(nn->data > temp->data)
				{
					if(temp->right==NULL)
					{
						temp->right=nn;
						break;
					}
					else
					{
						temp=temp->right;
					}
				}
				else  if(nn->data < temp->data)
				{
					if(temp->left == NULL)
					{
						temp->left=nn;
						break;
					}
					else
					{
						temp=temp->left;
					}
				}
				else
				{
					printf("\nduplicates are not allowed");
					free(nn);
					break;
				}
			}
		}
	}
	printf("\n preorder traversal : ");
	preorder(root);
	printf("\n inorder traversal : ");
	inorder(root);
	printf("\n postorder traversal : ");
	postorder(root);
	return 0;
}
