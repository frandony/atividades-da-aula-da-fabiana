# Aula 16 - Strings em C

## Atividade e exercicios de fixacao
1. `01_contador_caracteres.c` - conta caracteres com `for`, sem `strlen`
2. `02_nome_completo.c` - le e exibe o nome completo (`fgets`)
3. `03_primeiro_caractere.c` - exibe apenas o primeiro caractere
4. `04_caractere_por_linha.c` - exibe cada caractere em uma linha
5. `05_contar_vogais.c` - conta as vogais (letras minusculas)

## Revisao de conteudo
6. **char x string:** `char` guarda um unico caractere (aspas simples, `'A'`); uma string e um vetor de `char` terminado em `'\0'` (aspas duplas, `"Maria"`).
7. O `'\0'` marca o fim da string. Sem ele, funcoes como `printf("%s")` e os lacos nao sabem onde o texto termina e passam a ler memoria alem do vetor.
8. `scanf("%s")` para de ler no primeiro espaco em branco (so le uma palavra). `fgets` le a linha inteira, inclusive espacos, respeitando o tamanho do vetor, mas pode manter o `'\n'` no final.
