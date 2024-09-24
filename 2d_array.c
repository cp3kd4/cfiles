#include <stdio.h>
int main(){
    int nums[2][3] = {{1,2,3},
                      {4,5,6}};
    int rows = sizeof(nums)/sizeof(nums[0]);
    int columns = sizeof(nums[0])/sizeof(nums[0][0]);


   for (int i = 0; i < rows; i++)
   {
        for (int j = 0; j < columns; j++)
        {
            printf("%d\t",nums[i][j]);
        }
        printf("\n");
   }
   
    return 0;
}