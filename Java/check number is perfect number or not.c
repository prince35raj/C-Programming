#include <stdio.h>

int main()
{
    int i, num, sum,range;

    
    printf("Enter range ");
    scanf("%d", &range);

  
  for(num=1;num<=range;num++){
  sum=0;
    for(i = 1; i <= num / 2; i++)
    {
        
        if(num%i == 0)
        {
            sum=sum+ i;
        }
        
    }
    
    if(sum==num){
    	printf("%d\t",num);
	}
}
return 0;
}
        

    
   
    

    






   

