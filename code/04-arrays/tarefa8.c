#include <stdio.h>
#define STRING_LEN 200

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
    char string_in[STRING_LEN];
    char string_out[STRING_LEN];

    fgets(string_in, STRING_LEN, stdin);


    for (int i = 0; i < STRING_LEN; i++) {
        if (string_in[i] == '\0') {
            break;
        } else 
        
        if (string_in[i] >= 97 && string_in[i] < 126) {
            string_out[i] = string_in[i] - 32;
        } else {
            string_out[i] = string_in[i];
        }
    }
    
    printf("%s\n", string_out);

    return 0;
}