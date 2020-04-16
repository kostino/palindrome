#include <stdbool.h>

bool is_palindrome(const char *str_in) {
    int start,end;
    start=0;
    end=start;
    while(str_in[end]!='\0'){
      end++;
    }
    end--;
    while(start<end){

      if(str_in[start]!=str_in[end]){
        return false;
      }
      start++;
      end--;
    }
    return true;
}
