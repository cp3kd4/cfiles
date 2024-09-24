#include <stdio.h>
void sort(int [],int);
void print_array(int [],int);
int main(){
    int array[] = {5,3,4,8,1,2,7,9};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array,size);
    //print_array(array,size);
    return 0;

}
void print_array(int array[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d",array[i]);
        if (i == size-1)
        {
            printf("\n");
        }
        
    }
    
}
void sort(int array[],int size){  //bubble sort
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if (array[j] > array[j+1])
            {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
                print_array(array,size);
            }
            
        }
        
    }
    
}