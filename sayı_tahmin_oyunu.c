#include <stdlib.h>
#include <stdio.h>
#include <ctime>


main(){
	
	int  rastgeleSayi = 0, girilenSayi = 0, denemeSayisi = 0; 
	

	srand(time(NULL));
	
	rastgeleSayi = rand() % 10;
	
	do{
		
			printf(" 1-10 Arasi sayi tutulmustur:\n");
	printf(" Tahmininiz Nedir?:");
	scanf("%d",&girilenSayi);
	
	if(girilenSayi>10 ){
		printf("Bu sayi 1-10 arasinda degildir. Sadece 1-10 arasinda sayi giriniz\n");
	}
	else if( girilenSayi<1){
		printf("Bu sayi 1-10 arasinda degildir. Sadece 1-10 arasinda sayi giriniz\n");
	}
	
	
	if(rastgeleSayi < girilenSayi){
		printf("Girdiginiz sayi buyuktur daha kucuk bir sayi girin");
			printf("\n\n");

		}
		
	else if(rastgeleSayi > girilenSayi){
				printf("Girdiginiz sayi kucuktur daha buyuk bir sayi girin");
printf("\n\n");

	
	
	
	}
	
	denemeSayisi++;
	


	} 	while(rastgeleSayi != girilenSayi);
	

   printf("Tebrikler. %d. seferde bildiniz",denemeSayisi);
   
	 
   
}
    
   

	
   

	
