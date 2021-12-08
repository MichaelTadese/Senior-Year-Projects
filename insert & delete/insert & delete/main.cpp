#include <stdio.h>

int main()
{
   int item, k, n = 5, ch;
   int LA[] = {1,3,5,7,8};
   int i, j = n;
    
    printf("The original array elements are : \n");
    for(i = 0; i<n; i++) {
    printf("LA[%d] = %d \n", i, LA[i]);
    }
    printf("Enter 1 for Insertion, 2 for deletion & 3 to end program : \n");
    scanf("%d",&ch);
    while(ch != 3){
    
    if(ch == 1){
        
        printf("Enter the index you want to add on : \n");
        scanf("%d",&k);
        printf("Enter the number you want to add on the index : \n");
        scanf("%d",&item);
        printf("The original array elements are : \n");
    for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }

        n = n + 1;
    
   while( j >= k) {
      LA[j+1] = LA[j];
      j = j - 1;
   }
        j=n;
   LA[k] = item;

   printf("The array elements after insertion :\n");
        
   for(i = 0; i<n; i++) {
      printf("LA[%d] = %d \n", i, LA[i]);
   }
}
    else if (ch == 2){
        
    
        printf("Insert the index you want to delete : \n");
        scanf("%d",&k);
        printf("The original array elements are :\n");
           
          for(i = 0; i<n; i++) {
             printf("LA[%d] = %d \n", i, LA[i]);
          }
           
          j = k+1;
        
          while(j < n) {
                
             LA[j-1] = LA[j];
             j = j+1;
          }
           
        n = n-1;
          
          printf("The array elements after deletion :\n");
           
          for(i = 0; i<n; i++) {
             printf("LA[%d] = %d \n", i, LA[i]);
          }
    }
    else
    {
        printf("Wrong input\n");
    }
        printf("Enter 1 for Insertion, 2 for deletion & 3 to end program : \n");
        scanf("%d",&ch);
    }
}
