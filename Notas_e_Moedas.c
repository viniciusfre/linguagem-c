
#include <stdio.h>
int main() {
    double N;
    int A,B,C,D,E,F,G,H,I,J,K,L;//centavos
    scanf("%lf",&N);
    A= N*100;
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",A/10000);
    B = A%10000;
    printf("%d nota(s) de R$ 50.00\n",B/5000);
    C = B%5000;
    printf("%d nota(s) de R$ 20.00\n",C/2000);
    D = C%2000;
    printf("%d nota(s) de R$ 10.00\n",D/1000);
    E = D%1000;
    printf("%d nota(s) de R$ 5.00\n",E/500);
    F = E%500;
    printf("%d nota(s) de R$ 2.00\n",F/200);
    G = F%200;
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n",G/100);
    H = G%100;
    printf("%d moeda(s) de R$ 0.50\n",H/50);
    I = H%50;
    printf("%d moeda(s) de R$ 0.25\n",I/25);
    J = I%25;
    printf("%d moeda(s) de R$ 0.10\n",J/10);
    K = J%10;
    printf("%d moeda(s) de R$ 0.05\n",K/5);
    L = K%5;
    printf("%d moeda(s) de R$ 0.01\n",L);
    

    

    return 0;
}

