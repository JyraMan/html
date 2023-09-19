#include <assert.h>
#include "courcework.h"

struct test
{
    float value;
    char choice;
    float expected;
    float result;
}CTEST;


void test_convertMMA() {
    CTEST.value = 100.0;
    CTEST.choice= 'a';
    CTEST.expected = 10.0;
    CTEST.result = convertMM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMMB() {
    CTEST.value = 100.0;
    CTEST.choice= 'b';
    CTEST.expected = 0.1;
    CTEST.result = convertMM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMMC() {
    CTEST.value = 100.0;
    CTEST.choice= 'c';
    CTEST.expected = 0.0001;
    CTEST.result = convertMM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertMMC() {
    CTEST.value = 100.0;
    CTEST.choice= 'd';
    CTEST.expected = 0.32;
    CTEST.result = convertMM(CTEST.value, CTEST.choice);
    assert(CTEST.result==CTEST.expected);
    printf("+------------------------+\n");
    printf("|test passed successfully|\n");
    printf("+------------------------+\n");
}

void test_convertSMA()
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

void test_convertSMB()
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

void test_convertSMC()
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

void test_convertSMD()
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

void test_convertMA()
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

void test_convertMB()
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

void test_convertMC()
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

void test_convertMD()
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

void test_convertCA()
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

void test_convertCB()
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

void test_convertKA()
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

void test_convertKB()
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

void test_convertFA()
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

void test_convertFB()
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

void test_convertGRA()
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

void test_convertGRB()
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

void test_convertGRC()
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

void test_convertGRD()
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

void test_convertGRE()
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

void test_convertKRA()
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

void test_convertKRB()
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

void test_convertKRC()
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

void test_convertKRD()
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

void test_convertHWA()
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

void test_convertHWB()
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

void test_convertHWC()
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

void test_convertHWD()
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

void test_convertSECA()
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

void test_convertSECB()
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

void test_convertSECC()
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

void test_convertSECD()
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

void test_convertSECE()
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

void test_convertMINA()
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

void test_convertMINB()
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

void test_convertMINC()
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

void test_convertMIND()
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

void test_convertMINE()
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

void test_convertHOURA()
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

void test_convertHOURB()
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

void test_convertHOURC()
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

void test_convertHOURDD()
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

void test_convertHOURE()
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

void test_convertDAYSA()
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

void test_convertDAYSB()
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

void test_convertDAYSC()
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

void test_convertDAYSD()
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

void test_convertDAYSE()
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

void test_convertMONTHA()
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

void test_convertMONTHB()
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

void test_convertMONTHC()
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

void test_convertMONTHD()
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

void test_convertMONTHE()
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

void test_convertYEARA()
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

void test_convertYEARB()
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

void test_convertYEARC()
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

void test_convertYEARD()
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

void test_convertYEARE()
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