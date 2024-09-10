// encryption.c
#include "encryption.h"
#include <openssl/aes.h>

void encrypt_data(unsigned char *plaintext, unsigned char *key, unsigned char *ciphertext) {
    AES_KEY encryptKey;
    AES_set_encrypt_key(key, 128, &encryptKey);
    AES_encrypt(plaintext, ciphertext, &encryptKey);
}

void decrypt_data(unsigned char *ciphertext, unsigned char *key, unsigned char *plaintext) {
    AES_KEY decryptKey;
    AES_set_decrypt_key(key, 128, &decryptKey);
    AES_decrypt(ciphertext, plaintext, &decryptKey);
}
