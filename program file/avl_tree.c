#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
    int ht;
};
//flobal initialization of root node
struct node* root=NULL;

//function prototyping
struct node* create(int);
struct node* insert(struct node*, int);
struct node* delete(struct node*, int);
struct node* search(struct node*, int)
struct node* rotate_left(struct node*);
struct node* rotate_right(struct node*);
int balance_factor(struct node*);
int height(struct node*);
void inorder(struct node*);
void preorder(struct node*);
void postorder(struct node*);

int main()
{
    int user_choice,data;
    char user_continue ='y';
    struct node* result=NULL;

    while(user_continue == 'y' || user_continue == 'y')
    {
        printf("\n\n------AVL TREE -----\n");
        printf("\n1. Insert");
        printf("\n2. Delete");
        printf("\n3. Search");
        printf("\n4. Inorder");
        printf("\n5. Preorder");
        printf("\n6. Postorder");
        printf("\n7. EXIT");

        printf("\n\nEnter Your Choice: ");
        scanf("%d,&user_choice");
        switch(user_choice)
        {
            case 1:
                printf("\nEnter data: ");
                scanf("%d",&data);
                root=insert(root,data);
                break;
            
            case 2:
                printf("\nEnter data: ");
                scanf("%d",&data); 
                root=delete(root,data);
                break;

            case 3:
                printf("\nEnter data: ");
                scanf("%d",&data);
                result=search(root,data);
                if (result == NULL)
                {
                    printf("\nNode not found!")
                }
                else
                {
                    printf("\n Node found");
                }
                break;

            case 4:
                inorder(root);
                break;
            
            case 5:
                preorder(root);
                break;

            case 6:
                postorder(root);
                break;

            case 7:
                printf("\n\t Program Terminated\n");
                return 1;
            
            default:
                printf("\n\t  Invalid Choice \n");
        }
            printf("\n\nDo you want to continue?");
            scanf("%c",&user_continue);
    }
    return 0;
}

// creates a new tree node
struct node* create(int data)
{
    struct node* new_node = (struct node*)malloc(sizeof(structnode))

    //if a memory error has occured
    if (new_node==NULL)
    {
        printf("\nMemory cant be allocated\n");
        return NULL;
    }
    new_node->data = data;
    new_node->left = NUll;
    NEW_NODE->RIGHT = NULL;
    return new_node;  
}
