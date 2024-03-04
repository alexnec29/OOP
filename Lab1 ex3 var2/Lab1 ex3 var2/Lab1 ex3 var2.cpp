#include <stdio.h>
#include <string.h>
char* p;
void sort_words(char* words[], int count)
{
    char* x;

    for (int i = 0; i < count; i++)
    {
        if (strlen(words[i]) < strlen(words[i + 1]))
        {
            x = words[i+1];
            words[i+1] = words[i];
            words[i] = x;
        }
    }
}
int main() {
    char* words[100];
    int i = 0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    const int MAX_LEN = 100;
    char ch;
    char s[MAX_LEN];
    char sentence[MAX_LEN];
    scanf("%c", &ch);
    scanf("%s", &s);
    scanf("%[^\n]%*c", &sentence);
    p = strtok(sentence, " ,.!?");
    while (p != NULL)
    {
        words[i] = p;
        i++;
        p = strtok(NULL, " ,.!?");
    }
    sort_words(words, i);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", sentence);

    return 0;
}