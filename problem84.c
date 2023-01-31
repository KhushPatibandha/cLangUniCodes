#include<stdio.h>
void main()
{
    FILE *filepointer;

    filepointer = fopen("hi.txt", "w");
    fprintf(filepointer, "%s %s %s %s", "We", "are", "in", "2023");

    fclose(filepointer);
    printf("Opeartion successfull !");
}