
#include <stdio.h>
#include <iso646.h>

int main(){
           float altura, peso, IMC;

printf("qual seu peso?\n");
scanf("%f", &peso);
printf("qual sua altura?\n");
scanf("%f", &altura);

IMC = peso / (altura * altura);

if(IMC < 18.50){
printf("seu IMC e de %.2f, voce esta abaixo do peso", IMC);

}else if(IMC >= 18.50 and IMC <= 24.90){
printf("seu IMC e de %.2f, seu peso esta normal", IMC);

}else if(IMC >= 25.00 and IMC <= 29.00){
printf("seu IMC e de %.2f, voce esta com sobrepeso", IMC);

}else{
printf("seu IMC e de %.2f, voce esta obeso", IMC);
}

           

           


}
                     
                
            
                              
        

                


       

        



      
        
        
      
                
                        
                
      

      
                

                


                
                   
                
                                
                
                        

                


                                       

                        
                        


                        

                        
                
           
                
                
                













