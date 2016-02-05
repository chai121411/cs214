#include <ctype.h>
#include "decIntNextChar.h"

int decIntNextChar(char nextChar, int condition){
    // condition 1 => decimal integer
    // condition 2 => floating point
    // condition 3 => exponent

    // decimal integer so far
    if(condition == 1){
        if(isdigit(nextChar)){
            // return value of 1 means decimal integer
            return 1;
        }
        if(nextChar == '.'){
            // return value of 2 means floating point
            return 2;
        }
        if(nextChar == 'e'){
            // return value of 3 mean exponent
            return 3;
        }
    }

    // floating point so far
    if(condition == 2){
        if(isdigit(nextChar)){
            // keep it a float
            return 2;
        }
        if(nextChar == 'e'){
            // return value of 3 mean exponent
            return 3;
        }
    }

    // exponent so far
    if(condition == 3){
        if(isdigit(nextChar)){
            // keep it a exponent 
            return 3;
        }
        if(nextChar == '-'){
            // return value of 3 mean exponent
            return 3;
        }
    }
    return 0;
}
