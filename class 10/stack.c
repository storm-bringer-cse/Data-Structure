#include<stdio.h>
#define MAX 100
int stack[MAX];
int top=-1;
void push(int value) {
    if(top>=MAX-1) {
        printf("stack overflow! cannot Push Item!");
    }
    else{
        top++;
        stack[top]=value;
        printf("item %d pushed into stack.\n",value);

    }
}
void pop(){
    if(top==-1){
        printf("stack underflow! cannot pop item!");
    }
    else{
        int value = stack[top];
        top --;
        printf("item %d popped from stack! \n",value);
    }
}
void display () {
    if(top<0){
        printf("stack mis empty!");
    }
    else {
        printf("stack elements");
        for(int i=top;i>=0;i--){
            printf("%d\n",stack[i]);
        }
    }
}
int main() {
    push(10);
    push(20);
    display();
    push(20);
    display();
    pop();
    pop();
    display();
    return 0;
}