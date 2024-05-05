# Calculadora de IMC (Índice de Massa Corporal)

Este é um programa simples em C que calcula o Índice de Massa Corporal (IMC) com base na altura, peso e sexo fornecidos pelo usuário.

## Como Funciona

O programa solicita ao usuário que insira sua altura (em metros), peso (em quilogramas) e sexo (masculino ou feminino). Com base nesses dados, calcula o IMC usando a fórmula IMC = peso / (altura * altura) e fornece uma classificação do IMC.

## Requisitos

- Compilador C
- Biblioteca math.h (para a função pow())

## Como Executar

1. Certifique-se de ter um compilador C instalado em seu sistema.
2. Abra um terminal na pasta onde está o arquivo fonte (`calcular_imc.c`).
3. Compile o programa usando o compilador C. Por exemplo, usando o GCC:
   ```bash
   gcc -o calcular_imc calcular_imc.c -lm
   ```
   Note que o parâmetro `-lm` é necessário para vincular a biblioteca math.h.
4. Execute o programa:
   ```bash
   ./calcular_imc
   ```

## Exemplo de Uso

```
Digite a sua altura: 1.75
Digite o seu peso atual: 70
Digite o sexo [m]asculino ou [f]eminino : m

O Índice de Massa Corporal = 22.857143

Normal
```

## Contribuição

Contribuições são bem-vindas! Sinta-se à vontade para abrir uma issue ou enviar um pull request.

## Licença

Este projeto está licenciado sob a [Licença MIT](LICENSE).
