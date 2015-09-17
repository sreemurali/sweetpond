/**
 * The key server which hosts any public keys. The keys are encrypted with a private key
 * before being shared. The private keys are not shared in a fly but on a requirement basis.
 */
#include <stdio.h>

int main(char* argv[], int c) {
     char* cmd = argv[0];
     if (cmd == "open") {
         printf("Opening the store.\n");
     }
     return 0;
}
