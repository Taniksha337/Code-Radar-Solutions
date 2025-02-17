#include <stdio.h>

int main() {
    char ch;
    
    // Reading input and ensuring no extra newline is captured
    scanf("%c", &ch);  // Takes the first non-whitespace character
    
    // Printing the character
    printf("%c\n", ch);
    
    return 0;
}
