#include <stdlib.h>
#include <stdio.h>
#include <ctime>


main(){
	
	int  rastgeleSayi = 0, girilenSayi = 0, denemeSayisi = 0; 
	
/*srand(time(NULL));
	
	rastgeleSayi = rand() % 10;  1 ile 10 arası rastgele sayı üretmesi için bilgisayara verilmesi gereken komut*/
	srand(time(NULL));
	
	rastgeleSayi = rand() % 10;
do{  
	printf(" 1-10 Arasi sayi tutulmustur:\n");
	printf(" Tahmininiz Nedir?:");
	scanf("%d",&girilenSayi);
	
if(rastgeleSayi < girilenSayi){
	printf("Girdiginiz sayi buyuktur daha kucuk bir sayi girin");
	printf("\n\n");

		}
else if(rastgeleSayi > girilenSayi){
	printf("Girdiginiz sayi kucuktur daha buyuk bir sayi girin");
        printf("\n\n");

	}
	denemeSayisi++;
	


} while(rastgeleSayi != girilenSayi);

        printf("Tebrikler. %d. seferde bildiniz",denemeSayisi);
   
	 
   
}
    
   

	
