#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main() {
    int N = 10; 
    int  bitDizi[5];
    int oncekiBitDizi[5] = { };

    srand(time(NULL)); 

    printf("Uretilen bit dizileri:\n");
    int i , j ,l ;
    int ondalik = 0;
    int a, b, c, d, e;

    for ( i = 0; i < N; i++) {
        int esitBitler=0;
       
        do {
      
            for ( j = 0; j < 5; j++) {
                bitDizi[j] = rand() % 2;
                if (bitDizi[j] == oncekiBitDizi[j]) {
                    esitBitler++;
                }
            }
        } while (esitBitler < 2); 

     
        printf("Sayi %d: ", i + 1);
        for ( j = 0; j < 5; j++) {
            printf("%d", bitDizi[j]);
        }
        printf("\n");
        
        for ( j = 4, l = 0; j >= 0; j--, l++) {
         if (j == 4) {
            a = (2 * 2 * 2 * 2) * bitDizi[l]; 
         } else if (j == 3) {
            b = (2 * 2 * 2) * bitDizi[l]; 
         }  else if (j == 2) {
            c = (2 * 2) * bitDizi[l]; 
         } else if (j == 1) {
            d = (2) * bitDizi[l]; 
         } else if (j == 0) {
            e = bitDizi[l];
         }
     }

    ondalik = a + b + c + d + e; 
    printf("Ondalik: %d\n", ondalik);
    
        for ( j = 0; j < 5; j++) {
            oncekiBitDizi[j] = bitDizi[j];
        }
    }

    return 0;
}
