#include <stdlib.h>

char **strtow(char *str)
{
    if (str == NULL || *str == '\0')
        return (NULL);

    int num_words = 0;
    int in_word = 0;
    char *ptr = str;

    while (*ptr)
    {
        if (*ptr == ' ')
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            num_words++;
        }
        ptr++;
    }

    char **words = (char **)malloc(sizeof(char *) * (num_words + 1));
    if (words == NULL)
        return (NULL);

    int word_len = 0;
    int word_idx = 0;
    in_word = 0;

    while (*str)
    {
        if (*str == ' ')
        {
            if (in_word)
            {
                words[word_idx] = (char *)malloc(sizeof(char) * (word_len + 1));
                if (words[word_idx] == NULL)
                {
                    for (int i = 0; i < word_idx; i++)
                        free(words[i]);
                    free(words);
                    return (NULL);
                }
                word_len = 0;
                word_idx++;
            }
            in_word = 0;
        }
        else
        {
            if (!in_word)
                in_word = 1;
            word_len++;
        }
        str++;
    }

    if (in_word)
    {
        words[word_idx] = (char *)malloc(sizeof(char) * (word_len + 1));
        if (words[word_idx] == NULL)
        {
            for (int i = 0; i < word_idx; i++)
                free(words[i]);
            free(words);
            return (NULL);
        }
        word_idx++;
    }

    words[word_idx] = NULL;

    word_idx = 0;
    in_word = 0;
    ptr = str;

    while (*ptr)
    {
        if (*ptr == ' ')
        {
            if (in_word)
            {
                words[word_idx][word_len] = '\0';
                word_len = 0;
                word_idx++;
            }
            in_word = 0;
        }
        else
        {
            if (!in_word)
                in_word = 1;
            words[word_idx][word_len] = *ptr;
            word_len++;
        }
        ptr++;
    }

    if (in_word)
    {
        words[word_idx][word_len] = '\0';
    }

    return (words);
}

