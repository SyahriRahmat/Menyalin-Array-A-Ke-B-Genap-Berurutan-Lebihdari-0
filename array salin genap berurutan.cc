#include <conio.h>
#include <stdio.h>

int main (void)
{
    int a[6]={5,8,6,7,4,2};
    int b[6];
    int i=0, j=0;

    printf("Nilai Array Yang Akan Ditampilkan \n");
    for (i=5; i>0; i--)
    {
        b[i]=a[j];
        printf(" %d ", a[j]);
        j++;
    }
    printf("\n");
    printf("Nilai Array Yang Disalin Bilangan Genap dan Lebih Besar Dari Nol serta Berurutan \n");
    for (i=5; i>0; i--)
        if (b[i]%2==0 && b[i] > 0)
    {
        printf(" %d ", b[i]);
    }
    getch ();
    return 0;
}
