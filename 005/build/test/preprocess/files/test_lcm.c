#include "build/temp/_test_lcm.c"
#include "src/lcm.h"
#include "/var/lib/gems/2.3.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"


void test_lcm_1_and_2() {

  UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((2)), (UNITY_INT)(UNITY_INT32)((lcm(1, 2))), (

 ((void *)0)

 ), (UNITY_UINT)(5), UNITY_DISPLAY_STYLE_INT32);

}



void test_lcm_51_and_61() {

  UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((3111)), (UNITY_INT)(UNITY_INT32)((lcm(51, 61))), (

 ((void *)0)

 ), (UNITY_UINT)(9), UNITY_DISPLAY_STYLE_INT32);

}



void test_lcmRange_3_to_5() {

  UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((60)), (UNITY_INT)(UNITY_INT32)((lcmRange(3, 5))), (

 ((void *)0)

 ), (UNITY_UINT)(13), UNITY_DISPLAY_STYLE_INT32);

}



void test_lcmRange_1_to_7() {

  UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((420)), (UNITY_INT)(UNITY_INT32)((lcmRange(1, 7))), (

 ((void *)0)

 ), (UNITY_UINT)(17), UNITY_DISPLAY_STYLE_INT32);

}



void test_lcmRange_1_to_10() {

  UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((2520)), (UNITY_INT)(UNITY_INT32)((lcmRange(1, 10))), (

 ((void *)0)

 ), (UNITY_UINT)(21), UNITY_DISPLAY_STYLE_INT32);

}



void test_lcmRange_1_to_20() {

  UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((232792560)), (UNITY_INT)(UNITY_INT32)((lcmRange(1, 20))), (

 ((void *)0)

 ), (UNITY_UINT)(25), UNITY_DISPLAY_STYLE_INT32);

}
