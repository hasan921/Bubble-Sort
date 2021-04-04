 #include<stdio.h>
 
 struct personelBilgi
 {
 	
 	char ad[20];
 	char soyad[20];
 	char cinsiyet[5];
 	int  dogumYili;
 	int boy;
 	int kilo;
 };

int main(){
   
   struct personelBilgi kayit;
   
   printf("Ad : ");
   gets(kayit.ad);
   printf("\nSoyad : ");
   gets(kayit.soyad);
   printf("\nCinsiyet : ");
   gets(kayit.cinsiyet);
   printf("\nDogum Yili : ");
   scanf("%d",&kayit.dogumYili);
   printf("\nBoy :");
   scanf("%d",&kayit.boy);
   printf("\nKilo :");
   scanf("%d",&kayit.kilo);
	
 	printf("\n\n\n\n\n****Bilgileriniz****\n\n");
    puts(kayit.ad);
	puts(kayit.soyad);
	puts(kayit.cinsiyet);
	printf("%d\n%d\n%d",kayit.dogumYili,kayit.boy,kayit.kilo);
	
	
	
	return 0;
}
