#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    int a,b,c,d,i ; 
    int Dsayisi = 0 ;
    int top = 0;
    int topSayi = 0 ; 
	for(a=1 ; a<=9 ; a++ ){
   	    for(b=0 ; b<=9 ; b++){
    		if(a==b){
    			continue;  
			}
			
			for(c=0 ; c <=9 ; c++){
				if(c==a | c ==b){
					continue;
				}
				for(d=0;d<=9;d++){
					if(d==a | d==b | d==c ){
					continue; 
					}
					
					int ABCA = a*1000 + b *100 + c*10 +a ; 
					int AB = a*10 +b;
					
					for(i=2 ; i<=AB; i++){
						if(ABCA%i==0 && AB%i==0){
							break;
						}
					}
					
					int sonuc = ABCA*AB;
					
				    int D = sonuc%10 ; 
				    if(D!=d){
				    	continue;
					}
				    Dsayisi = 0;
					while(sonuc>0){
						if(sonuc%10==D){
							Dsayisi++;
						}
						sonuc=sonuc/10;
						
					}
					 sonuc = ABCA*AB;
					if(Dsayisi>=3){
					 
				      printf("%d. sayi: ABCA: %d  AB: %d  Sonuc: %d\n", topSayi, ABCA, AB, sonuc);
                      top = top + sonuc ; 
                       topSayi++ ; 	 
					}
					 
					
					
					
					
					
					
					
				}
			}
		} 
	} 
    
    printf("Toplamda %d sayi bulundu.\n", topSayi);
    printf("Sonuclarin toplami: %d\n", top);
    

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
	return 0;
}
