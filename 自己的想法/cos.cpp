#include <stdio.h> 

#include <math.h> 

int main(void) 

{ 

   float result; 
   float k;
   scanf("%f",&k);
   float x = M_PI/k;

   result = cos(x); 

   printf("cos(PI) is %f\n", result);

   return 0; 

}

