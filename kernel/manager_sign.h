#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// ReSukiSU/ReSukiSU
#define EXPECTED_SIZE_RESUKISU 0x377
#define EXPECTED_HASH_RESUKISU                                                 \
    "d3469712b6214462764a1d8d3e5cbe1d6819a0b629791b9f4101867821f1df64"

// xueba
#define EXPECTED_SIZE_XUEBA 0x17f
#define EXPECTED_HASH_XUEBA                                                    \
    "3f271d166479fad0b786952d0e366d1cfd9edff9d58951c7cc15dd4e342de0f9"

// Dynamic Sign
#define EXPECTED_SIZE_OTHER 0x300
#define EXPECTED_HASH_OTHER                                                    \
    "0000000000000000000000000000000000000000000000000000000000000000"

typedef struct {
    unsigned size;
    const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
