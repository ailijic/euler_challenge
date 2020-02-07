#include "build/temp/_test_series.c"
#include "src/series.h"
#include "/var/lib/gems/2.3.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"


void test_sumOf13_ones() {

  char const str[] = "1111111111111";

  UnityAssertEqualNumber((UNITY_INT)((1)), (UNITY_INT)((sumOf13(str))), (

 ((void *)0)

 ), (UNITY_UINT)(6), UNITY_DISPLAY_STYLE_INT64);

}



void test_sumOf13_zero() {

  char const str[] = "1111111111011";

  UnityAssertEqualNumber((UNITY_INT)((0)), (UNITY_INT)((sumOf13(str))), (

 ((void *)0)

 ), (UNITY_UINT)(11), UNITY_DISPLAY_STYLE_INT64);

}



void test_sumOf13_many_nums() {

  char const str[] = "1234567899999";

  UnityAssertEqualNumber((UNITY_INT)((2380855680)), (UNITY_INT)((sumOf13(str))), (

 ((void *)0)

 ), (UNITY_UINT)(16), UNITY_DISPLAY_STYLE_INT64);

}



void test_maxProduct_of_1000_numbers() {

  UnityAssertEqualNumber((UNITY_INT)((23514624000L)), (UNITY_INT)((maxProduct(num_str))), (

 ((void *)0)

 ), (UNITY_UINT)(20), UNITY_DISPLAY_STYLE_INT64);

}
