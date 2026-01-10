# Repositório de Desafios CC50

Este repositório reúne os desafios e exercícios realizados durante o curso **CC50 - Introdução à Ciência da Computação**, inspirado no CS50 de Harvard e disponibilizado pela Fundação Estudar.  
O objetivo deste repositório é documentar minha evolução na linguagem C e em conceitos fundamentais de programação, como lógica, estruturas de repetição, validação de entrada, funções e boas práticas de desenvolvimento.

Ao longo das pastas, você encontrará cada desafio separado com:
- Uma explicação/resumo do exercício
- Código-fonte em C
- Exemplos de funcionamento
- Como compilar e executar no VS Code

Este repositório será atualizado conforme avanço no curso. 🚀



## 🛠️ Como Compilar e Executar

- Antes de compilar, é necessário instalar:
- GCC (compilador de C)

    https://sourceforge.net/projects/mingw/

    Durante a instalação, selecione os seguintes pacotes:<br>
    ✔ mingw32-gcc-g++ <br>
    ✔ mingw32-gcc-objc (opcional)<br>
    ✔ mingw32-base<br>
    ✔ msys-base (opcional, mas recomendado)

    Windows Search → Editar variáveis de ambiente
    Variáveis de Ambiente → Path → Editar
    Novo → C:\MinGW\bin
    OK → OK → OK

- Extensão **C/C++ (Microsoft)** no VS Code

---

### 1 Mario
<details>
<summary>🧱 Pirâmide Alinhada à Direita</summary>

Neste desafio do CC50, inspirado no final do nível World 1-1 de Super Mario Bros, o objetivo é recriar em C uma pirâmide de tijolos representada com `#`, alinhada à direita.

## 🎯 Objetivo do Programa
- Solicitar ao usuário um inteiro entre 1 e 8 para definir a altura.
- Validar a entrada (repetir até ser um valor válido).
- Construir e exibir uma pirâmide alinhada à direita, crescente de cima para baixo.

## 📌 Exemplos de Funcionamento

Entrada: 4
```
   #
  ##
 ###
####
```

Entrada: 8
```
       #
      ##
     ###
    ####
   #####
  ######
 #######
########
```
## 📏 Regras Gerais
- A altura deve estar entre 1 e 8 (inclusive).
- Cada linha terá:
  - Espaços à esquerda
  - Hashes `#` à direita
- A quantidade de linhas é igual ao tamanho informado.

### ▶️ Como Compilar e Executar (Mario)

Para rodar o programa `mario.c`, abra o terminal na pasta onde o arquivo está localizado (Pasta com nome: Exercicio1) e execute os seguintes comandos:

gcc mario.c -o mario <br>
./mario.exe

</details>

---

### 2 MarioDesafio
<details>
<summary>🍄 Pirâmides Duplas</summary>

Neste segundo desafio do CC50, inspirado no início do mundo **World 1-1 de Super Mario Bros**, o objetivo é construir **duas pirâmides de tijolos** lado a lado, usando `#`, separadas por dois espaços, e alinhadas conforme a altura escolhida pelo usuário.

## 🎯 Objetivo do Programa
- Solicitar ao usuário um inteiro entre **1 e 8**.
- Validar a entrada (repetir até ser um valor válido).
- Construir duas pirâmides espelhadas, separadas por **dois espaços**.
- Exibir o resultado em formato de texto no terminal.

## 📌 Exemplos de Funcionamento

Entrada: 4
```
   #  #
  ##  ##
 ###  ###
####  ####
```

Entrada: 8
```
       #  #
      ##  ##
     ###  ###
    ####  ####
   #####  #####
  ######  ######
 #######  #######
########  ########
```


## 📏 Regras Gerais
- A altura deve estar entre **1 e 8** (inclusive).
- Cada linha terá:
  - Espaços à esquerda
  - Hashes `#` da primeira pirâmide
  - **Um espaços** central
  - Hashes `#` da segunda pirâmide
- Se o usuário errar o valor, deve perguntar novamente.


### ▶️ Como Compilar e Executar (Mario)

Para rodar o programa `marioDesafio.c`, abra o terminal na pasta onde o arquivo está localizado (Pasta com nome: Exercicio2) e execute os seguintes comandos:

