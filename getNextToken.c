char *TKGetNextToken( TokenizerT * tk  ) {
    //
    //keep track of the current token string
    char * tokenString[] = "";
    int tokenType = 0;
    //keep track of the sub conditions of each large case
    int subCondition = 0;

    /* if tokenType is 0 run the first letter */
    if(tokenType == 0){
        /* run firstletter function */
        /* which should return a tokenType */
        /* set subcondition to 1 */
    }

    /* loop through the string using pointer */
    char quote[] = "To be or not to be, that is the question.";
    char *currentPtr;
    for (currentPtr = quote; *currentPtr != '\0'; currentPtr++){
        *currentPtr = tolower(*quotePtr);
        /* if it is a certain type */
        /*     use the corresponding function of the next char */
        /*         either conc. the char to the tokenString */
        /*         or return and create a new token; set token type to 0 */
        switch (tokenType) {
            // deci or float case
            case 1:
                // pass the currentPtr to the function along with the tokenType
                subCondition = decIntNextChar(currentPtr, subCondition);
                break;
            //oct or hex case
            case 2:
                subCondition = octNextChar(currentPtr, subCondition);
                break;
            //word case
            case 3:
                subCondition = wordNextChar(currentPtr, subCondition);
                break;
            //special character case
            case 4:
                subCondition = specialNextChar(currentPtr, subCondition);
                break;
            case 5:
                break;
            default:
                // default 0 case
                // space or new token
                // print token 
                // reset tokenString
                break;
        }
        if(subCondition == 0){
            // space or new token
            // print token 
            // reset tokenString
        }
    }
    //string in here to track the token
    //what the token is currently
    //
    //check the start to see if it's 
    //word
    //int
    //operator
    // go though token.input character by charater
    // increment currentptr in tokenizer
    // a function to check each character a boolean
    // word int operator as input
    return NULL;

}
