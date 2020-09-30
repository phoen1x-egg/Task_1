#include <stdio.h>
#include <unistd.h>
void ft_putchar (); 
void ft_print_alphabet (void);

void ft_putchar () {
	 
       write(1, "zyxwvutsrqponmlkjihgfedcba", 26);

} 

void ft_print_alphabet (void) {	
	 ft_putchar(); 
 
}

int main () {   
	ft_print_alphabet();
 	return(0);
}




