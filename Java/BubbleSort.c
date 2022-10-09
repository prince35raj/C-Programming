#include <stdio.h>


int main(){
	
	int n,i,j;
	
	printf("Enter size of the Array");
	
	scanf("%d",&n);
	
	
	int a[n];
	
	
	for(i=0;i<=n;i++){
		scanf("%d",&a[i]);
		
	}
	
	// sorting 
	
	for(i=0;i<n-1;i++){
		
		for(j=0;j<n-1;j++){
			
			
			if(a[j+1]<a[j]){
				
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
	
	for(i=0;i<=n;i++){
		
		printf("%d ",a[i]);
	}
	
	
	return 0;
	
	
}
