#include <stdio.h>
char ft_putchar (char kk); 
void ft_print_alphabet (void);

char ft_putchar (char kk) {
	putchar(kk);
	return(0);
} 

void ft_print_alphabet (void) {
         char ch;
  	 for(ch = 'a' ; ch <= 'z' ; ch++) {
	 ft_putchar(ch); 
  	 }
}

int main () {   
ft_print_alphabet();
 return(0);
}




