#include "build/temp/_test_pythag.c"
#include "/var/lib/gems/2.3.0/gems/ceedling-0.29.1/vendor/unity/src/unity.h"
#include "src/pythag.h"


void test_tripletProduct_1000() {

  struct Triplet const*const t = tripletProduct(1000);

  if ((((t)) != 

 ((void *)0)

 )) {} else {UnityFail( (((" Expected Non-NULL"))), (UNITY_UINT)((UNITY_UINT)((UNITY_UINT)(6))));};

  UnityAssertEqualNumber((UNITY_INT)(UNITY_INT32)((31875000)), (UNITY_INT)(UNITY_INT32)((t->a * t->b * t->c)), (

 ((void *)0)

 ), (UNITY_UINT)(7), UNITY_DISPLAY_STYLE_INT32);

}
