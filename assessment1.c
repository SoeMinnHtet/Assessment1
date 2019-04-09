#include <stdio.h>
#include <math.h> 
#include <stdlib.h>
#include <string.h>

// Functions
void Cypher (char* plainText, int k);


int main(void) {
    int k = 1;      // Key
    char plainText[101] ;    
    printf (" Enter Text that you want to encrypt : ");
    fgets(plainText, sizeof(plainText),stdin);
    
    
    printf ("The cypher text is :");
    // insert the function here
    Cypher (plainText, k);
    
    
 
}
// Function Expression
void Cypher (char* plainText2, int k1) {
    int i = 0 ;
    int cypherValue ;
    char cypher;
    
    while (plainText2[i] != '\0' && strlen(plainText2)-1 > i) {
        cypherValue = ((int)plainText2[i] -97 + k1)%26 + 97 ;
        cypher = (char)(cypherValue);
        
        printf ("%c" , cypher);
        i++;
        
    }
    printf ("\n");
}