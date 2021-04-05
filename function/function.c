#include<stdio.h>
#include<stdlib.h>  
 #define n 5  
 
   void sirala(int yon,int dizi[],int i)
   {
   	   int max,min,j,b;
    	
			if (1==yon){
	
	for(j=0;j<5;j++)
	{
	   for(i=0;i<4;i++)
	 {
		if(dizi[i]>dizi[i+1])
		{
    		max = dizi[i];
    		dizi[i]=dizi[i+1];
    		dizi[i+1]=max;
    	} 
     }
	}
	   
	   printf("***Kucukten Buyuge Siralar***\n") ;
		
	for(i=0;i<5;i++)
    {
		 printf("%d\n",dizi[i]);
    }

  }  
   else if(2==yon)	{
    
		for(j=0;j<5;j++)
	   {
	       for(i=0;i<4;i++)
         	{ 
    	    	if(dizi[i]<dizi[i+1])
		     	{
    			min = dizi[i+1];
    			dizi[i+1]=dizi[i];
    			dizi[i]=min;
    		    }
        	}
       }
		   printf("***Buyukten kucuge Siralar***\n") ;
		
		for(i=0;i<5;i++)
        {
           printf("%d\n",dizi[i]);
        }	
    		
   	}
    	else
		{
			printf("yanlis tuslama yaptiniz.");
		}
   }
   
   
   int main(){
    	
    
      int  dizi[n] ={10,15,23,05,17},a;
	    printf("kucukten buyuge siralamak icin 1'i\nbuyukten kucuge siralamak icin 2'yi tusla : ");
        scanf("%d",&a);
    	sirala(a,dizi,n);

    
    
	    getch();
		return 0 ;
	}
