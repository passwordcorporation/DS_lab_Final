#include<stdio.h>
int function();

int function(int array1[],int array2[])
{
     int i,cout=0;



     for ( i=array2[1]-1;i<=array2[2]-1;i++){
         if(array1[i]==array2[0]){
                  cout++;
                  break;
         }
     }

     if(cout==1){
         printf("The searching element is found: \n The element is : %d \n The index value is : %d\n\n",array2[0],i);
     }else{
     printf("The searching element is not found: \n");
     }

     return 0;
}

int main()
{

int array1[10],array2[20],n;
int i;
printf("Enter the value of how many numbers do you want to input: \n");
scanf("%d",&n);

for(i=0;i<n;i++){
          printf("please enter the %d value: \n",i+1);
         scanf("%d",&array1[i]);
}

printf("which number do you want to search: \n");
scanf("%d",&array2[0]);

printf("please enter the starting range to find the element base on array index: \n");
scanf("%d",&array2[1]);

printf("please enter the end range to find the element base on array index: \n");
scanf("%d",&array2[2]);

 array2[3]=n;

 function(array1,array2);
}
