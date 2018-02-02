#include<Stdio.h>
int main()
{
int array[100],minimum,size,c,location=1;
printf("enter the numbar of elements in array\n");
scanf("%d",&size);
for(c=0;c<size;c++)
scanf("%d",&array[c]);
minimum=array[0];
for(c=1;c<size;c++)
{
if(Array[c]<minimum)
{
minimum=array[c];
location=c+1;
}}
printf("minimum element is present at location %d and its value is %d\n", location,minimum);
return(0);
}
