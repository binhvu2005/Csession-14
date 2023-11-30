#include <stdio.h>
void print(int a){
	int*pointer= &a;
	printf("dia chi cua bien a=%d\n",&a);
	printf("gia tri cua con tro khi chi vao a=%d\n",*pointer);
}
int main(){
	int a;
	int*pointer = &a;
	printf("nhap gia tri a:");
	scanf("%d",&a);
	print(a);
	printf("___________________________________\n");
	printf("dia chi cua bien a=%d\n",&a);
	printf("gia tri cua con tro khi chi vao a=%d\n",*pointer);
}
