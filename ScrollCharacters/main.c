#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void CharacterScroll(char* , int);

int main()
{
    char characters[50];
    printf("enter the sentence: ");
    gets(characters);
    int size = strlen(characters);
    CharacterScroll(characters,size);
    return 0;
}
void CharacterScroll(char* character , int size){
    int i,j;
    for(i=0; i<size+1; i++){
        for(j=i; j<size; j++){
            printf("%c" ,*(character+j));
        }
         for(j=0; j<i; j++){
            printf("%c" ,*(character+j));
        }
        printf("\n");
    }
}
