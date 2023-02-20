//
// Created by Chanvo on 2022/12/19.
//

#include "stdio.h"
#include "string.h"

const unsigned char NumberTable[] = {0x3f, 0x06, 0x5b, 0x4f, 0x66, 0x6d, 0x7d, 0x07, 0x7f, 0x6f};

char *toBinary(unsigned char dec) {
    int r;
    r = dec % 2;
    if (dec >= 2)
        toBinary(dec / 2);
    
}

void showNumber(unsigned char loc, unsigned char num) {
    char binary[4];
    memset(binary, '0', 3);
    sprintf(binary, "%b", loc);
//    for (int i = 2; i > 0; i--) {
//        if (binary[i] == '\0') {
//            binary[i] = '0';
//        } else
//            break;
//    }
    printf("%d", binary[0] - 48);
    printf("%d", binary[1] - 48);
    printf("%d", binary[2] - 48);
    printf("%x", NumberTable[num]);
}

int main() {
//    char ans[4];
//    unsigned char loc = 0;
//    itoa(loc, ans, 2);
//    printf("%d", ans[0]);
//    int x='0'-0;
//    printf("%d",x);
    showNumber(1, 2);
    return 0;
}