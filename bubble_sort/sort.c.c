 //5 tane sayýyý büyükten küçüðe veya küçükten büyüðe sýralayan program.
 
 #include<stdio.h>
  
    int main(){
    	
    	int i,max,min,a,j;
    	int dizi[]   ={10,23,13,40,50};
    	printf("Kucukten Buyuge siralamak icin 1'i\nBuyukten Kucuge siralamak icin 2'yi tuslayin : ");
    	scanf("%d",&a);
		
	
	if (1==a){
	
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
    
	    getch();
		return 0 ;
	}
