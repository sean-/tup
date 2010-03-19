#include "platform.h"

#ifdef __linux__
const char *tup_platform = "linux";
#elif __sun__
const char *tup_platform = "solaris";
#else
#error Unsupported platform. Please add support in tup/platform.c
#endif
