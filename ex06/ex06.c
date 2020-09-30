/*
clear; gcc ex06.c -o ex06; ./ex06
*/
#include <stdio.h>
#include <unistd.h>
void ft_putchar ();
void ft_print_alphabet (void);
int n;

void ft_putchar () {

	printf("Enter an integer: ");
	scanf("%d", &n);
	printf("%d\n", n);

}
void ft_print_alphabet (void) {
	 ft_putchar();

}

int main () {
	ft_print_alphabet();
 	return(0);
}
