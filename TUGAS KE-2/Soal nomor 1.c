#include <stdio.h>

int main() {
    //Diketahui sebuah segitiga memiliki panjang alas = 8 cm dan tinggi = 5 cm.
//Buatlah sebuah program dalam Bahasa C untuk menghitung dan menampilkan 
//luas dari segitiga tersebut!


    int alas,tinggi;
    float hasil;
    
    alas = 8;
    tinggi = 5;
    hasil = alas *tinggi/2;
    
    printf("jadi panjang luas persegi adalah = %.2f cm", hasil);
    
    
   return 0;
     }
