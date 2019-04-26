#include <stdio.h>
#include <string.h>

void caesar11 (char cipher11[256], int shift11 );      // Rotation Encrypt Cipher Function
void caesar12 (char cipher12[256], int shift12 );      // Rotation Decrypt Cipher Function


int long main () {         
    
    int ii;
    for (ii=0 ; ii=ii+1 ; ii++) {                      // Making Infinate loop to ask again when program end
    
    int x ;
    printf("\n Welcome from the world of1 Caesar Cipher \n");
    printf("\n  Enter a Number 1 - 4 : \n");           // Choosing Page
    printf("1 : Rotational Encrypt \n");
    printf("2 : Rotational Decrypt \n");
    printf("3 : Substituational Encrypt \n");
    printf("4 : Substituational Decrypt \n");
    printf("0 : Exit the Program");
    
    scanf("%d", &x);
    switch(x) {                                        // Using Switch case
    /*________________________________________________________________________*/
     case 1: {
     char cipher11[256];
     int shift11;
     
     printf(" Enter text you want to be encrypted ");
     scanf("%c",cipher11);                            // Store text from Keyboard Input for Encript Rotation Cipher
     fgets (cipher11 , 256 , stdin) ;                 
     
     printf ("enter shift between 1 to 10 (backward) =");
     scanf ("%d", &shift11) ;                         // Store Shift number for Encript Rotation Cipher
     
     caesar11 (cipher11, shift11);                    // Calling Function 1.1 (Encript Rotation Cipher)
     break;
     }
     break;
     
     
     /*_______________________________________________________________________*/
     
     
     case 2: {
     char cipher12[256];
     int shift12;
     
     printf(" Enter text you want to be decrypted ");  
     scanf("%c",cipher12);                            // Store text from Keyboard Input for Encript Rotation Cipher
     fgets (cipher12 , 256 , stdin) ;                        
     
     printf ("enter shift between 1 to 10 (forward) =");
     scanf ("%d", &shift12) ;                        // Store Shift number for Decript Rotation Cipher
     
     caesar12 (cipher12, shift12);                   // Calling Function 1.2 (Decript Rotation Cipher)
     }
     break;
     
     
     /*_______________________________________________________________________*/
     
     
     case 3: {
         char* ciphertext = "QWERTYUIOPASDFGHJKLZXCVBNM";    // Cipher Keyboard Encript Substitutional Text
         
         char cipher2[256];                                  // Sub Cipher space
         printf("Enter text: ");
         scanf("%c",cipher2);
         fgets(cipher2,256,stdin);                           // Store text from Keyboard Input for Encript Sub Cipher
         cipher2[strlen(cipher2) - 1] = 0;                   // remove the newline
         int count = strlen(cipher2);                        // the cipher string length
         
         char output[count];                                 // output
         int i;
         for(i = 0; i < count; i++) {                        // loop for characters input
             int index = ((int) cipher2[i]) - 65;            // The cipher index = 'A or the current character' - (65) the current character
             if(index < 0) {
             output[i] = ' ';                                // Display space if input has space key
              }
             else {
              output[i] = ciphertext[index];                 // output cipher index
             }
         }
          output[count] = 0;                                 // null-terminate the cipher string
     
     fputs(output, stdout);                                  // output the result
    
     }
     break;
     
     
     /*_______________________________________________________________________*/
     
     
     
     case 4 :{
       char* normaltext = "KXVMCNOPHQRSZYIJADLEGWBUFT";    // Cipher Keyboard Decript Substitutional Text (A to Z)
         
         char cipher2[256];                                // Sub Cipher space
         printf("Enter text: ");
         scanf("%c",cipher2);
         fgets(cipher2,256,stdin);                         // Store text from Keyboard Input for Decript Sub Cipher
         cipher2[strlen(cipher2) - 1] = 0;                 // remove the (newline)
         int count = strlen(cipher2);                      // the cipher string length
         
         char output[count];                               // output
         int i;
         for(i = 0; i < count; i++) {                      // loop for characters input
          int index = ((int) cipher2[i]) - 65;             // the cipher index = 'A or the current character' - (65) the current character
          if(index < 0) {
            output[i] = ' ';                               // Display space if input has space key
         }
          else {
            output[i] = normaltext[index];                 // output cipher index
          }
         }
           output[count] = 0;                              // null-terminate the cipher string
          
          fputs(output, stdout);                           // output the result
          
          }
          break;
          
     case 0: {                                            // Exit the Program
         printf (" \nThe program has ended "); 
         printf (" \n______Bye Bye _____");
         return 0;
     }
     
        
       }
    }
}

// Functions 

//case 1 function
void caesar11 (char cipher11[], int shift11 ) {                   // Encript Rotation Cipher 1.1
    int i =0 ;                                                    // counter
    
    while (cipher11[i] != '\0') {                                 // untill press Enter                  
        if (cipher11[i] >= 'a' && cipher11[i] <= 'z') {           // if input is in between a to z
            char new11 ; 
            new11 =(( cipher11[i] - 'a' +26 ) - shift11 ) %26 ;   //     (( input - 'a' + 26 )- shift) %26 = new11
            cipher11[i] = new11 + 'a';                            //     output = new11 + 'a'
        }
        else if (cipher11[i] >= 'A' && cipher11[i] <= 'Z') {      // if input is in between A to Z
            char new11 ;
            new11 =(( cipher11[i] - 'A' +26 ) - shift11 ) %26 ;   //     (( input - 'A' + 26 )- shift) %26 = new11
            cipher11[i] = new11 + 'A';                            //     output = new11 + 'A'
        }
        else if (cipher11[i] >= '0' && cipher11[i]<='9') {        // if input is number between 1 to 9
            char new11 ;
            new11 = ((cipher11[i] - '0' + 10) -shift11 ) %10 ;    // ((input - '0'+10 )- shift) %10 = new11
            cipher11[i] = new11 + '0' ;                           //      output = new11 + 0
        }
        i++ ;                                                     //   loop
    }
    fputs(cipher11 , stdout) ;                                    // Final Output
}
//case 2 function
void caesar12 (char cipher12[256], int shift12 ) {                   // Encript Rotation Cipher 1.2
    int i =0 ;                                                       // counter
    
    while (cipher12[i] != '\0') {                                    // untill press Enter 
        if (cipher12[i] >= 'a' && cipher12[i] <= 'z') {              // if input is in between a to z
            char new12 ;
            new12 =(( cipher12[i] - 'a' +26 ) + shift12 ) %26 ;      //     (( input - 'a' + 26 )- shift) %26 = new12
            cipher12[i] = new12 + 'a';                               //     output = new12 + 'a'
        }
        else if (cipher12[i] >= 'A' && cipher12[i] <= 'Z') {         // if input is in between A to Z
            char new12 ;
            new12 =(( cipher12[i] - 'A' +26 ) + shift12 ) %26 ;      //     (( input - 'A' + 26 )- shift) %26 = new12
            cipher12[i] = new12 + 'A';                               //     output = new12 + 'A'
        }
        else if (cipher12[i] >= '0' && cipher12[i]<='9') {           // if input is number between 1 to 9
            char new12 ;
            new12 = ((cipher12[i] - '0' + 10) + shift12 ) %10 ;      // ((input - '0'+10 )- shift) %10 = new12
            cipher12[i] = new12 + '0' ;                              //      output = new12 + 0
        }
        i++ ;                                                        //   loop
    }
	fputs(cipher12 , stdout) ;                                       // Final Output
}