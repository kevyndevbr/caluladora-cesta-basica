#include <stdio.h>  // Biblioteca padrão de entrada e saída

int main() {
    // Declaração das variáveis
    float num1, num2, resultado;
    char operador;

    // Exibe o menu de operações
    printf("=== Calculadora Básica em C ===\n");
    printf("Escolha uma operação (+, -, *, /): ");
    scanf(" %c", &operador); // Lê o operador digitado pelo usuário

    // Solicita os números
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Estrutura condicional para realizar o cálculo conforme o operador
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '/':
            // Verifica se o divisor é diferente de zero para evitar erro
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            } else {
                printf("Erro: divisão por zero não é permitida!\n");
            }
            break;

        default:
            printf("Operação inválida!\n");
            break;
    }

    return 0; // Indica que o programa terminou corretamente
}
