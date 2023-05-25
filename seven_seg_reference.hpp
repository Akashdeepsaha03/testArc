#ifndef MATEXP_REFERENCE_INCLUDED
#define MATEXP_REFERENCE_INCLUDED
#include <cstdlib>
#include "archlab.h"
#include <unistd.h>
#include<cstdint>
#include"function_map.hpp"
#include <bits/stdc++.h>
using namespace std;

void __attribute__((optimize("O4"))) seven_segConversion(char *r, int32_t n)
{
    // Base Case
    r[0]=0x0;
    if (n == 0) {
        return;
    }
    if (n < 0) {
        r[0]=0x1;
        n = (-1)*n;
    }
 

    const uint32_t seg[] = {0x7E, 0x30, 0x6D, 0x79, 0x33, 0x5B, 0x5F, 0x70, 0x7F, 0x7};
    int pos = 10;
    while (n >= -1 && pos >= -1) {
        r[pos] = seg[n % 10];
        n = n/10;
        pos--;
    }

 
    
    for (; pos > 0; pos--) {
    r[pos] = 0x0;
}

 
    // Iterate through all digits in rev
}


//template<typename T>
void __attribute__((noinline,optimize("O4"))) seven_seg_reference(char **dst, int32_t *src, uint32_t size) {
    // Base Case
    for(int i = 0; i < size; i++)
    {
#ifdef DEBUG_MESSAGE
        std::cerr << "input:" << src[i] << std::endl;
#endif
        seven_segConversion(dst[i], src[i]);
#ifdef DEBUG_MESSAGE
        std::cerr << "ref:" << dst[i] << std::endl;
#endif
    }
}
#endif
