#include<stdlib.h>
#include <stdio.h>

struct node10
{
        char info10;
        struct node10 *next10;
};

struct node10 *start10=NULL;

void CreateExpressionLL()
{
        struct node10 *temp10,*ptr10;
        temp10=(struct node10 *)malloc(sizeof(struct node10));
        if(temp10==NULL)
        {
                printf("\nOut of memory!!!...\n");
                exit(0);
        }
        printf("\nEnter the expression elements....\n");
        scanf("%s",&temp10->info10);
        temp10->next10=NULL;
        if(start10==NULL)
        {
                start10=temp10;
        }
        else
        {
                ptr10=start10;
                while(ptr10->next10!=NULL)
                {
                	ptr10=ptr10->next10;
                }
                ptr10->next10=temp10;
                ptr10=temp10;
        }
}

void displayExpressionLL()
{
        struct node10 *ptr10;
        if(start10==NULL)
        {
                printf("\nNo expression found!!!!.....\n");
                return;
        }
        else
        {
                ptr10=start10;
                printf("\nExpression in linked list is :-\n");
                while(ptr10!=NULL)
                {
                        printf("%c\t",ptr10->info10);
                        ptr10=ptr10->next10 ;
                }
                printf("\n");
        }
}

struct node11
{
   char info11;
   struct node11 *next11;
};

struct node11 *start11=NULL;

int isBalanced()
{
	int TF; //boolean variable
	 struct node10 *ptr10;
	 struct node11 *temp11;
	 struct node11 *ptr11;
	 temp11=(struct node11 *)malloc(sizeof(struct node11));
	 temp11->next11=NULL;
        if(start10==NULL)
        {
                printf("\nNo expression found!!!!.....\n");
        }
        else
        {
                ptr10=start10;
                
                while(ptr10!=NULL)
                {
                        if(ptr10->info10 == '(' || ptr10->info10 == '[' || ptr10->info10 == '{')
                        {          
                        	temp11->info11=ptr10->info10;  //insert at beginning in Linked List
                                   if(start11==NULL)
                                  {
                                       start11=temp11;
                                  }
                                  else
                                  {
                                      temp11->next11=start11;
                                      start11=temp11;
                                  }
                        }
                        if(ptr10->info10 == ')' || ptr10->info10 == ']' || ptr10->info10 == '}')
                        {
                        	
                                if(start11==NULL)
                                  {
                                   TF=0;
                                  }
                                 else
                                 {
                                    ptr11=start11;
                                    start11=start11->next11 ;
                                    
                                    free(ptr11);
                                 }
                        }
                                    ptr10=ptr10->next10 ;
                }

                if(start11==NULL)
                {
                	TF=1;
                }
                else
                {
                	TF=0;
                }
                
        }
        return TF;
}

int main()     
{
        int choice10;
        int exit10=0;
        int Balanced;
        do{
               
                printf("\n                MENU                             \n");
                printf("\n 1.Create a linked list and store elements of an expression inside the linked list   \n");
                printf("\n 2.Display the elements of the expression stored inside the linked list    \n");
                printf("\n 3.To check whether th equation is balanced or not   \n");
                printf("\n 4.Exit       \n");
                printf("\n--------------------------------------\n");
                printf("\nEnter your choice:\n");
                scanf("%d",&choice10);
                switch(choice10)
                {
                        case 1:
                                        CreateExpressionLL();
                                        break;
                        case 2:
                                        displayExpressionLL();
                                        break; 
                        case 3:
                                        Balanced=isBalanced();
                                        if(Balanced==1)
                                        {
                                        	printf("The equation is Balanced.....\n");
                                        }
                                        else
                                        {
                                        	printf("The equation is not balanced\n");
                                        }
                                        printf("\n");
                                        break;    
                        
                        case 4:
                                        printf("This piece of program was written by\n");
                                        printf("Name : Aditya Kumar\n");
                                        printf("Roll number : 1901230100001\n");
                                        printf("College code: 123\n");
                                        printf("College Name : SITM\n");
                                        printf("Course: B.Tech\n");
                                        printf("Branch : Computer science\n");
                                        printf("Year : 2nd Year\n");
                                        printf("Thank you for using my program ....Bye\n");
                                        exit10=5000;
                                        break;
                             
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
            }while(exit10<4000);
        
        return 0;
}