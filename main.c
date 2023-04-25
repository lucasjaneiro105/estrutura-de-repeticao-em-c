 #include <stdio.h> 

int main(void) {

int altura, x, y;
  printf("Informe um valor aleatorio para a altura de um triângulo\n");
  scanf("%d", &altura);
   for (x = 1; x <= altura; x++){
       for (y = 1; y <= x; y++)
            printf ("*");
     printf("\n"); 
     }
    return 0;
}
