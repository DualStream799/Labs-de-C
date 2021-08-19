#include <stdio.h>
#define STRING_LEN 100

int is_palindrome(char str[]) {
    int len = 0;

    for (int i = 0; i < STRING_LEN; i++) {
        if (str[i] == '\0') {
            break;
        } else {
            len++;
        }
    }

    int left = 0;
    int right = len - 2;

    while (left <= right) {
        if (str[left] != str[right]) {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main() {
    char word[STRING_LEN];
    fgets(word, STRING_LEN, stdin);


    if (is_palindrome(word)) {
        printf("Is a palindrome\n");
    } else {
        printf("Is not a palindrome\n");
    };

    return 0;
}