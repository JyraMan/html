#include <assert.h>
#include "courcework.h"

struct test
{
    float value;
    char choice;
    float expected;
    float result;
}CTEST;


void test_convertMM() {
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 10.0;
    CTEST.result = convertMM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertSM()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 1.0;
    CTEST.result = convertSM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertM()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 10000.0;
    CTEST.result = convertationM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}
    
