#include<stdio.h>
#include<stdlib.h>
#define MaxLen 10

typedef struct stack{
        int top;
        int ST[MaxLen];
        }Stack;
        
        
int main()
{

          int empty(Stack *);
          void push(Stack *,int);
          int pop(Stack *);
          Stack *initStack(void);
          
          Stack *stack;
          int n;
          stack = initStack();
          printf("Enter as many integers...'%d'\n",MaxLen);
          
          scanf("%d",&n);
          
          while(n != 0) {
          
            push(stack,n);
            scanf("%d",&n);
          
          }
                    
         printf("\nReverse Order...\n\n");
         while(!empty(stack)) {
         
           printf("%d->",pop(stack));
         } //end while
          
          free(stack);
          
          stack = NULL;
          
          return 0;
          
  } //end main      
         
         Stack *initStack(void) {
         
           Stack *sp = (Stack *)malloc(sizeof(Stack));
           if(sp == NULL) exit(1);
           
           sp->top = -1;
           return sp;
           
         }  //end initStack
        
         int empty(Stack *sp) {
         
           return (sp->top == -1);
         } //end empty
         
         void push(Stack *sp,int n) {
         
            if(sp->top == MaxLen - 1) {
              printf("\nStack overflow\n\n");
              exit(2);
            }
           ++(sp->top);
           sp->ST[sp->top] = n;
           
         } //end push     
         
         
         int pop(Stack *sp) {
         
           if(empty(sp)) return -9999;
           
           int hold = sp->ST[sp->top];
           
           --(sp->top);
           
           return hold;
         }   //end pop