gcc marioDesafio.c -o marioDesafio <br>
./marioDesafio.exe
</details>

---

### 3 Cash
<details>
<summary>💰 Algoritmos Gulosos (Troco Mínimo)</summary>

Neste desafio do CC50, o objetivo é implementar um **algoritmo guloso (ambicioso)** para calcular o **menor número possível de moedas** necessário para fornecer o troco a um cliente.

O problema é inspirado no funcionamento real de um caixa, que sempre escolhe a **maior moeda possível** a cada passo, reduzindo o valor restante até chegar a zero.

As moedas disponíveis são:
- 25 centavos
- 10 centavos
- 5 centavos
- 1 centavo

---

## 🎯 Objetivo do Programa
- Solicitar ao usuário um valor monetário **não negativo** (em reais, usando ponto).
- Repetir a solicitação enquanto o valor informado for inválido ou negativo.
- Converter o valor de reais para centavos, evitando erros de ponto flutuante.
- Calcular o **número mínimo de moedas** necessárias usando um algoritmo guloso.
- Imprimir **apenas um número inteiro** (total de moedas) como saída final.

---

## 🧠 Conceito Utilizado
- **Algoritmo Guloso (Greedy Algorithm)**:
  - Sempre escolhe a melhor solução local (maior moeda possível).
  - Para o sistema de moedas utilizado (25, 10, 5 e 1), essa estratégia também gera a solução ótima global.

---

## 📌 Exemplos de Funcionamento

Entrada: 0.41

```
Saída: 4
```
--- 

Entrada Invalida:

```
números negativos
letras
números com vírgula
```

## 📏 Regras Gerais
- O valor deve ser **maior ou igual a 0**.
- A entrada é feita com ponto (`.`), não vírgula.
- O valor é convertido de `float` para `int` (centavos) usando `round`.
- A última linha do programa deve conter **somente o número mínimo de moedas**.

---

## ▶️ Como Compilar e Executar (Cash)

Para rodar o programa `cash.c`, abra o terminal na pasta onde o arquivo está localizado  
(Pasta com nome: `Exercicio3`) e execute os seguintes comandos:

gcc cash.c -o cash  
./cash.exe

</details>

---

### 4 Credit
<details>
<summary>💳 Validação de Cartão de Crédito (Algoritmo de Luhn)</summary>

Neste desafio do CC50, o objetivo é criar um programa em C capaz de **validar números de cartão de crédito** e identificar sua bandeira (**AMEX, MASTERCARD ou VISA**) utilizando o **Algoritmo de Luhn**.

Os números de cartão possuem uma estrutura específica e uma soma de verificação (checksum) que permite detectar erros de digitação. O programa deve verificar essa soma e, se válida, analisar o formato do número para determinar a bandeira correta.

---

## 🎯 Objetivo do Programa
- Solicitar ao usuário um número de cartão de crédito **inteiramente numérico**.
- Aplicar o **Algoritmo de Luhn** para validar o número.
- Identificar a bandeira do cartão com base:
  - No número de dígitos
  - Nos dígitos iniciais
- Exibir **apenas uma palavra** como saída final:
  - `AMEX`
  - `MASTERCARD`
  - `VISA`
  - `INVALID`

---

## 🧠 Conceitos Utilizados
- Algoritmo de Luhn (checksum)
- Estruturas de repetição
- Operações matemáticas com dígitos
- Validação de entrada
- Uso de tipos numéricos maiores (`long`)

---

## 📌 Regras de Validação

### Algoritmo de Luhn
1. Multiplicar por 2 cada segundo dígito, começando pelo penúltimo.
2. Somar os dígitos dos produtos obtidos.
3. Somar esse valor aos dígitos que não foram multiplicados.
4. Se o total for múltiplo de 10, o cartão é válido.

### Identificação das Bandeiras
- **AMEX**
  - 15 dígitos
  - Começa com 34 ou 37
- **MASTERCARD**
  - 16 dígitos
  - Começa com 51, 52, 53, 54 ou 55
- **VISA**
  - 13 ou 16 dígitos
  - Começa com 4

Se nenhuma regra for atendida, o cartão é considerado inválido.

---

## 📌 Exemplos de Funcionamento

