#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    int sudoku[9][9] = {};
    int satir, sutun, sayi, i, j, rastgeleSayilar;
    srand(time(NULL));


    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            sudoku[i][j] = 0;
        }
    }


    rastgeleSayilar=0;
    while(rastgeleSayilar < 30) {
    	
        satir = rand() % 9;
        sutun = rand() % 9;
        sayi = (rand() % 9) + 1;


        int tekrar = 0;
        for (i = 0; i < 9; i++) {
            if (sudoku[satir][i] == sayi || sudoku[i][sutun] == sayi) {
                tekrar = 1;
                break;
            }
        }

  
        int blokSatir = (satir / 3) * 3;
        int blokSutun = (sutun / 3) * 3;
        for (i = blokSatir; i < blokSatir + 3; i++) {
            for (j = blokSutun; j < blokSutun + 3; j++) {
                if (sudoku[i][j] == sayi) {
                    tekrar = 1;
                    break;
                }
            }
        }

        if (tekrar == 0 && sudoku[satir][sutun] == 0) {
            sudoku[satir][sutun] = sayi; 
            rastgeleSayilar++;
        }
    }

    int kullaniciHak = 5; 
    int bilgisayarHak = 5; 
    while (bilgisayarHak > 0 || kullaniciHak > 0) {
        printf("\nSudoku Matrisi:\n");
        for (i = 0; i < 9; i++) {
            for (j = 0; j < 9; j++) {
                if (sudoku[i][j] == 0)
                    printf(". ");
                else
                    printf("%d ", sudoku[i][j]);
            }
            printf("\n");
        }

        if (kullaniciHak > 0) {
            
            printf("\nBir satir girin 1-9 arasi: ");
			scanf("%d", &satir); 
			printf("Bir sutun girin 1-9 arasi : "); 
			scanf("%d", &sutun); 
			printf("Bir sayi girin 1-9 arasi : ");
			scanf("%d", &sayi);
   
            satir--; 
            sutun--;

           
            int tekrar = 0;
            for (i = 0; i < 9; i++) {
                if (sudoku[satir][i] == sayi || sudoku[i][sutun] == sayi) {
                    tekrar = 1;
                    break;
                }
            }

            int blokSatir = (satir / 3) * 3;
            int blokSutun = (sutun / 3) * 3;
            for (i = blokSatir; i < blokSatir + 3; i++) {
                for (j = blokSutun; j < blokSutun + 3; j++) {
                    if (sudoku[i][j] == sayi) {
                        tekrar = 1;
                        break;
                    }
                }
            }

            if (tekrar == 0 && sudoku[satir][sutun] == 0) {
                sudoku[satir][sutun] = sayi;
                printf("Basariyla eklendi!\n");
               
            } else {
                printf("Hatali giris yaptiniz! Bu tur sayiyi ekleyemediniz:(\n");
            }
            kullaniciHak--;
            printf("Kalan hakkiniz : %d " , kullaniciHak);

        }

        if (bilgisayarHak > 0) {
         
            while (1) {
                satir = rand() % 9;
                sutun = rand() % 9;
                sayi = (rand() % 9) + 1;

                int tekrar = 0;
                for (i = 0; i < 9; i++) {
                    if (sudoku[satir][i] == sayi || sudoku[i][sutun] == sayi) {
                        tekrar = 1;
                        break;
                    }
                }

                int blokSatir = (satir / 3) * 3;
                int blokSutun = (sutun / 3) * 3;
                for (i = blokSatir; i < blokSatir + 3; i++) {
                    for (j = blokSutun; j < blokSutun + 3; j++) {
                        if (sudoku[i][j] == sayi) {
                            tekrar = 1;
                            break;
                        }
                    }
                }

                if (tekrar == 0 && sudoku[satir][sutun] == 0) {
                    sudoku[satir][sutun] = sayi;
                    printf("\nBilgisayar bir sayi ekledi!\n");
                    break;
                }
            }
            bilgisayarHak--;
        }
    }

    printf("\nOYUN BITTI , MATRISINN SON HALI :\n");
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if (sudoku[i][j] == 0) {
                printf(". ");
            } else {
                printf("%d ", sudoku[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}
