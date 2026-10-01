# Módulo de linguagem C

1. É importante entendermos como é o processo de execução de um script em uma linguagem:

```mermaid
flowchart LR
  A[Source Code] --> B[Compiler]
  B --> C[Machine Code]
```

## Finalidade do comando `\n` em printf e mais outros comandos

Ele serve principalmente para quando for executado por uma CLI, a linha de comando não fique a frente do output, e existem diversos tipos de comandos como:

1. `\n` = move a linha de comando para uma nova linha
2. `\r` = move a linha de comando para totalmente a esquerda
3. `\"` = mostra no output aspas duplas "
4. `\\` = mostra como output contra barra \

## Finalidade do comando `#include <stdio.h>`, uma biblioteca C

- Esse comando comando está chamando uma biblioteca em C, que ao chamar a biblioteca podemos utilizar mais comandos que possuem suas definiçoes propias.

- Algumas linguagens como Python possuem comando simples como print já antecipadamente carregadas ao fazer ao realizar a execução e compilação do script, porém o C é necessario definir quais bibliotecas deverão ser utilizadas ao realizar a compilação e execução de um script

## Por que meu programa não compila?

No curso de Harvard é usado uma Makefile para compilar os arquivos em C sem precisar da definição de um comando extenso para cada vez que for necessario recompilar um script.

Primeiro você precisa configurar esse Makefile para seu uso, se você irá baixar a biblioteca e colocar em seu programa de compilação ou diretamente na pasta do projeto.

## Placeholder em cima de um printf

Para você fazer um print de uma variavel você tem que colocar um placeholder, e logo depois chamar a variavel para dentro dessa função.

`%s` = placeholder de uma string

## Comandos em linux

1. `cd` = change directory
2. `cp` = copy paste
3. `ls` = list directory
4. `mkdir` = make directory
5. `mv` = move
6. `rmdir` = remove directory

## Condicionais

`if (x < y)
{
  printf("x is less tan y\n")
} else if (y < x) 
{
  printf ("y is less thab x\n)
} else {
  printf("y is equal to x")
}`

- script de condição para verificar se um número é maior, menor ou igual a outro.

```mermaid
flowchart TD
    A([start]) --> B{x < y}
    B --> |yes| C["x is less than y"]
    C --> Z([stop])
    B --> |no| D{x > y}
    D --> |yes| E["x is more than y"]
    E --> Z
    D --> |no| F["x is equal to y"]
    F --> Z
```

## Operadores

1. `=` = atribuição de valor
2. `<` = menor que
3. `<=` = menor ou igual que
4. `>` = maior que
5. `>=` = maior ou igual que
6. `==` = igual a
7. `!=` = diferente de

## Tipos de dados

1. bool = verdadeiro ou falor
2. char = caracteres individuais
3. double = númeors decimais que armazenam até no maximo de **64 bits ou 8 bytes**
4. float = números decimais que armazenam até no maximo de **32 bits ou 4 bytes**
5. int = números inteiros que armazenam até maximo **32 bits ou 4 bytes**
6. long = números inteiro que armazenam até no maximo de **64 bits ou 8 bytes**
7. string = armazena caracteres

# Funções da biblioteca cs50

1. get_char
2. get_double
3. get_int
4. get_long
5. get_string

# Types para mostrar output tipos de valores

1. %c = printa um caractere
2. %f = printa um float
3. %i = printa um int
4. %li = printa um long ou long int
5. %s = printa uma string

# variaveis

1. como definir?
   `tipos de dado` `nome da variavel` = `valor dessa variavel`

2. como incrementar uma variavel como se fosse pontuação?
   `counter = counter + 1;` ou
   `counter += 1;` ou
   `counter++;`

## Exemplos de design ruins em condições

Colocar uma condicional if em cada uma das três possibilidades:

```mermaid
flowchart TD
  A[(start)] -->  B{x < y}
  B --> |false| C{x > y}
  B --> |true| ["x is less than y"] --> C
  C --> |false| D{x == y}
  C --> |true| ["x is greater than y"] --> D
  D --> |false| E[(stop)]
  D --> |true| ["x is equal than y"] --> E
```

Ou não colocar uma condicional else no final:

```mermaid
flowchart TD
    A([start]) --> B{x < y}
    B --> |yes| C["x is less than y"]
    B --> |no| D{x > y}
    C --> Z([stop])
    D --> |yes| E["x is more than y"]
    D --> |no| F["x is equal to y"]
    E --> Z
    F --> |yes| F
    F --> |no| Z
```

## Operadores lógicos e Loops

1. Breve apresentação do Operador `||` = ou

2. apresentação de loop em C
2.1. primeira forma (while loop):
```
int i = 0;
while (i < 3)
{
  prinf("meow\n);
  i++;
}
```
2.2. segunda forma (for loop):
```
for (int i = 0; i < 3; i++)
{
  printf("meow\n")
}
```
3. quando você é necessário que tenha um loop para sempre até que de alguma forma ele quebre apenas coloque
```
while (true)
{

}
```

4. uma maneira explicita de quebrar um loop infinito

```
while (true)
{
  n = get_int("What's n?")
  if (n >= 0)
  {
    continue;
  }
  else
  {
    break;
  }
}
```

5. do while loop
```
do
{
  n = get_int("What's n? ")
}
while (n < 0)
## problemas de escopo
```
5.1. a diferença do while loop para o while loop é que a do while primeiro faz a açao e verifica por ultimo se é real.

## problemas de escopo 

- quando uma variavel é feita dentro de um loop, condicional ou função ela apenas existe dentro do mesmo, e não funciona para fora do propio escopo

# criando funções em C

```
void meow(void)
{
  printf("meow\n);
}
```
1. **void** meow(void)
- valor de returno ou outpu

2. void meow(**void**)
- argumentos AKA input

3. void siginifica que é vazio, nesse caso, não possui output ou input

# ideas de promises em C

1. conceito de promises em c, no qual você declara que vai haver uma função y no código, só que antes de rodar a função y tem uma função x que utiliza dessa funçao y, e então você apenas precisa declarar como "promessa" que essa funçao existe

```
void meow(void);

int main(void)
{
  for (int i = 0; i < 3; i++)
  {
    meow();
  }
}

void meow(void)
{
  printf("meow\n");
}
```

## como fazer um bom código

- um código bom não é só bom por fazer o que tem de fazer, as vezes por como ele soluciona um problema, e esses três seguimentos do cs50 seguem essa regra:

1. correctness
- o código faz o que ele deveria fazer desde o inicio? ele foi projetado para realizar exatamente o que ele já realiza?

2. design
- além do código fazer o que ele tem a fazer, ele está fazendo de uma forma eficiente e correta? ele está desperdiçando memoria do computador? está desperdiçando interações do usuario?

3. style
- além de condizer as outra duas primeiras o código ele é bem explicado? possui variaveis bem explicadas? funções bem explicadas? mensagens de erros úteis?