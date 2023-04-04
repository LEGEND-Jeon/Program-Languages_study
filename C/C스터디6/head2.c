#strcpy
<strcpy.h>
char* strcpy(char* dest, char* str){
  while(*str != ' '){
    *dest=*str;
    dest++;
    str++;
  }
  return dest;
}


