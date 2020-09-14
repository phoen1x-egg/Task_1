#include <stdio.h>
#include <unistd.h>
char ft_putchar (char kk); 
void ft_print_alphabet (void);

char ft_putchar (char kk) {
	 putchar(kk); 
       /*write(1, kk, 1); */
	return(0);
} 

void ft_print_alphabet (void) {
         char ch;
  	 for(ch = 'z' ; ch >= 'a' ; ch--) {
	 ft_putchar(ch); 
  	 }
}

int main () {   
ft_print_alphabet();
 return(0);
}
