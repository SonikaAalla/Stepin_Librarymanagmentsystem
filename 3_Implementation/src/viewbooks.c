#include"library_Managment_system.h"

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */

test_values viewbook()
{
    
    FILE *fp=NULL;
    fp=fopen("bookLibrary.dat","rb");
   
    if(fp==NULL)
    {
        printf("\nERROR:\n");
        return fail;
    }
    else{
        book *book_to_find=(book*)malloc(sizeof(book));
    while(fread(book_to_find,sizeof(book),1,fp)==1)
    {
        printf("\n%d\t\t\t%s\t\t\t%s",book_to_find->book_id,book_to_find->book_name,book_to_find->author_name);
    }
    fclose(fp);
    free(book_to_find);
    
    return pass;
    }
}
