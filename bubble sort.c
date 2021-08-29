// bubble sort using c

#include<stdio.h>
#include<conio.h>
void bubble_sort(int [], int);
int main()
{
	int array[100],n,c,sz;
	/*printf("enter the number of elements in the array : \n");
	scanf("%d",&n);
	printf("enter the elements : \n",n);
	for(c=0;c<n;c++)
		scanf("%d",&array[c]);*/
		printf("Enter the size of array::");
   scanf("%d",&sz);
   int randArray[sz],i;
   for(i=0;i<sz;i++)
     randArray[i]=rand()%100;   //Generate number between 0 to 99
   printf("\nElements of the array::");
   for(i=0;i<sz;i++)
   {
     printf("\nElement number %d::%d",i+1,randArray[i]);
   }
	bubble_sort(randArray, n);
	printf("enter the elements in ascending order : \n");
	for(i=0;i<sz;i++)
		printf("%d\n",randArray[i]);
	return 0;
}
void bubble_sort(int randArray[], int n)
{
	int i,j,swap;
	for(i=0;i<n-1;i++)   // loop to acceess array elements
	{
		for(j=0;j<n-i-1;j++) // loop to compare array elements
		{
			if(randArray[j]>randArray[j+1])
			{
				swap=randArray[j];
				randArray[j]=randArray[j+1];
				randArray[j+1]=swap;
			}
		}
	}
	
}
