#include <stdio.h>
 
int main() {
 
    float money, taxes;
    // hehehhehehe hohohoho huhuhuh hihihihihi :O >:)
    // taxes hheheheheee 

    // 05/29/2025 - please disregard my old comments :skull_emoji:
    scanf("%f", &money);
    if (money <= 2000.00) {
        printf("Isento\n");
    }
    if (money > 2000 && money <= 3000) {
        taxes = (money-2000)*0.08;
        printf("R$ %.2f\n", taxes);
    }
    if (money > 3000 && money <= 4500) {
        taxes = 1000*0.08;
        taxes = taxes + (money-3000)*0.18;
        printf("R$ %.2f\n", taxes);
    }
    if (money > 4500) {
        taxes = 1000*0.08;
        taxes = taxes + 1500*0.18;
        taxes = taxes + (money-4500)*0.28;
        printf("R$ %.2f\n", taxes);
    }
    
 
    return 0;
}