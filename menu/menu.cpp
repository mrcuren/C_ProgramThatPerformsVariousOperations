#include<stdio.h>
#include <time.h>
#include <stdlib.h>

int topla(){
	
	int t = 0;
	int adet,i;
    printf("Toplama yapmak istedi�iniz say� say�s�n� girin: ");
	scanf("%d",&adet);
	int toplama[adet];

	for(i=0;i<adet;i++){
		
		printf("%d. say�yi girin: ",i+1);
		scanf("%d",&toplama[adet]);
		t= toplama[adet]+t;
		
	}
	printf("Sonuc: %d ",t);
	
}
int cikar(){
	
	int i;
	int c=0;
	int cikarma[2];
	for(i=0;i<2;i++){
		
		printf("%d. say�y� giriniz: ",i+1);
		scanf("%d",&cikarma[i]);
		c=cikarma[i]-c;
		
	}
	printf("Sonuc: %d",c);
}
int carp(){
	int c=1;
	int adet,i;
	printf("�arpmak istediginiz sayi miktar�n� girin:");
	scanf("%d",&adet);
	int carpma[adet];
	for(i=0;i<adet;i++){
		
		printf("%d. say�y� girin: ",i+1);
		scanf("%d",&carpma[i]);
		c= carpma[i]*c;
	}
	printf("Sonuc: %d",c);	
}
int bol(){
	
	int b=1;
	int bolme[2];
	for(int i=0;i<2;i++){
		
		printf("%d. sayiyi girin: ",i+1);
		scanf("%d",&bolme[i]);
		
		if(b<bolme[i]){
			b= bolme[i]/b;
		}
		else{
			
			b= b/bolme[i];
		}
		
	}
	printf("Sonuc : %d",b);
}
int hesapmakinesi(){
	
	int hesapsecme; 
	printf("Yapmak istedi�iniz i�lemi belirtin.\n");
	printf("1.Toplama\n 2.��karma\n 3.�arpma\n 4.B�lme");
	scanf("%d",&hesapsecme);
	if(hesapsecme<1 || hesapsecme>4){
		printf("!!! Lutfen gecerli bir secim yapin. !!! \n \n");
		hesapmakinesi();
	}
	else{
		
		switch(hesapsecme){
		
		case 1:
			topla();
			break;
			
		case 2:
			cikar();
			break;
			
		case 3:
			carp();
			break;
		case 4:
			bol();
			break;
	}
	
			
	}
	
	
}
int karealan(){
	
	int kkenar;
	int alan;
	printf("Bir kenar�n uzunlu�unu giriniz: ");
	scanf("%d",&kkenar);
	alan = kkenar*kkenar;
	printf("Karenin alani : %d",alan);
}
int dalan(){
	
	int dkisa,duzun,alan;
	printf("Dikd�rtgenin k�sa kenar�n uzunlu�unu giriniz: ");
	scanf("%d",&dkisa);
	printf("Dikd�rtgenin uzun kenar�n uzunlu�unu giriniz: ");
	scanf("%d",&duzun);
	alan= dkisa*duzun;
	printf("Dikd�rtgenin alan� : %d",alan);
	
}
int dairealan(){
	
	int pi=3.14,r,alan;
	printf("Dairenin yaricapini giriniz: ");
	scanf("%d",&r);
	alan= pi*r*r;
	printf("Dairenin alan� : %d",alan);
	
}
int alanhesap(){
	
	int sec;
	printf("Alan hesab� yapmak istedi�iniz geometrik �ekli belirtilen rakamlarla se�in. \n");
	printf("1.KARE\n 2.D�KD�RTGEN\n 3.DA�RE\n");
	scanf("%d",&sec);
	if(sec<1 || sec>3){
		
		printf("!!! Lutfen gecerli bir secim yapin. !!! \n \n");
		alanhesap();
	}
	else{
		
		switch(sec){
			
			case 1:
				karealan();
				break;
			case 2:
				dalan();
				break;
			case 3:
				dairealan();
				break;
				
				
		}
	}
	
}
int karecevre(){
	
	int cevre,kenaru;
	printf("Kenar uzunlugunu giriniz: ");
	scanf("%d",&kenaru);
	cevre = kenaru*4;
	printf("Karenin cevresi: %d",cevre);
}
int dcevre(){
	int cevre,kisakenar,uzunkenar;
	printf("K�sa kenar uzunlugunu giriniz: ");
	scanf("%d",&kisakenar);
	printf("Uzun kenar�n uzunlugunu giriniz: ");
	scanf("%d",&uzunkenar);
	cevre= (kisakenar*2) + (uzunkenar*2);
	printf("Dikdortgenin cevresi : %d",cevre);
	
}
int dairecevre(){
	
	int pi = 3.14,r,cevre;
	printf("Dairenin yaricapini giriniz: ");
	scanf("%d",&r);
	cevre= pi*r*2;
	printf("Dairenin cevresi: %d",cevre);
	
}
int cevrehesap(){
	
	int sec;
	printf("�evre hesab� yapmak istedi�iniz geometrik �ekli belirtilen rakamlarla se�in. \n");
	printf("1.KARE\n 2.D�KD�RTGEN\n 3.DA�RE\n");
	scanf("%d",&sec);
	if(sec<1 || sec>3){
		
		printf("!!! Lutfen gecerli bir secim yapin. !!! \n \n");
		cevrehesap();
	}
	else{
	
	switch(sec){
		
		case 1:
			karecevre();
			break;
		case 2:
			dcevre();
			break;
		case 3:
			dairecevre();
			break;
		
	}
	}
	
	
}
int tahmin(){
	
	srand(time(NULL));
	int sayi =0;
	int tahmin,aralik1,aralik2;
	printf("Tahminini gir: ");
	scanf("%d",&tahmin);
	aralik1=rand()%101;
	aralik2= rand()%101;
	
	if(aralik1>aralik2){
		
	    for(int i=0;sayi=1;i++){
	    	
	    	if(tahmin<aralik1 && tahmin>aralik2){
			
			printf("Tahmininiz %d - %d aral���ndad�r.",aralik1,aralik2);
			sayi=1;
			break;
		}
		else{
			
			if(i<10){
			printf("Tahmininiz aral�kta de�il.\n Tekrar deneyin.");
			printf("Tahminini gir: ");
	        scanf("%d",&tahmin);
	        
			}
			else{
				printf("Cok fazla yanlis tahmin ettiniz.\nBir dahaki sefere :)");
				break;
				 
			
			}
			
		}
	    	
	}

}
	else{
	      
		  for(int i=0;sayi=1;i++){
		    if(tahmin>aralik1 && tahmin<aralik2){
			printf("Tahmininiz %d - %d aral���ndad�r.",aralik2,aralik1);
			sayi=1;
			break;
		}
		else{
			if(i<10){
			printf("Tahmininiz aral�kta de�il.\n Tekrar deneyin.");
			printf("Tahminini gir: ");
	        scanf("%d",&tahmin);
	        
			}
			else{
				printf("Cok fazla yanlis tahmin ettiniz.\nBir dahaki sefere :)");
				break;
				 
			
			}
		}
		  	
		  }
		  
		}
		
	}
