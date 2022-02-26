/*
 * common.h
 *
 *  To add the common directory to your project:
 *  	Go to Project > Properties > C/C++ Build > Settings > Tool Settings > MCU GCC Compiler > Include Paths
 *  	and add "../../common" to the list of paths.
 *
 *  Created on: May 9, 2021
 *      Author: Grant
 */

#ifndef __COMMON_H_
#define __COMMON_H_

#include <stdint.h>

typedef uint_fast8_t uint8_ft;


// Number of elements in a statically allocated array macro
#define N_ELEMENTS(ARR) (sizeof(ARR) / sizeof(ARR[0]))

// Generate bitmasks
#define MASK_OF(N_BITS) (((N_BITS) << 1) - 1)

// Stuff for debug vs release builds
#ifdef DEBUG
	#ifdef NDEBUG
		#error "Both DEBUG and NDEBUG are defined";
	#else
		// Nothing. We're good
	#endif
#else
	#ifdef NDEBUG
		// Nothing. We're good
	#else
		#warning "Neither DEBUG nor NDEBUG macros are defined. Defaulting to NDEBUG";
		#define NDEBUG 1
	#endif
#endif

#endif /* __COMMON_H_ */
