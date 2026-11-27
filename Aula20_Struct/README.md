# Aula 20 - Struct em C

Arquivos:
- `cadastro_funcionarios.c` - **Questao 17 (entrega GitHub)**: cadastra dois funcionarios, mostra os dados, identifica o maior salario e calcula a diferenca.
- `questao11_funcionario.c` - estrutura Funcionario (nome, idade, salario).
- `questao12_corrigido.c` - codigo da questao 12 corrigido.
- `questao14_veiculo.c` - estrutura Veiculo (modelo, ano, valor).
- `questao15_aluno.c` - estrutura Aluno com media e situacao.
- `questao16_corrigido.c` - codigo da questao 16 corrigido.

## Questoes objetivas
1. **b)** Agrupar informacoes relacionadas.
2. **a)** Ponto (`.`).
3. **a)** `Pessoa pessoa1;`
4. **c)** Um ponto e virgula apos `Produto`.
5. **b)** `Pessoa pessoa1;`
6. **a)** `pessoa1.idade = 25;`
7. **a)** O vetor armazena elementos do mesmo tipo; a struct pode agrupar campos de tipos diferentes.
8. **b)** Cria um nome alternativo para um tipo.
9. **b)** Sim, e cada uma possui seus proprios campos.
10. **a)** Sim.

## Questao 12
a) Os especificadores nao combinam com os tipos: `aluno1.nome` (string) foi impresso com `%d` e `aluno1.idade` (int) com `%f`. Apenas `%.1f` para `nota` esta correto.
b) `%s`.
c) `%d` (ou `%i`).
d) Nao. O campo `nome` nunca recebeu valor (contem lixo de memoria). E preciso atribuir com `strcpy(aluno1.nome, "...")` ou ler com `scanf`/`fgets`.

## Questao 13
a) `Produto`.
b) `codigo` (int), `nome` (char[50]) e `preco` (float).
c) O operador ponto (`.`), ex.: `produto1.codigo`.

## Questao 16
Falta o ponto e virgula apos `} Pessoa`. Correto: `} Pessoa;`
