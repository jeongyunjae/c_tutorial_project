#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    char *word;
    int length;
    bool isPalindrome = true;
    word = (char*)malloc(sizeof(char)*100);

    printf("단어를 입력하세요: ");
    scanf("%s", word);

    length = strlen(word);


    for (int i = 0; i < length / 2; i++)
    {

        if (word[i] != word[length - 1 - i])
        {

            isPalindrome = false;
            break;
        }
    }

    if(isPalindrome==1)
    printf("회문입니다.");
    else
    printf("회문이아닙니다.");

    return 0;
}

