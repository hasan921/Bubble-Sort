#include <stdio.h>

int main(void)
{
  int *ip1,*ip2,id1,id2 ;
    ip1=&id1;
    ip2=&id2;
    id1=42;
   *ip2=56;
   
   printf("id1 degiskeninin deger : %d\n",*ip1);
   printf("id2 degiskeninin deger : %d\n",*ip2);
   printf("id1 degiskeninin bellek adresi : %p\n",ip1);
   printf("id2 degiskeninin bellek adresi : %p\n",ip2);
   printf("ip1 pointerin bellek adresi : %p\n",&ip1);
   printf("ip2 pointerin bellek adresi : %p",&ip2);
   
   return 0 ;
}
