#include "build/temp/_test_prime.c"
#include "/var/lib/gems/2.3.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"
#include "src/prime.h"


void test_primeN_1() {

  UnityAssertEqualNumber((UNITY_INT)((2)), (UNITY_INT)((primeN(1))), (

 ((void *)0)

 ), (UNITY_UINT)(5), UNITY_DISPLAY_STYLE_INT64);

}



void test_primeN_2() {

  UnityAssertEqualNumber((UNITY_INT)((3)), (UNITY_INT)((primeN(2))), (

 ((void *)0)

 ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT64);

}



void test_primeN_3() {

  UnityAssertEqualNumber((UNITY_INT)((5)), (UNITY_INT)((primeN(3))), (

 ((void *)0)

 ), (UNITY_UINT)(13), UNITY_DISPLAY_STYLE_INT64);

}



void test_primeN_4() {

  UnityAssertEqualNumber((UNITY_INT)((7)), (UNITY_INT)((primeN(4))), (

 ((void *)0)

 ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT64);

}



void test_primeN_5() {

  UnityAssertEqualNumber((UNITY_INT)((11)), (UNITY_INT)((primeN(5))), (

 ((void *)0)

 ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT64);

}



void test_primeN_101() {

  UnityAssertEqualNumber((UNITY_INT)((547)), (UNITY_INT)((primeN(101))), (

 ((void *)0)

 ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT64);

}



void test_primeN_10001() {

  UnityAssertEqualNumber((UNITY_INT)((104743)), (UNITY_INT)((primeN(10001))), (

 ((void *)0)

 ), (UNITY_UINT)(29), UNITY_DISPLAY_STYLE_INT64);

}
