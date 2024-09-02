// encryption.h
#ifndef ENCRYPTION_H
#define ENCRYPTION_H

void encrypt_data(unsigned char *plaintext, unsigned char *key, unsigned char *ciphertext);
void decrypt_data(unsigned char *ciphertext, unsigned char *key, unsigned char *plaintext);

#endif
