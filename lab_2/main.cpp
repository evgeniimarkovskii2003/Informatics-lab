#include <cstdio>

#define DIMENSION 256

int main() {
    int i = 0;
    char c;
    int count = 0;
    int num = 0;
    char str[DIMENSION];
    char words[DIMENSION][DIMENSION];

    printf("string: ");
    scanf("%[^\n]%*c", str);
    scanf("%c", &c);

    for (i = 0; i < DIMENSION; i++) {
        if ((!(str[i] >= 'A' && str[i] <= 'Z')) && !(str[i] >= 'a' && str[i] <= 'z')) {
            if (num != 0) {
                words[count][num] = '\0';
                count++;
                if (str[i] == '\0')
                    break;
                num = 0;
            }
        } else {
            words[count][num] = str[i];
            num++;
        }
    }
    for (i = 0; i < count; i++) {
        int j = 0;
        while (words[i][j] != 0) {
            j++;
        }
        if (words[i][j] == 0) {
            if (words[i][j - 1] == c)
                printf("%s\n", words[i]);
        }
    }
    return 0;
}