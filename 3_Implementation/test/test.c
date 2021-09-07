#include"library_Managment_system.h"
#include"unity_internals.h"
#include"unity.h"

void setUp(){}

void tearDown(){}


void test_addition(void){
    TEST_ASSERT_EQUAL(pass,addition(125, "Sonika", "Dragon"));
}

void test_viewbook(void){
    TEST_ASSERT_EQUAL(pass,viewbook());
}

void test_searchbook(void){
    TEST_ASSERT_EQUAL(fail,searchbook(-2));
    TEST_ASSERT_EQUAL(pass,searchbook(125));
}



void test_deletebook(void){
    TEST_ASSERT_EQUAL(pass,deletebook(125));
}        

void test_issuebook(void){
    TEST_ASSERT_EQUAL(pass,issuebook(125));
}

int main(){
    UNITY_BEGIN();

    RUN_TEST(test_addition);
    RUN_TEST(test_searchbook);
    RUN_TEST(test_issuebook);
    RUN_TEST(test_deletebook);
    RUN_TEST(test_viewbook);
    
    return UNITY_END();
}
