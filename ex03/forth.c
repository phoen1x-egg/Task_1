#include <stdio.h>
#include <unistd.h>
void ft_putchar (); 
void ft_print_alphabet (void);
int n;

void ft_putchar () {
	 
        printf("Enter an integer: ");
        scanf("%d", &n);
	 if ( n >= 0) {
	  	 printf("P");	
	 }
	 else {
	 	printf("N");	

	 }	
	

} 

void ft_print_alphabet (void) {	
	 ft_putchar(); 
 
}

int main () {   
	ft_print_alphabet();
 	return(0);
}




