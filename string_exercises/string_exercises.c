#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>

int stringLength(const char str[]);

char *reverseString(const char str[])
{
    int len = stringLength(str);
    char *reversed = malloc(sizeof(char) * len + 1);
    int index = 0;
    while (index < (len / 2) + 1)
    {
        *(reversed + index) = str[len - index - 1];
        *(reversed + (len - index - 1)) = str[index];
        index++;
    }
    *(reversed + len) = '\0';
    return reversed;
}

void bubbleSort(char *strings[], size_t arrayLength)
{
    _Bool switched = true;
    while (switched)
    {
        switched = false;
        for (int i = 0; i < arrayLength - 1; i++)
            if (strcmp(strings[i], strings[i + 1]) > 0)
            {
                char *temp = strings[i];
                strings[i] = strings[i + 1];
                strings[i + 1] = temp;
                switched = true;
            }
    }
}

int stringLength(const char str[])
{
    int count = 0;
    int charIndex = 0;
    while (str[charIndex++] != '\0')
        count++;
    return count;
}

void concatStrings(char result[], const char str1[], const char str2[])
{
    int str1Len = stringLength(str1);
    int str2Len = stringLength(str2);
    int resultLength = str1Len + str2Len;
    int i = 0;
    for (i = 0; i < str1Len; i++)
        result[i] = str1[i];
    for (; i < resultLength; i++)
        result[i] = str2[i - str1Len];
    result[resultLength] = '\0';
}

_Bool areEqual(const char str1[], const char str2[])
{
    int i = 0, j = 0;
    while (str1[i] != '\0' || str2[j] != '\0')
    {
        if (str1[i++] != str2[j++])
            return 0;
    }
    return 1;
}

int main()
{
    char *strs[] = {"unix", "windows", "apple", "microsoft", "google", "awk", "c++"};
    bubbleSort(strs, sizeof(strs) / sizeof(strs[0]));
    char str[] = "test string";
    char str1[] = "asdFG";
    char *reverse = reverseString(str1);
    printf("%s reversed is %s \n", str1, reverse);
    free(reverse);
    char str2[] = "asdfg";
    char str3[stringLength(str1) + stringLength(str2)];
    concatStrings(str3, str1, str2);
    printf("%s concat with %s is eq to %s\n", str1, str2, str3);
    printf("%s is equal to %s => %d\n", str1, str2, areEqual(str1, str2));
    printf("the length of \"%s\" is %i characters\n", str, stringLength(str));
    return 0;
}