#include<stdio.h>
#include<stdlib.h>


int sep_found(char c)
{
    return (c == ' ' || c == '\t' || c == '\n' || c == '\0') ? 0 : 1;
    printf(" hello");
}

int count_word_len(char *str)
{
    int i = 0;
    int count = 0;
    while (str[i])
    {
        while (str[i] && sep_found(str[i]) == 0)
            i++;
        if (str[i] != '\0')
            count++;
        while (str[i] && sep_found(str[i]) == 1)
        {
            i++;
        }
        i++;
    }
    return count;
}

void    *concat(char *word, int index)
{
    int i = 0;
    char *word_m;
    word_m = (char *)malloc(sizeof(char ) * index + 1);
    while(word[i])
    {
        word_m[i] = word[i];
        i++;
    }
    word_m[i] = '\0';
    return (word_m);

}

char **ft_split(char *str)
{
    int i = 0;
    char **output;
    int w;
    char word[200];
    int size = count_word_len(str);
    printf("%d \n ", size);
    if (!(output = (char **)malloc(sizeof(char *) * (size + 1))))
        return (0);
    int output_index = 0;
    while (str[i])
    {
        while (str[i] && sep_found(str[i]) == 0)
            i++;
        if (!str[i])
            break;
        w = 0;
        while (str[i] && sep_found(str[i]) == 1)
        {
            word[w++] = str[i];
            i++;
        }
        word[w] = '\0';
        output[output_index++] = concat(word, w);
    }
    output[output_index] = NULL; // Null-terminate the array
    return (output);
}


int main(void)
{
    char str[] = "\n ";
    char **result = ft_split(str);
    int i = 0;
    while (result[i])
    {
        printf("%s\n", result[i]);
        free(result[i]); // Free each dynamically allocated word
        i++;
    }
    free(result); // Free the array of pointers
}