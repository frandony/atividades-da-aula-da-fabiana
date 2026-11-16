# Aula 18 - Funcoes em C

Arquivos: `calculadora.c`, `comparador_precos.c`, `verificador_numeros.c`, `controle_estoque.c`, `formatacao_relatorios.c`, `calculadora_fatorial.c`.

## Atividade de revisao
1. `exibirMenu()` (e `exibirLinha()`): `void` sem parametros.
2. `somar`, `subtrair`, `multiplicar` e `dividir` (e `maiorPreco`) recebem dois parametros.
3. O `return` devolve o resultado da operacao ao chamador, que pode usa-lo (imprimir, guardar, somar a outra expressao).
4. O `switch` escolhe qual operacao executar a partir da opcao digitada, de forma mais clara que varios `if`/`else`.
5. O `do...while` executa o menu ao menos uma vez e repete ate o usuario escolher sair (opcao 0).
6. Dividir por zero e uma operacao indefinida e causa resultado invalido ou erro; por isso o programa verifica o divisor antes.
