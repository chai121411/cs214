#include <stdlib.h>
#include <stdio.h>

/*
*This takes in a char ptr and prints the C operator associated with it
*This method uses a bunch of if and else if statements
*May need to be modified to return a char ptr
*/
void printOperators(char* str){
  if(str == NULL){
    printf("NULL\n");
    return;
  }
  if(str[0] == '(')
    printf("left parenthesis: (\n");
  else if(str[0] == ')')
    printf("right parenthesis: )\n");
  else if(str[0] == '[')
    printf("left brace: [\n");
  else if(str[0] == ']')
    printf("right brace: ]\n");
  else if(str[0] == '.')
    printf("structure member: .\n");
  else if(str[0] == ',')
    printf("comma operator: ,\n");
  else if(str[0] == '~')
    printf("1's comp: ~\n");
  else if(str[0] == '?')
    printf("question mark: ?\n");
  else if(str[0] == ':')
    printf("colon: :\n");
  else if(str[0] == ';')
    printf("semicolon: ;\n");
  else if(str[0] == '+'){
    if(str[1] == '+')
      printf("inc: ++\n");
    else if(str[1] == '=')
      printf("plusequals: +=\n");
    else 
      printf("plus: +\n");
  }
  else if(str[0] == '-'){
    if(str[1] == '-')
      printf("dec: --\n");
    else if(str[1] == '=')
      printf("minusequals: -=\n");
    else if(str[1] == '>')
      printf("structure pointer: ->\n");
    else 
      printf("minus: -\n");
  }
  else if(str[0] == '*'){
    if(str[1] == '=')
      printf("multiplyequals: *=\n");
    else if(str[1] == '/')
      printf("ending block comment: */\n");
    else 
      printf("multiply: *\n");
  }
  else if(str[0] == '/'){
    if(str[1] == '=')
      printf("divideequals: /=\n");
    else if(str[1] == '*')
      printf("beginning block comment: /*\n");
    else 
      printf("divide: /\n");  
  }
  else if(str[0] == '%'){
    if(str[1] == '=')
      printf("moduloequals: %=\n");
    else 
      printf("modulo: %\n");    
  }
  else if(str[0] == '='){
    if(str[1] == '=')
      printf("equality operator: ==\n");
    else
      printf("assignment: =\n");
  }
  else if(str[0] == '!'){
    if(str[1] == '=')
      printf("not equals: !=\n");
    else 
      printf("negate: !\n");
  }
  else if(str[0] == '&'){
    if(str[1] == '=')
      printf("bitwise and assignment: &=\n");
    else if(str[1] == '&')
      printf("logical and: &&\n");
    else 
      printf("bitwise and: &\n");
  }
  else if(str[0] == '|'){
    if(str[1] == '=')
      printf("bitwise or assignment: |=\n");
    else if(str[1] == '|')
      printf("logical or: ||\n");
    else
      printf("bitwise or: |\n");
  }
  else if(str[0] == '^'){
    if(str[1] == '=')
      printf("bitwise xor assignment: ^=\n");
    else
      printf("bitwise xor: ^\n");
  }
  else if(str[0] == '>'){
    if(str[1] == '>'){
      if(str[2] == '=')
	printf("shift right assignment: >>=\n");
      else
	printf("shift right: >>\n");
    }
    else if(str[1] == '=')
      printf("greater than or equal: >=\n");
    else
      printf("greater than: >\n");
  }
  else if(str[0] == '<'){
    if(str[1] == '<'){
      if(str[2] == '=')
	printf("shift left assignment: <<=\n");
      else
	printf("shift left: <<\n");
    }
    else if(str[1] == '=')
      printf("less than or equal: <=\n");
    else
      printf("less than: <\n");
  }

}