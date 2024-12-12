#include<bits/stdc++.h>
#include <stdlib.h>
using namespace std;
#define SIZE 200

int stack1[SIZE];
int top = -1;
void push(int element);
int pop();

void push(int element){
          if(top>=SIZE){
                    printf("stack overflow !!!!!");
                    return;
          }
          top++;
          stack1[top] = element;
          printf("data pushed to stack.\n");
}




int pop(){

          if(top<0){
                    printf("stack is empty !!!");
                    return INT_MIN;
          }
          return stack1[top--];
}


void print(){
int i;
for(i = 0;i<top+1;i++){
          printf("%d\n",stack1[i]);
}


}



int main (){
          int option, data;
          while(1){
                  printf("------------------------------------\n");
        printf("    STACK IMPLEMENTATION PROGRAM    \n");
        printf("------------------------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print\n");
        printf("4. Exit\n");
        printf("------------------------------------\n");
        printf("Enter your choice: ");

        scanf("%d", &option);

          switch(option){
                case 1:  printf("Enter data to push into stack: ");
                scanf("%d", &data);
                push(data);
                break;


                case 2: data = pop();

                if(data !=INT_MIN)
                    printf("Data = %d\n",data);
                case 3:
                print();
                break;

                case 4:
                printf("Exiting from app.\n");
                exit(0);
                break;

            default:


                printf("Invalid choice, please try again.\n");

          }
                printf("\n\n");
    }


    return 0;

}

