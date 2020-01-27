#include "build/temp/_test_squares.c"
#include "src/squares.h"
#include "/var/lib/gems/2.3.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"


void test_diff_squares_1_to_100() {

  UnityAssertEqualNumber((UNITY_INT)((25164150L)), (UNITY_INT)((diff_squares(1, 100))), (

 ((void *)0)

 ), (UNITY_UINT)(5), UNITY_DISPLAY_STYLE_INT64);

}
