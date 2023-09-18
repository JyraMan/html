#include <assert.h>
#include "courcework.h"
#define CTEST_main

void test_convertMM() {
    float value = 100.0;
    char choice = 'a';
    float expected = 10.0;
    float result = convertMM(value, choice);
    ASSERT_EQUAL(result==expected);
    printf("test passed successfully");
}

void test_convertSM()
{
    float value = 100.0;
    char choice = 'a';
    float expected = 1.0;
    float result = convertSM(value, choice);
    assert(result==expected);
}



int main() {
    test_convertMM();
    test_convertSM();
    
    return 0;
}