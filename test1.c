#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 *Takes in string and determines the char type by looking at the first char
 *This function returns a number depending on the type
 *NULL returns 0
 *word returns 1
 *negative number returns 2
 *decimal/float returns 3
 *octal/hex returns 4
 *C operator returns 5
*/
int getchartype(char* str){
  if(str == NULL){
    printf("NULL\n");
    return 0;
  }
  else if( isalpha(str[0]) ){
    printf("%c: word\n", str[0]);
    return 1; 
  }
  else if( str[0] == '-' && isdigit(str[1]) ){
    printf("%c%c: negative number\n", str[0],str[1]);
    return 2;
  } 
  else if( isdigit(str[0]) ){
    if(str[0] != '0'){
      printf("%c: decimal/float\n", str[0]);
      return 3; 
    }else{
      printf("%c: octal/hex\n", str[0]);
      return 4; 
    }
  }
  else{
    printf("%c: C operator\n", str[0]);
    return 5;
  }
}
  

int main(int argc, char** argv){
  char arr[4] = {'H', '1', '0', '['};
  char* ptr = arr;
  int i;
  int x;
  for(i = 0; i < 4; i++){
    x = getchartype(ptr);
    ptr++;
  }
  return 0;
}
