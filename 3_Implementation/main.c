/**
 * @file main.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include"library_Managment_system.h"

/**
 * @brief main function of the project
 * 
 * @return int 
 */

int main()
{
    
    int id,choice,success; 
    
    char name[20],authorname[20];
    
        

    printf("\n\t\t\t\t\t\t*************** MAIN MENU ***************\n");
    printf("\n\t\t\t\t\t\t1. Add Books");
    printf("\n\t\t\t\t\t\t2. Delete books");
    printf("\n\t\t\t\t\t\t3. View Books");
    printf("\n\t\t\t\t\t\t4. Search book");
    printf("\n\t\t\t\t\t\t5. Issue books");
    printf("\n\t\t\t\t\t\t6. Close Application");
    printf("\n\t\t\t\t\t\t******************************************\n");
    printf("\n\t\t\t\t\t\tEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        printf("\nBookId: ");
        scanf("%d",&id);
        fflush(stdin);
        printf("\nBook name:");
        //gets(name);
	scanf("%19s",name);
       printf("Authorname: ");
        fflush(stdin);
        //gets(author);
	scanf("%19s",authorname);
        success=addition(id,name,authorname);
        break;
        case 2:
        printf("\nBookId: ");
        scanf("%d",&id);
        success=deletebook(id);
        break;
        case 3:
        success=viewbook();
        break;
        case 4:
        printf("\nBookId:");
        scanf("%d",&id);
        success=searchbook(id);
        break;
        case 5:
        printf("\nBookId: ");
        scanf("%d",&id);
        success=issuebook(id);
        break;
        case 6:
        printf("\n\n\n");
        exit(1);
        default:
        printf("\n\t\t\t\t\t\tInvalid input");
        break;
     }
    if(success == pass)
    {
        printf("Successful\n");
    }
    else if(success==fail)
    {
        printf("Unsuccessful\n");
    }
    else{
        printf("Error\n");
    }
return 0;
}
