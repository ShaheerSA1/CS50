#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Setting all variables as integers
    int height, row, column, space;

    // Prompting user for the height of the bricks, where the height must be between 1 and 8
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // Adding 1 to the row if the row is less than the height
    for (row = 0; row < height; row++)

    {
        // Adding 1 to the space, the number of spaces before the bricks is equal to the height - row - 1
        for (space = 0; space < height - row - 1; space++)
        // Printing the spaces before the left side of the bricks
        {
            printf(" ");
        }

        // If the column is less than the row then add 1 to the column
        for (column = 0; column <= row; column++)

        // Printing the left side of the bricks
        {
            printf("#");
        }

        // Printing the spaces between the bricks
        printf("  ");
        for (column = 0; column <= row; column++)

        // Printing the right side of the bricks
        {
            printf("#");
        }
        printf("\n");
    }
}
