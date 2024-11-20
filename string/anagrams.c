#include <stdio.h>
#include <string.h>
int main()
{
    char a[1000], b[1000];
    int c[26] = {0}, d[26] = {0};
    int i, j = 0, len1, len2;
    printf("Enter a string:");
    scanf("%s", a);
    printf("Enter a string:");
    scanf("%s", b);
    len1 = strlen(a);
    len2 = strlen(b);
    if (len1 == len2)
    {
        for (i = 0; i < len1; i++)
        {
            c[a[i] - 'a']++;
        }
        for (i = 0; i < len2; i++)
        {
            d[b[i] - 'a']++;
        }
        for (i = 0; i < 26; i++)
        {
            if (c[i] != d[i])
                j++;
        }
        if (j != 0)
            printf("%s and %s are not anagrams", a, b);
        else
            printf("%s and %s are anagrams", a, b);
    }
    else
        printf("%s and %s are not anagrams", a, b);
        
    return 0;
}
/*#include <stdio.h>
#include <string.h>

#define NO_OF_CHARS 256

int areAnagram(char* str1, char* str2)
{
    int count[NO_OF_CHARS] = {0};
    int i;

    for (i = 0; str1[i] && str2[i]; i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    if (str1[i] || str2[i])
        return 0;

    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return 0;

    return 1;
}

int main()
{
    char str1[NO_OF_CHARS];
    char str2[NO_OF_CHARS];

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    if (areAnagram(str1, str2))
        printf("The two strings are anagram of each other\n");
    else
        printf("The two strings are not anagram of each other\n");

    return 0;
}*/