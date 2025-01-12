#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
	int X = 3; 
    int dizi[] = {2, 3, 50,60, 10, 11, 29, 13, 15, 17}; 
    int boyut = sizeof(dizi) / sizeof(int);

    int mevcutDizi[boyut];
    int mevcutDiziUzunlugu = 0;
    int enUzunDizi[boyut];
    int enUzunDiziUzunlugu = 0;

    int i, j, k, l, m;

    for (i = 0; i < boyut; i++) {
        mevcutDiziUzunlugu = 0;
        mevcutDizi[0] = dizi[i];
        mevcutDiziUzunlugu++;
        for (j = i + 1; j < boyut; j++) {
            int ortakBolenSayisi = 0;

            for (k = 0; k <mevcutDiziUzunlugu ; k++) {
            	int kucuk ; 
                if (mevcutDizi[k] < dizi[j]){
				 	kucuk =mevcutDizi[k];
				} else { 
				kucuk =  dizi[j];
				}
                for (l = 2; l <= kucuk; l++) {
                    if (mevcutDizi[k] % l == 0 && dizi[j] % l == 0) {
                        ortakBolenSayisi++;
                        break;
                    }
                }
                if (ortakBolenSayisi != X) {
                break;
            }
            }

            if (ortakBolenSayisi != X) {
                break;
            }
            int n =mevcutDiziUzunlugu++;       
            mevcutDizi[n] = dizi[j];
            

            
			}
          
        if (mevcutDiziUzunlugu > enUzunDiziUzunlugu) {
            enUzunDiziUzunlugu = mevcutDiziUzunlugu;
            for (m = 0; m < mevcutDiziUzunlugu; m++) {
                enUzunDizi[m] = mevcutDizi[m];
            }
        }
           
    } 

        
    

    printf("En uzun dizi: ");
    for (i = 0; i < enUzunDiziUzunlugu; i++) {
        printf("%d ", enUzunDizi[i]);
    }
    printf("Dizi uzunlugu: %d\n", enUzunDiziUzunlugu);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
