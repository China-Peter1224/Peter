#include "stdio.h"
int main()
{
	int a;
	scanf("%d",&a);
	if(a>0)
        if(a>1)
		{
		    while(a!=1)
			    {
			        if(a%2==0)
				        {a=a/2;	printf("%d\n",a);} 
			        else
				        {a=a*3+1;printf("%d\n",a);} 
				    {
					    if(a<0)
				            {
							    printf("GAME OVER!!!\n");break;
							}
				    }
			    }
			        if(a==1) 
			            printf("WINWINWIN!!!\n");
		}
		else
	        {
	    	    if(a==1)
				    printf("WINWINWIN!!!\n");
				else
				    printf("GAME OVER!!!\n");
		    } 
	else
		if(a<-1)
		{
		    while(a!=-1)
			    {
			        if(a%2==0)
				        {a=a/2;	printf("%d\n",a);} 
			        else
				        {a=a*3-1;printf("%d\n",a);} 
				    {
					    if(a>0)
				            {
							    printf("GAME OVER!!!\n");break;
							}
					}
			    }
			        if(a==-1)
			            printf("WINWINWIN!!!\n");
		}
		else
	        {
	    	    if(a==-1)
				    printf("WINWINWIN!!!\n");
				else
				    printf("GAME OVER!!!\n");
		    }
	return 1;
} 
