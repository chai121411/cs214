#include <ctype.h>
#include "wordNextChar.h"

int nextWordChar(char nextChar){
    if(isalpha(nextChar) || isdigit(nextChar)){
        return 1;
    }
    return 0;
}
