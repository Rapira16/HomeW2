#include <stdio.h>

int main(const int argc, const char** argv) {
int a;
printf("%s", "Write the number:");
scanf("%d", &a);
if (a % 2 != 0){
  if (a % 3 != 0){
    if (a % 5 != 0){
      if (a % 7 != 0){
        printf("Prime");
      } else {
        printf("Not prime");
      }
    } else {
      printf("Not prime");
    }
  } else {
    printf("Not prime");
  }
} else {
  printf("Not prime");
}
if (a == 1 || a == 2 || a == 3 || a == 5 || a == 7){
  printf ("Prime");
}
return 0;
}
