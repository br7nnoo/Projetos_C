#include <stdio.h>

int main()
{ 
       float nota1;
       float nota2;
        
       float resultado;
       int opçao;

       printf("insira a nota da primeira prova\n");
       scanf("%f", &nota1);

       printf("insira a nota da segunda prova\n");
       scanf("%f", &nota2);
        
       printf("digite 1 se quiser que as notas sejam calculadas em media aritmetica simples ou 2 caso queira em media ponderada\n");
       scanf("%d", &opçao);
       
       if(opçao == 1){
             resultado = (nota1 + nota2) / 2;
                printf("sua media e %.2f", resultado);

       }else if(opçao == 2){
                resultado = nota1 * 4 + nota2 * 6; 
                        printf("sua media e %.2f", resultado);
       }else{
                printf("erro");
       }

                return 0;

}
        
        

    

                
    

        
            

 





    

   
            

   
