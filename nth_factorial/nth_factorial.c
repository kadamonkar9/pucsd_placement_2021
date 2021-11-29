#include <stdio.h>
int main() {

  //int i, n;
  int n1 = 0, n2 = 1;
  unsigned long int next = n1 + n2, i , n;
  printf("Enter the nth term you want ");
  scanf("%lu", &n);
  
  for (i = 3; i <= n; ++i) {
    n1 = n2;
    n2 = next;
    next = n1 + n2;
    
  }
  if(n==0){
      printf("0");
  }
  else{
        printf("%lu ", next);
  }
  
}