int vf(){
	
	int vize[10],final[10],ort[10];
	 int i,j,ogrsayi;
	 
	 printf("Ogrenci sayisini giriniz: ");
	 scanf("%d",&ogrsayi);
	 
	 for(i=0;i<ogrsayi;i++){
	 	
	 	printf("%d . ogrencinin Vize notlar�n� giriniz: ",i+1);
	 	scanf("%d",&vize[i]);
	 	if(vize[i]>100 || vize[i]<0){
	 		
	 		printf("Hatal� not girdiniz! Tekrar deneyin.\n");
	 		vf();
		 }
		 
	 	
	 }
	 
	 for(i=0;i<ogrsayi;i++){
	 	
	 	printf("%d . ogrencinin Final notlar�n� giriniz: ",i+1);
	 	scanf("%d",&final[i]);
	 	if(final[i]>100 || final[i]<0){
	 		
	 		printf("Hatal� not girdiniz! Tekrar deneyin.\n");
	 		vf();
		 }
	 }
	 
	 for(j=0;j<ogrsayi;j++){
	 	
	 	 
		 printf("%d . �grencinin ortalamas� :",j+1);
		 ort[j]=((vize[j]*0.4) + (final[j]*0.6));
		 printf("%d",ort[j]);
		 printf("\n");
}

}
int main(){
	
	
	int secim;
	printf("Secmek istediginiz islemi belirtin.\n");
	printf("1.Hesap Makinesi\n 2.Alan Hesaplama\n 3.�evre Hesaplama\n 4.�ki Say� aras� tahmin\n 5.Vize-Final ortalama hesaplama  =");
	scanf("%d",&secim);
	if(secim<1 || secim>5){
		
		printf("!!! Lutfen gecerli bir secim yapin. !!! \n \n");
		main();
	}
	else{
		switch(secim){
		
		case 1: 
			hesapmakinesi();
			break;
		case 2:
			alanhesap();
		case 3:
			cevrehesap();
			break;
		case 4:
			tahmin();
			break;
		case 5:
			vf();
			break;
		
	}
	
	} 
	return 0;
}
