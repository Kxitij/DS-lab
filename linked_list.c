#include <stdio.h>
#include<stdlib.h>
typedef struct node 
{
  int val;
  struct node* next;
}node;
node *first, *cur;

void create(){
  first= NULL;
  cur= NULL;
}
void addfront(int a){
  node *ptr;  
    ptr = (node *) malloc(sizeof(node *));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW\n");  
    }  
    else  
    {     
        ptr->val = a;  
        ptr->next = first;  
        first = ptr;  
        printf("\nInserted\n");  
    }  
}
void delfront(){
  struct node *ptr;  
    if(first == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = first;  
        first = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from front\n");  
    } 
}
void addrear(int item){
  struct node *ptr,*temp;  
         
    ptr = (struct node*)malloc(sizeof(struct node));      
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");     
    }  
    else  
    {  
         
        ptr->val = item;  
        if(first == NULL)  
        {  
            ptr -> next = NULL;  
            first = ptr;  
            printf("\nInserted\n");  
        }  
        else  
        {  
            temp = first;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = ptr;  
            ptr->next = NULL;  
            printf("\nInserted\n");  
          
        }  
    } 
}
void delrear(){
  struct node *ptr,*ptr1;  
    if(first == NULL)  
    {  
        printf("\nList empty");  
    }  
    else if(first -> next == NULL)  
    {  
        first = NULL;  
        free(first);  
        printf("\nFirst node of list deleted\n");  
    }  
          
    else  
    {  
        ptr = first;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from rear\n");  
    }     
}
void disp(){
  node *ptr = first;
  printf("The list is:\n");
  while(ptr != NULL) {
    printf("%d\n ",ptr->val);
    ptr = ptr->next;
   } 
   printf("\n"); 

}
int main(int argc, char* argv[])
{ int ch, val, y;
 do
 {
  printf("Enter the choice\n1.Create a linked list\n2.Add from front\n3.Delete from front\n4.Add from rear\n5.Delete from rear\n6. Display list\n7.EXIT\n ");
  scanf("%d",&ch);
  switch (ch)
  {
  case 1:
    create();
    break;
  case 2:
    printf("How many elements to add?\n");
    scanf("%d",&y);
    for(int i=0;i<y;i++){
      int A;
      printf("Enter the value\n");
      scanf("%d",&A);
      addfront(A);}
    break;
  case 3:
    delfront();
    break;
  case 4:
    printf("How many elements to add?\n");
    scanf("%d",&y);
    for(int i=0;i<y;i++){
      int A;
      printf("Enter the value\n");
      scanf("%d",&A);
      addrear(A);}
     break;
  case 5:
    delrear();
    break;
  case 6:
    disp();
    break;
  case 7:
    exit(0);
    break;
  default:
    printf("Invalid choice\n");
    break;
  }
 } while (0<ch<=6);
  

  printf("Hello World\n");
  return 0;
}



