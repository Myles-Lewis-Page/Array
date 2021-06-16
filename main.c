/*
 * File:   Program_6
 * Author: Myles Page
 * Class: CS1120
 * Homework #6
 * Created on November 14, 2018, 1:48 PM
 * Sorts your bottle caps by color and brand
 */

 //FWI it looks better if you use single didgit numbers it works with all numbers just looks better 

#include <stdio.h>
int main() {
    int number = 1;
    int select_brand;
    int find_brand;
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Hello, This program will sort your bottle caps by brand and color!\n\n");

    printf("Enter number of bottle caps(between 1 and 100): ");
    scanf("%d", &r);
    c = 5;

    printf("\nenter number of caps by color in R G B order:\n");

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            printf("Enter Amount a Row %d  Column %d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // Displaying the result
    printf("\nArray of caps: \n\n");

    printf(" Green       Yellow       Blue       Orange       Red     Brand #\n");

    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j)
        {

            printf("   %d        ", sum[i][j]);

            if (j == c - 1)
            {
                printf("%d        ", number);
                number++;
                printf("\n\n");
            }
        }

    //Find out how many caps of a select brand you have
    printf("\n");
    printf("\n would you like to know how many bottle caps you have for a select brand:");
    printf("\n select 1 for yes 2 for no");
    scanf("%d", &find_brand);

    // select if you want to know the amount
    if (find_brand == 1)
    {
        printf("\n What brand do you want to get information about:");
        scanf("%d", &select_brand);
        printf("\n You selected brand %d", select_brand);
        printf(" it has \n");
        printf(" Green       Yellow       Blue       Orange       Red     \n");

        //checks if selected a valid brand
        select_brand--;
        if (r > select_brand)
        {
            i = select_brand;
            for (j = 0; j < c; ++j)
            {

                printf("   %d        ", sum[i][j]);


                if (j == c - 1)
                {
                    printf("\n\n");
                }
            }
        }
        else
        {
            printf("not a valid brand \n");
            printf("Good By");
        }

    }

    else if (find_brand == 2)
    {
        printf("\n Good bye");
    }
    else
    {
        printf("\n error 404");
    }


    return 0;
}
