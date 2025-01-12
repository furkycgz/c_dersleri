#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
 
    int i, j,k,l, REACTSayisi = 0;
    char matrix[7][7];
    
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            matrix[i][j] = '-'; 
        }
    }

    srand(time(NULL)); 


    int eksen = 0;
     while (1) {
        int girdi = 0;
	
       
        int x, y;

        if (eksen == 0) {
            x = rand() % 3; 
            y = rand() % 3; 

            if (matrix[x][y] == '-' && matrix[x + 1][y + 1] == '-' && matrix[x + 2][y + 2] == '-' && matrix[x + 3][y + 3] == '-' && matrix[x + 4][y + 4] == '-') {
                matrix[x][y] = 'R';
                matrix[x+1][y+1] = 'E';
                matrix[x+2][y+2] = 'A';
                matrix[x+3][y+ 3] = 'C';
                matrix[x+4][y+4] = 'T';
                REACTSayisi++;
                girdi = 1;
                eksen=1;
            }
            if( girdi == 1){
			
             printf("Sol yukari-sag asagi dogru yerlestirildi:\n");
                        for (k = 0; k < 7; k++) {
                            for ( l = 0; l < 7; l++) {
                                printf("%c ", matrix[k][l]);
                            }
                            printf("\n");
                        }
                        printf("\n");
             }
        } else { 
            x = rand() % 7; 
            if(x >= 2){
            	x=x-2;
			}
            y = 2 + rand() % 5;

            if (matrix[x][y] == '-' && matrix[x + 1][y] == '-' && matrix[x + 2][y] == '-' && matrix[x +2][y - 1] == '-' && matrix[x + 2][y - 2] == '-') {
                matrix[x][y] = 'R';
                matrix[x +1][y] = 'E';
                matrix[x + 2][y] = 'A';
                matrix[x + 2][y-1] = 'C';
                matrix[x + 2][y-2] = 'T';
                REACTSayisi++;
                girdi = 1;
                eksen=0;
            }
            if( girdi == 1){
             printf("Asagi-Sola dogru yerlestirildi:\n");
                        for ( k = 0; k < 7; k++) {
                            for (l = 0; l < 7; l++) {
                                printf("%c ", matrix[k][l]);
                            }
                            printf("\n");
                        }
                        printf("\n");
           }
        }
        int kalanBosAlan=0;
         for (i = 0; i < 7; i++) {
            for (j = 0; j < 7; j++) {
                if (matrix[i][j] == '-') {
                    kalanBosAlan++;
                }
            }
        }

        
        if (kalanBosAlan <= 24) {
            break;
        }

        
    
       
    }
    

    
    printf("matrix:\n\n");
    for (i = 0; i < 7; i++) {
        for (j = 0; j < 7; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }


    printf("\n Matrix içerisinde bulunan ""REACT"" kelimesi sayýsý: %d\n", REACTSayisi);

    return 0;
}


