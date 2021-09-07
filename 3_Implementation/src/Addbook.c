#include<library_Managment_system.h>

/**
 * @brief function to add new books to library
 * 
 * @return test_values 
 */

test_values addition(int id,char name[],char author[])
{
    
    
    
    FILE *fp=NULL;
    fp=fopen("bookLibrary.dat","ab+");
    
    if(fp == NULL)
    {
        printf("\nError: while opening file\n");
        return fail;
    }
    else{
        
        book *newBook = NULL;
        newBook = malloc(sizeof(book));
		
        newBook->book_id = id;
        strcpy(newBook->book_name,name);
        
    

    strcpy(newBook->author_name,author);
    
    fwrite(newBook,sizeof(book),1,fp);
    fclose(fp);
    free(newBook);
    
    
    return pass;
    }

}
