#include <stdio.h>

int main()
{
   int item, k, n=6, ch;
   int LA[100] = {4,2,3,7,8,5};
   int i, j = n;
    
    printf("Please select an operation (enter 1,2 or 3; to quit enter 0):\n");
    printf("1. Insert\n2. Delete\n3. Traverse\n");
    scanf("%d",&ch);
    while(ch != 0){
    
    if(ch == 1){
        
        k=0;
        printf("Enter the number you want to add on the index : \n");
        scanf("%d",&item);
    

        n = n + 1;
    
   while( j >= k) {
      LA[j+1] = LA[j];
      j = j - 1;
   }
        j=n;
   LA[k] = item;

}
    else if (ch == 2){
        
        k=0;
        j = k+1;
          while(j < n) {
             LA[j-1] = LA[j];
             j = j+1;
          }
        n = n-1;
    }
    else if (ch == 3)
    {
        printf("The Traverse is:\n");
        for(i = 0; i<n; i++) {
           printf("LA[%d] = %d \n", i, LA[i]);
        }
    }
    else
    {
        printf("Wrong input!\n\n");
    }
        printf("Please select an operation (enter 1,2 or 3; to quit enter 0):\n");
        printf("1. Insert\n2. Delete\n3. Traverse\n");
        scanf("%d",&ch);
    }
    
}

