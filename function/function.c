#include<stdio.h>
  
   
   void sirala(int dizi[],int boyut)
   {
   	   int i,max,min,a,j,b;
    	printf("\nLutfen bes sayi giriniz : \n");
    	  
    	    for(b=0;b<5;b++){
    	    	printf("%d. sayi : ",b+1);
    	    	scanf("%d",&dizi[b]);
    	    	}
    	    
    	
    	
    	printf("Kucukten Buyuge siralamak icin 1'i\nBuyukten Kucuge siralamak icin 2'yi tuslayin : ");
    	scanf("%d",&a);
		
    	if (1==a){
	
	for(j=0;j<5;j++)
	{
	   for(i=0;i<5;i++)
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
    
	
	  else if(2==a)	{
    
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
    	
    int dizi[5];
 
    	sirala(dizi,5);

    
    
	    getch();
		return 0 ;
	}