Entrada: 4003600000000014

```
Saída: VISA
```

---

## 📏 Regras Gerais
- O input deve ser apenas numérico (sem hífens).
- A **última linha de saída** deve ser exatamente uma das opções válidas, seguida de `\n`.

---

## ▶️ Como Compilar e Executar (Credit)

Para rodar o programa `credito.c`, abra o terminal na pasta onde o arquivo está localizado  
(Pasta com nome: `Exercicio4`) e execute os seguintes comandos:

gcc credito.c -o credito 
./credito.exe

</details>

---

### 5 Population
<details>
<summary>🦙 Crescimento Populacional</summary>

Neste laboratório do CC50, o objetivo é calcular quantos anos são necessários para que uma população de lhamas cresça de um tamanho inicial até atingir ou ultrapassar um tamanho final, seguindo regras específicas de crescimento e mortalidade anual.

## 📘 Contexto
A cada ano:
- Nascem `n / 3` novas lhamas
- Morrem `n / 4` lhamas
- Valores decimais são truncados (não existem frações de lhamas)

Exemplo:
- População inicial: 1200  
- Nascimentos: 1200 / 3 = 400  
- Mortes: 1200 / 4 = 300  
- População final do ano: 1300

## 🎯 Objetivo do Programa
- Solicitar ao usuário o tamanho inicial da população
- Garantir que o valor inicial seja **maior ou igual a 9**
- Solicitar o tamanho final da população
- Garantir que o valor final seja **maior ou igual ao valor inicial**
- Calcular quantos anos são necessários para atingir ou ultrapassar o tamanho final
- Exibir o número de anos no formato adequado

## 📌 Exemplo de Funcionamento

Número inicial: 100
Número final: 200

Anos = 9

## 📏 Regras Gerais
- O tamanho inicial deve ser **≥ 9**
- O tamanho final deve ser **≥ tamanho inicial**
- O cálculo deve considerar apenas valores inteiros
- O programa deve repetir as perguntas até receber entradas válidas

## 🧠 Lógica Utilizada
- Loop `do while` para validação de entrada
- Loop `while` para simular o crescimento anual da população
- Contador para armazenar o número de anos passados

### ▶️ Como Compilar e Executar (Population)

No terminal, dentro da pasta onde está o arquivo `nascimento.c`, execute:

gcc nascimento.c -o nascimento  
./nascimento

</details>

---

### 6 Scrabble
<details>
<summary>🔤 Jogo Scrabble (Pontuação de Palavras)</summary>

Neste desafio do CC50, o objetivo é simular uma versão simples do jogo **Scrabble**, comparando duas palavras digitadas por jogadores diferentes e determinando qual delas possui a maior pontuação.

## 📘 Contexto
No Scrabble, cada letra do alfabeto possui um valor de pontos específico.  
A pontuação de uma palavra é a soma dos pontos de todas as suas letras.

Exemplo:
- Palavra: Code
- Pontuação: C (3) + O (1) + D (2) + E (1) = 7 pontos

## 🎯 Objetivo do Programa
- Solicitar uma palavra para o **Jogador 1**
- Solicitar uma palavra para o **Jogador 2**
- Calcular a pontuação de cada palavra com base nos valores das letras
- Comparar as pontuações
- Informar o vencedor ou se houve empate

## 📌 Exemplo de Funcionamento

Player 1: COMPUTER
Player 2: science
Player 1 wins!

## 📏 Regras Gerais
- Letras maiúsculas e minúsculas possuem o **mesmo valor**
- Caracteres que **não são letras** valem **0 pontos**
- Não é necessário verificar se a palavra existe em um dicionário
- O programa deve comparar apenas as pontuações finais

## 🧠 Lógica Utilizada
- Uso de um array `POINTS` para armazenar o valor de cada letra
- Função auxiliar `compute_score()` para calcular a pontuação de uma palavra
- Funções da biblioteca `ctype.h` para identificar letras maiúsculas e minúsculas
- Estrutura condicional para determinar o vencedor

### ▶️ Como Compilar e Executar (Scrabble)

No terminal, dentro da pasta onde está o arquivo `palavra.c`, execute:

gcc palavra.c -o palavra  
./palavra