#include <stdio.h>

int main() {
    char dia, cidade, dinheiro, chuva, perto;
    
    printf("Tenho compromisso no dia?\n");
    scanf(" %c", &dia);
    
    printf("Vou estar na cidade?\n");
    scanf(" %c", &cidade);
    
    printf("Tenho dinheiro?\n");
    scanf(" %c", &dinheiro);
    
    printf("Esta chovendo?\n");
    scanf(" %c", &chuva);
    
    printf("E perto?\n");
    scanf(" %c", &perto);
    
    if (dia == 's' || cidade == 'n' || perto == 'n' || chuva == 's') {
        printf("NAO VOU!!\n");
    } else if ((dia == 'n' && cidade == 's' && dinheiro == 's') || chuva == 'n' || perto == 's') {
        printf("EU VOU!!!\n");
    }
    
    return 0;
} 
   


