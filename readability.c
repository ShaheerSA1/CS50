#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Prompts user for a text
    string text = get_string("Text: ");
    // Setting these as integer values
    int letters = 0;
    int words = 1;
    int sentences = 0;
    // i increases for every word in the text
    for (int i = 0; i < strlen(text); i++)
    {
        // Function that identifies letters either upper or lower case and adds one to the letters variable
        if (isalpha(text[i]))
        {
            letters++;
        }
        // Identifies spaces thereby identifying the number of words
        else if (text[i] == ' ')
        {
            words++;
        }
        // Identifies punctuation which identifies the number of sentences
        else if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
    }
    // Calculating L and S which are the number of letters/sentences per 100 words
    float L = (float) letters / (float) words * 100;
    float S = (float) sentences / (float) words * 100;

    // Calculating the grade level
    int index = round(0.0588 * L - 0.296 * S - 15.8);

    if (index < 1)
    {
        printf("Before Grade 1\n");
    }

    else if (index > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", index);
    }
}