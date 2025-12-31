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

<br>
<br>

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
