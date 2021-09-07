#include<library_Managment_system.h>

/**
 * @brief function to find the details about a book
 * 
 * @param id 
 * @return test_values 
 */

test_values searchbook(int id)
{
    
    FILE *fp=NULL;
    fp = fopen("bookLibrary.dat","rb");
    if(fp==NULL)
    {
        printf("\nError while opening file in search area\n");
        return fail;
    }
    else{
    
    book *book_to_find=(book*)malloc(sizeof(book));
    while(fread(book_to_find,sizeof(book),1,fp))
    {
        if(book_to_find->book_id==id)
        {
            
            printf("\nBook_Id: %d\t\tBook_name: %s\t\tBook_Author: %s",book_to_find->book_id,book_to_find->book_name,book_to_find->author_name);
            fclose(fp);
            free(book_to_find);
            return pass;
        }
    }
    
    fclose(fp);
    free(book_to_find);
    printf("\nSpecified book is not present\n");
    
    return fail;
    }
}
