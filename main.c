#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2, sum;

    FILE *t_openw, *t_openr;

    /*t_openw = fopen("C:/Users/MORI/OneDrive/Documents/Coding/Console/C/read data from a text file/data.txt", "w");
    if (t_openw == NULL)
    {
        printf("Text file cannot be opened for writing!");
        exit(0);
    }else
    {
        fprintf(t_openw, "This is your text file\n");
    }

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("\nEnter another number: ");
    scanf("%d", &num2);

    sum = num1+num2;
    printf("%d + %d = %d\n", num1, num2, sum);
    fprintf(t_openw, "%d + %d = %d", num1, num2, sum);
    fclose(t_openw);

    t_openr = fopen("C:/Users/MORI/OneDrive/Documents/Coding/Console/C/read data from a text file/data.txt", "r");*/
    t_openr = fopen("C:/Users/MORI/OneDrive/Documents/Coding/Console/C/read data from a text file/data.txt", "r");
    if (t_openr == NULL)
    {
        printf("Text file could not be opened for reading!");
        exit(1);
    }
    fscanf(t_openr, "%d", &num1);
    //fscanf(t_openr, "%d", &num2);
    //fscanf(t_openr, "%d", &sum);

    printf("Enter a number: ");
    scanf("%d", &num1);

    printf("\nData from file: %d\n", num1);
    fclose(t_openr);

    /*printf("\nData from the text file: \n");
    fclose(t_openr);*/

    return 0;
}
