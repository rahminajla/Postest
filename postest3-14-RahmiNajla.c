#include<stdio.h>
int main(){

    int panjang, lebar, i, j;
    int a = 0;

    printf("Masukkan panjang: ");
    scanf("%d", &panjang);

    printf("Masukkan lebar: ");
    scanf("%d", &lebar);

    for (int i = 0; i < panjang; i++)
    {
        for (int j = 0; j < lebar; j++)
        {
          
          a++;

            printf("%c ", a+96);
        }
        
        printf("\n");
    }
    
    return 0;
}