/**
 * @file library_Managment_system.h
 * @author Aalla Sonika (aalla.sonika@ltts.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-11
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __LIBRARY_MANAGEMENT_SYSTEM_H__
#define __LIBRARY_MANAGEMENT_SYSTEM_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>


/**
 * @brief structure for Book Record
 * 
 */
typedef struct library
{
    int book_id;
    char book_name[20];
    char author_name[20];
}book;

/**
 * @brief return type for funtions for unit testing
 * 
 */

typedef enum test_values {
    pass = 1,
    fail = 0
}test_values;

/**
 * @brief function to find a book by its ID
 * @param id 
 * @return test_values 
 */
test_values searchbook(int id);

/**
 * @brief function to add new books to the library
 * 
 * @return test_values 
 */
test_values addition(int id,char name[],char author[]);

/**
 * @brief funtion to denote discarded books
 * 
 * @param id 
 * @return test_values 
 */
test_values deletebook(int id);

/**
 * @brief function to view all the books
 * 
 * @return test_values 
 */
test_values issuebook(int id);

/**
 * @brief function to issue the books
 * 
 * @return test_values 
 */
test_values viewbook(void);

#endif
