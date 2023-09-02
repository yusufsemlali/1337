#include <stdlib.h>

int ft_str_length(char *str) {
    int index = 0;
    while (str[index]) {
        index++;
    }
    return index;
}

int total_count(char *str, char sep, int size) {
    int len = 0;
    int i = 0;
    while (i < size) {
        len += ft_str_length(str);
        i++;
    }
    if (sep != '\0') {
        len += (size - 1);
    }
    return len;
}

char *ft_strcpy(char *dest, char *src) {
    int i = 0;
    while (src[i]) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

char *ft_strjoin(int size, char **strs, char *sep) {
    int i;
    int ch_count;
    char *strings_cat;
    char *temp;

    if (size == 0) {
        strings_cat = (char *)malloc(1);
        if (!strings_cat) {
            return NULL;
        }
        strings_cat[0] = '\0';
        return strings_cat;
    }

    ch_count = total_count(*strs, *sep, size);
    strings_cat = (char *)malloc((ch_count + 1) * sizeof(char));
    if (!strings_cat) {
        return NULL;
    }

    temp = strings_cat;
    i = 0;
    while (i < size) {
        ft_strcpy(temp, strs[i]);
        temp += ft_str_length(strs[i]);
        if (i < size - 1) {
            ft_strcpy(temp, sep);
            temp += ft_str_length(sep);
        }
        i++;
    }
    *temp = '\0';
    return strings_cat;
}
