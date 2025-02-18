#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert binary to hexadecimal
void binaryToHex(char *binary) {
    int decimal = 0;
    int length = strlen(binary);
    
    // Convert binary to decimal
    for (int i = 0; i < length; i++) {
        if (binary[i] == '1') {
            decimal = decimal * 2 + 1;
        } else if (binary[i] == '0') {
            decimal = decimal * 2;
        } else {
            printf("Invalid binary input.\n");
            return;
        }
    }
    
    // Convert decimal to hexadecimal and print
    printf("Hexadecimal: %X\n", decimal);
}

int main() {
    char binary[65]; // Buffer for binary input
    
    printf("Enter a binary number: ");
    scanf("%64s", binary); // Read input as a string
    
    binaryToHex(binary);
    
    return 0;
}