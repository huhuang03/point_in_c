#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "test.h"

#define MAX_COLS 20
#define MAX_INPUT 1000

int read_column_numbers(int[], int);
void rearrange(char *output, const char*, int n_columns, const int[]);

int main(void) 
{
    int n_columns;              /* 列表号长度 */
    int columns[MAX_COLS];      /* 列数 */
    char input[MAX_INPUT];      /* 输入行 */
    char output[MAX_INPUT];     /* 输出行 */

    n_columns = read_column_numbers(columns, MAX_COLS);

    while( gets( input ) != NULL) 
    {
        printf("Original input: %s\n", input);
        rearrange(output, input, n_columns, columns);
        printf("Rearragned line: %s\n", output);
    }

    return EXIT_SUCCESS;
}


int read_column_numbers(int columns[], int max)
{
    int num = 0;
    int ch;
    while(num < max && scanf("%d", &columns[num]) == 1
            && columns[num] > 0)
    {
        num += 1;
    }

    if ((num % 2) != 0)
    {
        columns[num] = -1;
        num ++;
    }

    while ((ch = getchar()) != EOF && ch != '\n')
        ;

    return num;
}

void rearrange(char *output, char const *input, int n_columns, int const columns[])
{
    int col;
    int output_col;
    int len;

    len = strlen(input);
    output_col = 0;

    for (col = 0; col < n_columns; col += 2)
    {
        int nchars = columns[col + 1] - columns[col] + 1;
        if (columns[col + 1] == 0)
        {
            nchars = len - columns[col] - 1;
        }

        if (column[col] >= len)
            continue;

        if (output_col == MAX_INPUT - 1)
            break;

        if (output_col + nchars > MAX_INPUT - 1) 
        {
            nchars = MAX_INPUT - 1 - output_col;
        }

        strncpy(output + output_col, input + columns[col], nchars);
        output_col += nchars;
    }
    output[output_col] = '\0';
}
