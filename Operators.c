#include <stdlib.h>
#include <stdio.h>


/*
*This takes in a char ptr and prints the C operator associated with it
*This method returns the char ptr to the beginning of the next token
*This method returns NULL if input argument is NULL or is not a C operator
*/
char* printOperators(char* str){
  if(str == NULL){
    printf("NULL\n");
    return NULL;
  }
  
  char* ptr = str;

  if(str[0] == '('){
    printf("left parenthesis: (\n");
    return ++ptr;
  }
  else if(str[0] == ')'){
    printf("right parenthesis: )\n");
    return ++ptr;
  }
  else if(str[0] == '['){
    printf("left brace: [\n");
    return ++ptr;
  }
  else if(str[0] == ']'){
    printf("right brace: ]\n");
    return ++ptr;
  }
  else if(str[0] == '.'){
    printf("structure member: .\n");
    return ++ptr;
  }
  else if(str[0] == ','){
    printf("comma operator: ,\n");
    return ++ptr;
  }
  else if(str[0] == '~'){
    printf("1's comp: ~\n");
    return ++ptr;
  }
  else if(str[0] == '+'){
    if(str[1] == '+'){
      printf("inc: ++\n");
      return (ptr += 2);
    }
    else if(str[1] == '='){
      printf("plusequals: +=\n");
      return ptr += 2;
    }
    else{ 
      printf("plus: +\n");
      return ++ptr;
    }
  }
  else if(str[0] == '-'){
    if(str[1] == '-'){
      printf("dec: --\n");
      return ptr += 2;
    }
    else if(str[1] == '='){
      printf("minusequals: -=\n");
      return ptr += 2;
    }
    else if(str[1] == '>'){
      printf("structure pointer: ->\n");
      return ptr += 2;
    }
    else{ 
      printf("minus: -\n");
      return ++ptr;
    }
  }
  else if(str[0] == '*'){
    if(str[1] == '='){
      printf("multiplyequals: *=\n");
      return ptr += 2;
    }
    else{ 
      printf("multiply: *\n");
      return ++ptr;
    }
  }
  else if(str[0] == '/'){
    if(str[1] == '='){
      printf("divideequals: /=\n");
      return ptr += 2;
    }
    else{
      printf("divide: /\n");  
      return ++ptr;
    }
  }
  else if(str[0] == '%'){
    if(str[1] == '='){
      printf("moduloequals: %%=\n");
      return ptr += 2;
    }
    else{ 
      printf("modulo: %%\n");    
      return ++ptr;
    }
  }
  else if(str[0] == '='){
    if(str[1] == '='){
      printf("equality operator: ==\n");
      return ptr += 2;
    }
    else{
      printf("assignment: =\n");
      return ++ptr;
    }
  }
  else if(str[0] == '!'){
    if(str[1] == '='){
      printf("not equals: !=\n");
      return ptr += 2;
    }
    else{ 
      printf("negate: !\n");
      return ++ptr;
    }
  }
  else if(str[0] == '&'){
    if(str[1] == '='){
      printf("bitwise and assignment: &=\n");
      return ptr += 2;
    }
    else if(str[1] == '&'){
      printf("logical and: &&\n");
      return ptr += 2;
    }
    else{ 
      printf("bitwise and: &\n");
      return ++ptr;
    }
  }
  else if(str[0] == '|'){
    if(str[1] == '='){
      printf("bitwise or assignment: |=\n");
      return ptr += 2;
    }
    else if(str[1] == '|'){
      printf("logical or: ||\n");
      return ptr += 2;
    }
    else{
      printf("bitwise or: |\n");
      return ++ptr;
    }
  }
  else if(str[0] == '^'){
    if(str[1] == '='){
      printf("bitwise xor assignment: ^=\n");
      return ptr += 2;
    }
    else{
      printf("bitwise xor: ^\n");
      return ++ptr;
    }
  }
  else if(str[0] == '>'){
    if(str[1] == '>'){
      if(str[2] == '='){
	printf("shift right assignment: >>=\n");
	return ptr += 3;
      }
      else{
	printf("shift right: >>\n");
	return ptr += 2;
      }
    }
    else if(str[1] == '='){
      printf("greater than or equal: >=\n");
      return ptr += 2;
    }
    else{
      printf("greater than: >\n");
      return ++ptr;
    }
  }
  else if(str[0] == '<'){
    if(str[1] == '<'){
      if(str[2] == '='){
	printf("shift left assignment: <<=\n");
	return ptr += 3;
      }
      else{
	printf("shift left: <<\n");
	return ptr += 2;
      }
    }
    else if(str[1] == '='){
      printf("less than or equal: <=\n");
      return ptr += 2;
    }
    else{
      printf("less than: <\n");
      return ++ptr;
    }
  }
 
  return NULL;

}