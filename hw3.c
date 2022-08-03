#include <stdio.h>

int main(){
    int count = 0;
    char *word;
    printf("Input: ");
    gets(word);

    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] != ' ')
        {
            count++;
        }
    }
    printf("Length: %d", count);
} //6410406649 ธัญรดา สอนนาคงเจริญ