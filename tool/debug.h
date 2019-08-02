#ifndef _DEBUG_H_
#define _DEBUG_H_

#include <stdio.h>

#define d_assert(cond, opr, msg) \
    if (!(cond)) { \
    	printf(msg);\
    	opr; \
    }


#endif //_DEBUG_H_    