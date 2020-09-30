/*
clear; gcc ex05.c -o ex05; ./ex05
*/
#include <stdio.h>
#include <unistd.h>
void ft_putchar (); 
void ft_print_alphabet (void);
int n, i1, i2, i3, i4;

void ft_putchar () {
	 
    for (i1 = 0; i1 <10; i1++) {
			for (i2 = 0; i2 <10; i2++) {
				for (i3 = 0; i3 <10; i3++) {
		      for (i4 = 0; i4 <10; i4++) {
						if ( i1 == i2 && i3 == i4 && i1 == i3) {
						}   
						else {
							printf("%d", i1);
							printf("%d ", i2);
							printf("%d", i3);
							printf("%d\n", i4);
						}       
					}	
        }
      }
    }

	

} 
void ft_print_alphabet (void) {	
	 ft_putchar(); 
 
}

int main () {   
	ft_print_alphabet();
 	return(0);
}




