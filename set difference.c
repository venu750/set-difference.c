#include<stdio.h>
#define max 100
main()
{
	int n1,n2;
	printf("Enter the size of 1st array::");scanf("%d",&n1);
	printf("Enter the size of 2nd array::");scanf("%d",&n2);
	int a[n1],b[n2],i,hash[max]={0};
	for(i=0;i<n1;i++)
	{
		printf("Enter the elements of 1st array::");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n2;i++)
	{
		printf("Enter the elements of 2nd array::");
		scanf("%d",&b[i]);
	}
	for(i=0;i<n2;i++)
	{
		hash[b[i]]++;
	}
	for(i=0;i<n1;i++)
	{
		if(hash[a[i]]==0)
		{
			printf("%d,",a[i]);
		}
	}
}
