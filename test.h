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
    CTEST.expected = 373.0;
    CTEST.result = convertationC(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertK()
{
    CTEST.value = 274.0;
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
    CTEST.value = 274.0;
    CTEST.choice= 'a';
    CTEST.expected = 39.8;
    CTEST.result = convertationK(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertF()
{
    CTEST.value = 33.0;
    CTEST.choice= 'a';
    CTEST.expected = 273.7;
    CTEST.result = convertationF(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertF()
{
    CTEST.value = 33.0;
    CTEST.choice= 'b';
    CTEST.expected = 0.55;
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

void test_convertSEC()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 1.66;
    CTEST.result = convertationSEC(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertSEC()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 0.027;
    CTEST.result = convertationSEC(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertSEC()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 0.001;
    CTEST.result = convertationSEC(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertSEC()
{
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 0.00003;
    CTEST.result = convertationSEC(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertSEC()
{
    CTEST.value = 100.0;
    CTEST.choice= 'e';
    CTEST.expected = 0.000003;
    CTEST.result = convertationSEC(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMIN()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 6000.0;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMIN()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 1.66;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMIN()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 0.0694;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMIN()
{
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 0.0023;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMIN()
{
    CTEST.value = 100.0;
    CTEST.choice= 'e';
    CTEST.expected = 0.00019;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHOUR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 360000.0;
    CTEST.result = convertationHOUR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHOUR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 6000.0;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHOUR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 4.16;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHOUR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 0.13;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertHOUR()
{
    CTEST.value = 100.0;
    CTEST.choice= 'e';
    CTEST.expected = 0.01;
    CTEST.result = convertationMIN(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertDAYS()
{
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 8640000.0;
    CTEST.result = convertationDAYS(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertDAYS()
{
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 144000.0;
    CTEST.result = convertationDAYS(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertDAYS()
{
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 2400.0;
    CTEST.result = convertationDAYS(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertDAYS()
{
    CTEST.value = 100;
    CTEST.choice= 'd';
    CTEST.expected = 3.28;
    CTEST.result = convertationDAYS(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertDAYS()
{
    CTEST.value = 100.0;
    CTEST.choice= 'e';
    CTEST.expected = 0.27;
    CTEST.result = convertationDAYS(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMONTH()
{
    CTEST.value = 1.0;
    CTEST.choice= 'a';
    CTEST.expected = 2628000.0;
    CTEST.result = convertationMONTH(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMONTH()
{
    CTEST.value = 1.0;
    CTEST.choice= 'b';
    CTEST.expected = 43800.0;
    CTEST.result = convertationMONTH(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMONTH()
{
    CTEST.value = 1.0;
    CTEST.choice= 'c';
    CTEST.expected = 730.0;
    CTEST.result = convertationMONTH(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMONTH()
{
    CTEST.value = 1.0;
    CTEST.choice= 'd';
    CTEST.expected = 30.417;
    CTEST.result = convertationMONTH(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMONTH()
{
    CTEST.value = 1.0;
    CTEST.choice= 'e';
    CTEST.expected = 0.083;
    CTEST.result = convertationMONTH(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertYEAR()
{
    CTEST.value = 1.0;
    CTEST.choice= 'a';
    CTEST.expected = 31540000.0;
    CTEST.result = convertationYEAR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertYEAR()
{
    CTEST.value = 1.0;
    CTEST.choice= 'b';
    CTEST.expected = 525600.0;
    CTEST.result = convertationYEAR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertYEAR()
{
    CTEST.value = 1.0;
    CTEST.choice= 'c';
    CTEST.expected = 8760.0;
    CTEST.result = convertationYEAR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertYEAR()
{
    CTEST.value = 1.0;
    CTEST.choice= 'd';
    CTEST.expected = 365.0;
    CTEST.result = convertationYEAR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertYEAR()
{
    CTEST.value = 1.0;
    CTEST.choice= 'a';
    CTEST.expected = 12.0;
    CTEST.result = convertationYEAR(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}