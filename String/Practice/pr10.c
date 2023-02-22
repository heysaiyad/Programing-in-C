// Write a program to decrypt the encrypt the string encrypted using encrypt function in problem 9.

#include <stdio.h>
void encrypt(char *c){
    char *ptr = c;
    while (*ptr!= '\0')
    {
        *ptr = *ptr +1;
        ptr++;
    }
}
void decrypt(char *c){
    char *ptr = c;
    while (*ptr!= '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main(){
    char c[] = "come to this room";
    encrypt(c);
    printf("Encrypted string is: %s \n", c);

    decrypt(c);
    printf("Decrypted string is: %s", c);

    
    return 0;
}