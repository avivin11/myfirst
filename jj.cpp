#include<stdio.h>

#include "jj.h"
JJEXPORT void JJCALL Java_jj_greet
(jjEnv *env, jobject obj,int a,int b){
      printf("\nSum of Number is %d\n",a+b);
      return;
}
