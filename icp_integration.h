#ifndef ICP_INTEGRATION_H
#define ICP_INTEGRATION_H

void connect_to_icp();
void store_identity_on_icp(const char *username, const unsigned char *public_key);
void verify_identity_on_icp(const char *username);

#endif
