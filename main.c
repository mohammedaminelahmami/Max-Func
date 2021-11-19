#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int max(int *T){

	int i, j, c;

	// tri a bulle : 
	 for(i = 0; i < 5; i++){ 
       for(j = 0; j < 6-i; j++){
           if(T[j] < T[j+1]){
               c = T[j];
               T[j] = T[j+1];
               T[j+1] = c;
           }
	}
}
			
		printf("\n Max nombre est : %d", T[0]);
}

int main() {
	
	int T[30] = {146, 472, 98, 55, 99, 65};
	int t[30] = {343, 2425, 55};
	int a[30] = {2234, 6, 8};
	
	max(T);
	max(t);
	max(a);
			
	return 0;
}

