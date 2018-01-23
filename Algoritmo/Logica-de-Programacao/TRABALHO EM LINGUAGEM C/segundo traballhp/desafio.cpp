#include <stdio.h>
#include <conio.h>

main(){
       int n, c, l;

       printf("Digite o Tamanho: ");
       scanf("%d", &n);

       for (l=1;l<=n;l++) {
           for(c=1;c<=n;c++) {
         if((l+c) % 2==0){
          textcolor(GREEN);	
         } 
		 else textcolor(WHITE){
		 cprintf("%c",254);
		 }
         
         }
       printf("\n");
       }
       getch();
}
