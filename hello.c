#include <stdio.h>

/* Hello world 
 * by Fernando Rodriguez
 */
int main(int argc, char *argv[])
{
	
     printf("Hello world!\n");
	 printf("written by Fernando Rodriguez\n");
     
     /* This section computes a sum. */
     int x, y, z;
	 x = 10;
	 y = 20;
	 z = x+y;
	 printf("x is %d, y is %d, and z is %d\n", x, y, z);
	 
	 /* This section computes the volume V of a box */
	 int h, w, d, V;
	 h = 11;
	 w = 14;
	 d = 7;
	 V = h*w*d;
	 printf("h is %d, w is %d, d is %d and V is %d\n", h, w, d, V);
	 return(0);
}
