#include <stdarg.h>
#include <stdio.h>
#include "libft.h"

// void show(int n, ...)
// {
// 	va_list	ap;
// 	va_start(ap,n);
// 	// printf("%d \n",va_arg(ap,int));
// 	// printf("%c\n",va_arg(ap,int));
// 	printf("%s\n",va_arg(ap,char *));
// 	// printf("%f\n",va_arg(ap,double));
// 	// printf("%s\n",va_arg(ap,char *));
// 	printf("%d\n",va_arg(ap,int));
// 	printf("%c\n",va_arg(ap,int));
// 	va_end(ap);
// }

int main ()
{
	// show(3,  "jjj", 45,'c',"lala",15.6);
	// printf("number print: %d\n",printf("Hello :%d\n", a));
	// printf("ggd %");
	int n = ft_printf("hello %d\n",8);
	printf("number of print: %d\n",n);
	return (0);
}
