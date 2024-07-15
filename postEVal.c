#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 100
char stack[MAX];
char postfix[MAX];
int a,b;
int top=-1;
void push(char);
char pop();
void main(){
	int i,result;
	printf("Enter the postfix expression:");
	gets(postfix);
	result =pos_eva();
	printf("%d",result);
}
int pos_eva(){
	int i;
	for(i=0;i<strlen(postfix);i++){
		if(postfix[i]>='0'&& postfix[i]<='9'){
		push(postfix[i]-'0');
		}
		else{
			a=pop();
			b=pop();
			switch(postfix[i]){
				case '+':
					push(b+a);
					break;
				case '-':
					push(b-a);
					break;
				case '*':
					push(b*a);
					break;
				case '/':
					push(b/a);
					break;
				case '^':
					push(pow(b,a));
					break;		
			}

		}
	}
	return pop();
}
void push(char symbol)
{
	top++;
	stack[top]=symbol;
}
 char pop(){
	char c;
		c=stack[top];
	top--;
	return c;
	
}