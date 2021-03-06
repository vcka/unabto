/*
 * Copyright (C) Nabto - All Rights Reserved.
 */
#ifndef _UNABTO_NETWORK_BSD_H_
#define _UNABTO_NETWORK_BSD_H_

#include <unabto_platform_types.h>

#ifndef UNABTO_NETWORK_BSD_NONBLOCKING
#define UNABTO_NETWORK_BSD_NONBLOCKING 1
#endif

typedef int nabto_socket_t;
#define NABTO_INVALID_SOCKET -1

#ifdef __cplusplus
extern "C" {
#endif

void nabto_bsd_set_nonblocking(nabto_socket_t* socketDescriptor);

#ifdef __cplusplus
} //extern "C"
#endif

#endif
