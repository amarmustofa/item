#include <stdio.h>
#include <stdlib.h>


int main()
{
    int stat;
    char item[100], item_sebelum[100];
    int item_hebat[100], item_lemah[100];
    char pindah = 'y';
    bool item_pertama = true;


    while(pindah == 'y'){
        printf("Masukkan nama item : ");
        scanf("%s",&item);
        printf("Masukkan stat : ");
        scanf("%s",&stat);

        printf("Item anda : %s",item);
        printf("\nStat : %s",stat);

        item_sebelum = item;
        if(item_pertama)item_sebelum="Nothing";
        item_pertama=false;


        for(i=0; i<100; i++){
            if(i==0){
                printf("Item sebelum");
            }
        }
        printf("\nInput item lagi? (y/n)")
        scanf("%s",&pindah);
    }
    return 0;
}
