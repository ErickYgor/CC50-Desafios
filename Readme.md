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