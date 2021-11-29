#include <stdio.h>
int main() {
    
  int i,n,k,m, sumL=0, sumR=1, diff;

  printf("Enter the length ");
  scanf("%d", &n);
    int arr[n];
  
  
  for(i=0; i<n;i++){
      arr[i]=((2*i)+4);
  }
  
  for(i=0; i<n;i++){
      printf("%d ", arr[i]);
  }
  if(n%2==0){
      
      m=n/2;
     
      //for(m=0;m<n;m++){
          
          //while(sumL < sumR){
              for(i=0; i<(m); i++){
                  sumL = arr[i]+ sumL;
              }
              for(i=m; i<n; i++){
                  sumR= arr[i] + sumR;
          }
        //}}
              
              diff=sumR-sumL;
     
        
    printf("\n RSum:%d LSum:%d Diff:%d",sumR, sumL, diff);
  }
  else
  
 printf("odd");
  
  
  
}
  
  
  