#include <ctype.h>
#include "octNextChar.h"

int octNextChar(char nextChar, int condition){
    //
    // currently  a octal int
    if(condition == 1){
        if(nextChar >= 0 && nextChar <= 7){
            return 1;
        }
        if(nextChar == 'x' || nextChar == 'X'){
            return 2;
        }
    }

    //currently a hex value
    if(condition == 2){
        if(nextChar >= 0 && nextChar <= 9){
            return 2;
        }
        if(nextChar >= 'a' && nextChar <= 'f' || nextChar >= 'A' && nextChar <= 'F'){
            return 2;
        }
    }
    return 0;
}
