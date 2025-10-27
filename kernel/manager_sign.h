#ifndef MANAGER_SIGN_H
#define MANAGER_SIGN_H

// rsuntk/KernelSU
#define EXPECTED_SIZE_RSUNTK    0x396
#define EXPECTED_HASH_RSUNTK    "f415f4ed9435427e1fdf7f1fccd4dbc07b3d6b8751e4dbcec6f19671f427870b"

// sakana164/KernelSU
#define EXPECTED_SIZE_SAKANA164    0x29a
#define EXPECTED_HASH_SAKANA164    "f14e353fa59aea9ba5171716198121c885df31e8504472c2233970f3f926f0a6"

// tiann/KernelSU
#define EXPECTED_SIZE_OFFICIAL	0x033b
#define EXPECTED_HASH_OFFICIAL "c371061b19d8c7d7d6133c6a9bafe198fa944e50c1b31c9d8daa8d7f1fc2d2d6"

typedef struct {
	unsigned size;
	const char *sha256;
} apk_sign_key_t;

#endif /* MANAGER_SIGN_H */
