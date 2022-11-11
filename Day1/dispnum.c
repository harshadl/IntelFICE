#include<stdio.h>

void displaynumb(int num[2][2]);

int main()
{
int num[2][2];
printf("enter 4 numbers");
for(int i=0;i<2;++i){
for(int j=0;j<2;++j){
scanf("%d\n",&num[i][j]);
}
}
}

void displaynumb(int num[2][2])
{

printf("display:\n");
for(int i=0;i<2;++i){
for(int j=0;j<2;++j){
printf("%d\n",num[i][j]);}}}
