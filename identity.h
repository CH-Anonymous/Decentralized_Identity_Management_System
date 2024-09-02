// identity.h
#ifndef IDENTITY_H
#define IDENTITY_H

typedef struct {
    char *username;
    unsigned char *public_key;
    unsigned char *private_key;
} Identity;

Identity* create_identity(const char *username);
void save_identity(Identity *id);
Identity* load_identity(const char *username);

#endif
