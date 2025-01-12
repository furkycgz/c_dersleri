#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
    
    int Ax = 300, Ay = 200;
    int Bx = 10, By = 10;
    int Cx = 20, Cy = 240;
    int Dx = 100, Dy = 15;
    int Ex = 150, Ey = 250 ; 
    
    double ab = sqrt(pow(Ax - Bx, 2) + pow(Ay - By, 2));
    double ac = sqrt(pow(Ax - Cx, 2) + pow(Ay - Cy, 2));
    double ad = sqrt(pow(Ax - Dx, 2) + pow(Ay - Dy, 2));
    double ae = sqrt(pow(Ax - Ex, 2) + pow(Ay - Ey, 2));
    double bc = sqrt(pow(Bx - Cx, 2) + pow(By - Cy, 2));
    double bd = sqrt(pow(Bx - Dx, 2) + pow(By - Dy, 2));
    double be = sqrt(pow(Bx - Ex, 2) + pow(By - Ey, 2));
    double cd = sqrt(pow(Cx - Dx, 2) + pow(Cy - Dy, 2));
    double ce = sqrt(pow(Cx - Ex, 2) + pow(Cy - Ey, 2));
    double de = sqrt(pow(Dx - Ex, 2) + pow(Dy - Ey, 2)); 
     
    double yol1 = ab + bc + cd + de + ae; // A-B-C-D-E-A
    double yol2 = ab + bc + ce + de + ad; // A-B-C-E-D-A
    double yol3 = ac + bc + bd + de + ae; // A-C-B-D-E-A
    double yol4 = ac + bc + be + de + ad; // A-C-B-E-D-A
    double yol5 = ab + bd + de + ce + ac; // A-B-D-E-C-A
    double yol6 = ab + be + de + cd + ac; // A-B-E-D-C-A
    double yol7 = ac + cd + de + be + ab; // A-C-D-E-B-A
    double yol8 = ac + ce + de + bd + ab; // A-C-E-D-B-A
    double yol9 = ad + de + be + bc + ac; // A-D-E-B-C-A
    double yol10 = ad + de + ce + bc + ab; // A-D-E-C-B-A
    double yol11 = ae + de + bd + bc + ac; // A-E-D-B-C-A
    double yol12 = ae + de + cd + bc + ab;// A-E-D-C-B-A
    
    
    
      // En kýsa yolu bulmak için if else yapýsý kullan
    double enkisayol = yol1;
        char* yol = "ABCDEA";
    if (yol2 < enkisayol) {
        enkisayol = yol2;
           yol="ABCEDA";
    }
    if (yol3 < enkisayol) {
        enkisayol = yol3;
       yol="ACBDEA";
    }
    if (yol4 < enkisayol) {
        enkisayol = yol4;
        yol="ACBEDA";
    }
    if (yol5 < enkisayol) {
        enkisayol = yol5;
         yol="ABDECA";
    }
    if (yol6 < enkisayol) {
        enkisayol = yol6;
        yol="ABEDCA";
    }
    if (yol7 < enkisayol) {
        enkisayol = yol7;
        yol="ACDEBA";
    }
    if (yol8 < enkisayol) {
        enkisayol = yol8;
        yol="ACEDBA";
    }
    if (yol9 < enkisayol) {
        enkisayol = yol9;
         yol="ADEBCA";
    }
    if (yol10 < enkisayol) {
        enkisayol = yol10;
         yol="ADECBA";
    }
    if (yol11 < enkisayol) {
        enkisayol = yol11;
       yol="AEDBCA";
    }
    if (yol12 < enkisayol) {
        enkisayol = yol12;
         yol="AEDCBA";
    }
 
    
    printf("En kisa mesafe: %.2f\n", enkisayol);
     printf("En kisa yol: %s\n", yol);

    
    
    
    
    







	return 0;
}
