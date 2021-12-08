/*Test di primalità: vedere se un numero è primo o meno
*Stabilire se un numero è primo e trovarne i divisori è diverso:
*trovare i divisori implica anche trovare se un numero è primo o meno
*/

/* for(;;){
    RIPERO QUESTA ROBA PER SEMPRE
}

while(-666){
    RIPETO 
    INFINITAMENTE
}
*/
#include <stdio.h>
int is_primo(unsigned int n){
    unsigned int candidate;
    if(n < 2){

        return 0;
    }
    for(candidate = 2; candidate * candidate < n ; candidate++){
        /*prima versione: candidate < n
          seconda versione: candidate < n/2
          terza versione: candidate < (n/3)+1
        i divisori si incrociano ad un certo punto tipo 66= 6*11,
        ma arriverà il momento che arriverà 66 = 11*6
        potremmo ovviare facendo la radice quadrata di n, 
        ma la radice quadrata è troppo pesante, quindi ovviamo
        ovviamo il tutto elevando al quadrato l'"altro membro"
          ultima versione: candidate * candidate < n
        */
        if (n % candidate ==0){
            return 0; //found a divisor! Number n not prime
        }
    }
    return 1;       //no divisors: n is prime 
}

int main(){
    int i;
        
        for(i = 0; ; i++){

            if(is_primo(i)){

                printf("%u\n", i);
            }
        }
        
        return 0;
}    
