// main.c
#include <stdio.h>
#include <stdlib.h>
#include "identity.h"
#include "encryption.h"
#include "icp_integration.h"

int main() {
    printf("Welcome to Decentralized Identity Management System (DIMS)\n");

    // Create a new identity
    Identity *my_identity = create_identity("user123");
    save_identity(my_identity);
    // Encrypt some data
    unsigned char plaintext[] = "Sensitive Data";
    unsigned char key[] = "secret_key";
    unsigned char ciphertext[128];
    encrypt_data(plaintext, key, ciphertext);

    // Store identity on ICP
    connect_to_icp();
    store_identity_on_icp(my_identity->username, my_identity->public_key);

    // Verify identity on ICP
    verify_identity_on_icp(my_identity->username);

    return 0;
}
