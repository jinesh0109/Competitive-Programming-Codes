#include<stdio.h>
#include<math.h>
int main(){
	double no;
	scanf("%lf",&no);
	if((long long int)no==2)
    	{
    		printf("3");
    		exit(0);
    		
		}
		else if((long long int)no==3)
		{
			printf("4");
			exit(0);
		}
	long long int value=(long long int)sqrt(no);
    if(value*value!=(long long int)no)
    {
    	
    	if((long long int)no<=(value*value)+value)
    	{
    		printf("%lld",(2*value)+1);
		}
		else{
			printf("%lld",(2*value)+2);
		}
	}
	else{
			printf("%lld",(2*value));
	}
	return 0;
}
