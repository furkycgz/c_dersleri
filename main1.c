#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    double sayi = 22122.9003;
    int tam = sayi; 
    double ondalik = sayi - tam; 
    printf("Ondalik: %.4f\n", ondalik);
	
	int moduler = ondalik*10000;
    printf("Ondalik: %d\n",moduler);
    int z=0 ;
    while (moduler > 0) {
        z += moduler % 10;
		moduler = moduler/10;
		 
    }
    printf("z = %d\n",z);
    int x,y ;
    double sonuc ; 
    
   
    for(x=1 ; x <=4 ; x++){
    	y=0;
    	sonuc=((x*x*x) - 0.1*(y*y) - (2*z))/5 ;
    	printf( " %d degeri icin : %.2f\n",x,sonuc);  
	}
	printf("x=4 oldugunda elde edilen sonuc araligindan cok uzaklasildigindan x=3 olarak alinacaktir.\n");
	
	
	for(y=1;  y <= 50 ; y++){
		x=3 ; 
		sonuc=((x*x*x) - 0.1*(y*y) - (2*z))/5 ;
		printf( " %d degeri icin : %.2f\n",y,sonuc);
	    if(0.01<=sonuc &&  sonuc<=0.25){
	    	break;
		}
	
	}
	printf("pozitif y degerleri icin verilen denklem saglanamadi ");
	printf("x=4 , y=18 icin verilen araliga en yakýn halidir . ");
	
	
	
	
	
    
    
    
    
	
	
	return 0;
}
