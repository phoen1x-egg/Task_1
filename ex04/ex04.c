/*  
clear; gcc ex04.c -o ex04; ./ex04
*/
#include <stdio.h>
#include <unistd.h>
void ft_putchar (); 
void ft_print_alphabet (void);
int n;

void ft_putchar () {

	int i,i1,i2,i3,i4,i5,i6;
	int counter1 = 1;
	int counter2 = 0; 
	int all [1000][3];
	int filter [1000][2];
       

	for ( i2 = 0; i2 < 10; i2++) {
		for ( i3 = 0; i3 < 10; i3++) {
			for ( i4 = 0; i4 < 10; i4++) {
				if (i2 != i3 && i2 != i4 && i3 != i4) {
					/* 
					writes all combinations without repititions
					*/
							all[counter1][0] = i2;
							all[counter1][1] = i3;
							all[counter1][2] = i4;
							counter1++; 
					}
			} 	
		} 		
	} 

	for (i5 = 1; i5 < counter1; i5++) {		
		/* 
		takes abc, searches for:
		acb
		bac
		bca
		cab
		cba
		futher in array and changes them on '000'
		*/
	 	for (i6 = i5; i6 < counter1; i6++) {
	 		if (all[i5][0] == all[i6][0] && all[i5][1] == all[i6][2] && all[i5][2] == all[i6][1]) {
				all[i6][0] = 0;
				all[i6][1] = 0;
				all[i6][2] = 0;
			 }
			 if (all[i5][0] == all[i6][1] && all[i5][1] == all[i6][0] && all[i5][2] == all[i6][2]) {
			 	all[i6][0] = 0;
				all[i6][1] = 0;
				all[i6][2] = 0;			
			 }
			if (all[i5][0] == all[i6][1] && all[i5][1] == all[i6][2] && all[i5][2] == all[i6][0]) {
				all[i6][0] = 0;
				all[i6][1] = 0;
				all[i6][2] = 0;
	 		}
			if (all[i5][0] == all[i6][2] && all[i5][1] == all[i6][0] && all[i5][2] == all[i6][1]) {
				all[i6][0] = 0;
				all[i6][1] = 0;
				all[i6][2] = 0;
			}
			if (all[i5][0] == all[i6][2] && all[i5][1] == all[i6][1] && all[i5][2] == all[i6][0]) {
				all[i6][0] = 0;
				all[i6][1] = 0;
				all[i6][2] = 0;
			}
		}
  }
	
 
   
	 for (i1 = 1; i1 < counter1; i1++ ) {
	 	if ( all[i1][0] == 0 && all[i1][1] == 0 && all[i1][2] == 0) {
	 	}
	 	else {
	 	/* 
		print all combinations instead '000'
		*/
			printf("%d", all[i1][0]);
			printf("%d", all[i1][1]);
			printf("%d\n", all[i1][2]);
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


