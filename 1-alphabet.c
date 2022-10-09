#include <stdio.h>
/**
* times_table - times_table
* Return: void
*/
void times_table(void){
    int i,j;
    for(i=0;i<=9;i++)
    {
        for(j=0;j<=9;j++)
        {
            if(j!=0){       
                printf(", ");
                if(i*j<10)
                {
                    printf(" ");
                }
            }
            printf("%d",i*j);
        }
        printf("$\n");
    }

}
