#include<stdio.h>

  int main(){
  	
  	unsigned int a = 15 ; // 0000 1111
  	unsigned int b = 17 ; // 0001 0001
  	unsigned int c = a&b; // 0000 0001  dec : 1  hex : 01
  	unsigned int d = a|b; // 0001 1111  dec : 31 hex : 1F
  	unsigned int e = a^b; // 0001 1110  dec : 30 hex : 1E
  	printf("a : %u\nb : %u\n",a,b); 
  	printf("Bitsel And : %u \n",c);
  	printf("Bitsel or : %u \n",d);
  	printf("Bitsel xor : %u \n",e);
  	printf("Bitsel And : %X \n",d);
  	printf("\n\n\n");
  	int g = 37 ;          // 0010 0101  dec : 37 hex:25
  	printf("Decimal value of g : %d\n",g);
  	printf("Hex value of g : %X \n",g);
  	a=g<<1;                // 0100 1010 dec:74  hex:4A
  	printf("After bitwise Decimal value of g : %d\n",a);
  	printf("After bitwise Hex value of g : %X\n",a);
  	
	  return 0;
  }
