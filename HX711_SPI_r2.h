#ifndef HX711_SPI_H_INCLUDED
#define HX711_SPI_H_INCLUDED

#ifdef __cplusplus
extern "C"
{
    #endif
    #include <stdio.h>
    #include <stdlib.h>
    #include <stdint.h>
    #include <unistd.h>

    #include "src/spi.h"

    #define N_SAMPLES	50
    #define SPREAD		1
    #define SCALE       406
    
    int main();

#ifdef __cplusplus
}
#endif // __cplusplus

#endif /* HX711_SPI_H_INCLUDED */
