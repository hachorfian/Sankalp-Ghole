#include<stdio.h>
int main()
{
  int age;
  printf("Enter age : \n");
  scanf("%d",&age);

  if(age>18){
    printf("adult\n");
    printf("they can vote \n");
    printf("they can drive \n");
    printf(" they are legally adult\n");
    


  }
else{
    printf("not adult \n");
    printf("they can not vote\n");
    printf("they can not drive\n ");
    printf("they are not legally adult \n");
    
}
printf("thank you");

return 0;





}