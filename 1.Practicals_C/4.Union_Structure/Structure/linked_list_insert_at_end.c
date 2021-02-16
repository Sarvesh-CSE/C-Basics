#include<stdio.h>  
#include<stdlib.h>  
void lastinsert(int);  
struct node  
{  
    int data;  
    struct node *next;  
};  
struct node *head;

void lastinsert(int item)  
    {  
        struct node *ptr = (struct node*)malloc(sizeof(struct node));     
        struct node *temp;  
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW");     
        }  
        else  
        {  
            ptr->data = item;  
            if(head == NULL)  // In case of insertion of first element
            {  
                ptr -> next = NULL;  
                head = ptr;  
                printf("\n First Node inserted");  
            }  
            else  
            {  
                temp = head;  
                while (temp -> next != NULL)  
                {  
                    temp = temp -> next;  
                }  
                temp->next = ptr;  
                ptr->next = NULL;  
                printf("\n Node inserted");  
              
            }  
        }  
    }  

void main ()  
{  
    int choice, item;  
    do   
    {  
        printf("\nEnter the item which you want to insert?\n");  
        scanf("%d",&item);  
        lastinsert(item);  
        printf("\nPress 0 to insert more ?\n");  
        scanf("%d",&choice);  
    }while(choice == 0);  
}  
