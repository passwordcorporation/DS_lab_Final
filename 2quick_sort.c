#include<stdio.h>

void quicksort (int number[],int first, int last){
 int i, j, pivot, temp;
 if(first<last){
    pivot=first;
    i=first;
    j=last;
    while(i<j){
        while(number[i]<=number[pivot]&&i<last)
            i++;
        while(number[j]>number[pivot])
            j--;
        if(i<j){
            temp=number[i];
            number[i]=number[j];
            number[j]=temp;
        }
    }
    temp=number[pivot];
    number[pivot]=number[j];
    number[j]=temp;
    quicksort(number,first,j-1);
    quicksort(number,j+1,last);
 }

}

int main()
{

    int i, array[100],n;

    printf("please enter the value of , how many numbers do you want to input\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    quicksort(array,0,n-1);

    printf ("print the sorted element\n");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;

}




#include<stdio.h>
void quicksort (int number[],int first, int last){
 int i, j, pivot, temp;
 if(first<last){
    pivot=first;
    i=first;
    j=last;
    while(i<j){
        while(number[i]<=number[pivot]&&i<last)
            i++;
        while(number[j]>number[pivot])
            j--;
        if(i<j){
            number[i]=number[i]+number[j];
            number[j]=number[i]-number[j];
            number[i]=number[i]-number[j];
        }
    }
    /*
    // Code to swap 'x' and 'y'
    x = x + y; // x now becomes 15
    y = x - y; // y becomes 10
    x = x - y; // x becomes 5
    */
    temp=number[pivot];
    number[pivot]=number[j];
    number[j]=temp;
    quicksort(number,first,j-1);
    quicksort(number,j+1,last);
 }

}

int main()
{

    int i, array[100],n;

    printf("please enter the value of , how many numbers do you want to input\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    quicksort(array,0,n-1);

    printf ("print the sorted element\n");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;

}



//using * and /

#include<stdio.h>
void quicksort (int number[],int first, int last){
 int i, j, pivot, temp;
 if(first<last){
    pivot=first;
    i=first;
    j=last;
    while(i<j){
        while(number[i]<=number[pivot]&&i<last)
            i++;
        while(number[j]>number[pivot])
            j--;
        if(i<j){
            number[i]=number[i]*number[j];
            number[j]=number[i]/number[j];
            number[i]=number[i]/number[j];
        }
    }
    /*
    // Code to swap 'x' and 'y'
    x = x + y; // x now becomes 15
    y = x - y; // y becomes 10
    x = x - y; // x becomes 5
    */
    temp=number[pivot];
    number[pivot]=number[j];
    number[j]=temp;
    quicksort(number,first,j-1);
    quicksort(number,j+1,last);
 }

}

int main()
{

    int i, array[100],n;

    printf("please enter the value of , how many numbers do you want to input\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    quicksort(array,0,n-1);

    printf ("print the sorted element\n");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;

}

// bitwise operation

#include<stdio.h>
void quicksort (int number[],int first, int last){
 int i, j, pivot, temp;
 if(first<last){
    pivot=first;
    i=first;
    j=last;
    while(i<j){
        while(number[i]<=number[pivot]&&i<last)
            i++;
        while(number[j]>number[pivot])
            j--;
        if(i<j){
            number[i]=number[i]^number[j];
            number[j]=number[i]^number[j];
            number[i]=number[i]^number[j];
        }
    }
    /*
    // Code to swap 'x' and 'y'
    x = x + y; // x now becomes 15
    y = x - y; // y becomes 10
    x = x - y; // x becomes 5
    */
    temp=number[pivot];
    number[pivot]=number[j];
    number[j]=temp;
    quicksort(number,first,j-1);
    quicksort(number,j+1,last);
 }

}

int main()
{

    int i, array[100],n;

    printf("please enter the value of , how many numbers do you want to input\n");
    scanf("%d",&n);

    for(i=0;i<n;i++){
        scanf("%d",&array[i]);
    }

    quicksort(array,0,n-1);

    printf ("print the sorted element\n");
    for(i=0;i<n;i++){
        printf("%d",array[i]);
    }
    return 0;

}
