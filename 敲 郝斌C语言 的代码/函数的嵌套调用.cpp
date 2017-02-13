 #include<stdio.h>
 int square(int l2);
 int double_area(int l1);
 int main()
 {
 	int l0=10;
 	printf("%d\n",double_area(l0));
 	return 0;
 }
   int square(int l2)
 {
 	return l2*l2;
 }
 int double_area(int l1)
 {
 	return 2*square(l1);
 }
