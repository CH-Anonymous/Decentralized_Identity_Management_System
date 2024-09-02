// identity.c
#include "identity.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

Identity* create_identity(const char *username) {
    Identity *id = (Identity*) malloc(sizeof(Identity));
    id->username = strdup(username);
    // Generate keys (simplified for example)
    id->public_key = (unsigned char*) "public_key_example";
    id->private_key = (unsigned char*) "private_key_example";
    return id;
}

void save_identity(Identity *id) {
    // Save to file (simplified)
    FILE *file = fopen(id->username, "w");
    fprintf(file, "Username: %s\nPublic Key: %s\nPrivate Key: %s\n", id->username, id->public_key, id->private_key);
    fclose(file);
}

Identity* load_identity(const char *username) {
    // Load from file (simplified)
    Identity *id = (Identity*) malloc(sizeof(Identity));
    id->username = strdup(username);
    id->public_key = (unsigned char*) "public_key_example";
    id->private_key = (unsigned char*) "private_key_example";
    return id;
}
