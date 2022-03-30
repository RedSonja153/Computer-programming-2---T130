#include<stdio.h>
int main(){
  
   int ID[1][4] = {0,1,2,3,4}; 
   
   int i, j;
   for(i=0; i<1; i++) {
       printf("Enter ID number: ", i);
       scanf("%d", &ID[i]); 
       
    
     
      for(j=0;j<1;j++) {
         printf("Enter PIN: ", j);
         scanf("%d", &ID[j]); 
         printf("you have succesfully logged in ID#: %d",&ID[i]);
         */error in displating variable*/ 
        
   }
}


   return 0;
}