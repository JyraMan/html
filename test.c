#include <assert.h>
#include "courcework.h"

float value;
float choice;
float expected;
float result;

void test_convertMM()
{
    value = 100.0;
    choice = 'a';
    expected = 10.0;
    result = convertMM(value, choice);
}

void test_convertSM()
{
    value = 100.0;
    choice = 'a';
    expected = 1.0;
    result = convertSM(value, choice);
    assert(result==expected);
}

int main()
{
    test_convertMM();
    test_convertSM();
    return 0;
}