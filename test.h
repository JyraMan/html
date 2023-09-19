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

void test_convertMM() {
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 0.1;
    CTEST.result = convertMM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMM() {
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 0.0001;
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

void test_convertSM()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 1000.0;
    CTEST.result = convertSM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertSM()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 0.001;
    CTEST.result = convertSM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertSM()
{
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 10.0;
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

void test_convertM()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 0.1;
    CTEST.result = convertationM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertM()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 0.0621;
    CTEST.result = convertationM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertM()
{
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 328.08;
    CTEST.result = convertationM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertC()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 212.0;
    CTEST.result = convertationC(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertC()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 373.15;
    CTEST.result = convertationC(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertK()
{
    CTEST.value = 274.15;
    CTEST.choice= 'b';
    CTEST.expected = 1.0;
    CTEST.result = convertationK(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertK()
{
    CTEST.value = 255.93;
    CTEST.choice= 'a';
    CTEST.expected = 1.0;
    CTEST.result = convertationK(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertF()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 310.93;
    CTEST.result = convertationF(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertF()
{
    CTEST.value = 100;
    CTEST.choice= 'b';
    CTEST.expected = 37.78;
    CTEST.result = convertationF(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertGR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 0.1;
    CTEST.result = convertationGR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertGR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 100000.0;
    CTEST.result = convertationGR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertGR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 0.22;
    CTEST.result = convertationGR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertGR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 500.0;
    CTEST.result = convertationGR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertGR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'e';
    CTEST.expected = 0.0001;
    CTEST.result = convertationGR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertKR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 100000.0;
    CTEST.result = convertationKR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertKR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 220.5;
    CTEST.result = convertationKR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertKR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 100000000.0;
    CTEST.result = convertationKR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertKR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 500000.0;
    CTEST.result = convertationKR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertKR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'e';
    CTEST.expected = 0.1;
    CTEST.result = convertationKR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHW()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 10000000.0;
    CTEST.result = convertationHW(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHW()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 10000.0;
    CTEST.result = convertationHW(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHW()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 10.0;
    CTEST.result = convertationHW(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHW()
{
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 22050.0;
    CTEST.result = convertationHW(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}