#include <stdio.h> 
  
int main() 
{ 
    int integerType; 
    char charType; 
    float floatType; 
    long int longintegerType;
    long long int longlongintegerType; 
  
    // Calculate and Print 
    // the size of char type 
    printf("Size of a char: %ld byte(s)\n", 
           sizeof(charType)); 
  
    // Calculate and Print 
    // the size of integer Type 
    printf("Size of an int: %ld byte(s)\n", 
           sizeof(integerType)); 

    // Calculate and Print 
    // the size of long integer Type 
    printf("Size of a long int: %ld byte(s)\n", 
           sizeof(longintegerType));

    // Calculate and Print 
    // the size of long integer Type 
    printf("Size of a long long int: %ld byte(s)\n", 
           sizeof(longlongintegerType));

    // Calculate and Print 
    // the size of floatType 
    printf("Size of a float: %ld byte(s)\n", 
           sizeof(floatType));
  
    return 0; 
} 
