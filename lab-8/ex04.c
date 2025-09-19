#include <stdio.h>
#include <string.h>

int count_vowel(char str[]){
    int count = 0;
    int i = 0;
    while (str[i] != '\0'){
        char c = str[i];

        if (c == 'a'|| c=='A' ||c=='e'||c=='E'||c=='i'||c=='o'||c=='O'||c=='u'||c=='U' ){
            count++;
        }
        i++;
    }
    return count;
}

int main(){
    char str[200];
    printf("Input: ");
    scanf("%[^\n]*c", str);
    printf("Output: Number of vowels: %d\n",count_vowel(str));
}