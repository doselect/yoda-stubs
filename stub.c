// C program to read an integer from STDIN and output it to STDOUT
#include <stdio.h>

int main()
{
    // Declare the variable
    int a;
    
    // Read the variable from STDIN
    scanf("%d", &a);
    
    // Output the variable to STDOUT
    printf("%d", a);
    
    // Note that you need to explicitly return 0 in main() function,
    // otherwise your solution won't get accepted
    return 0;
}
