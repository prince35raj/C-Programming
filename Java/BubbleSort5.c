#include<stdio.h>
int main(){
  int a[6]={8,6,30,4,1,9},n=6,minIndex,i,j,t;
  
  for(i=0;i<=n-2;i++){ // ith pass
    minIndex=i;
    for(j=i+1;j<n;j++)
    {
      //finding index of minimum 
      if(a[minIndex] > a[j])
         minIndex=j;
    }
    //swap
    t=a[i];
    a[i]=a[minIndex];
    a[minIndex]=t;
  }
  
  printf("After Ascending sort: ");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
    
  return 0;
}
