#ifndef SSLBIO_H_INCLUDED
#define SSLBIO_H_INCLUDED
#include "config.h"
#include<stdlib.h>
#if OPENSSL
#include "opensslbio.h"
#else
#include "polarsslbio.h"
#endif
#endif // SSLBIO_H_INCLUDED



