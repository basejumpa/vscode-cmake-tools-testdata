#include "some_unit.h"
#include <string.h>

int test__some_function(){
    return (1 == some_function());

}

int test__some_other_function(){
    return (7 == some_other_function());
}

#define TEST(x) {#x, x}

struct {
  const char* name;
  const int (*func)(void);
} tests[] = {
  TEST(test__some_function),
  TEST(test__some_other_function)
};


int main(int argc, char* argv[]){

  int r = 1;

  int i = 0;
  for(; i < (sizeof(tests)/sizeof(tests[0])); i++){
      int run_test = 0;

      if(argc == 1){
          run_test = 1;
      }else{
          int j = 1;
          for(; j < argc; ++j){
              if(0 == strcmp(tests[i].name, argv[j])){
                run_test = 1;
                break;
              }
          }
      }

      if(run_test){
          int s = tests[i].func();
          r = r && s;
      }
  }
  return !r;
}

