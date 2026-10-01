# Módulo introdutório do [**CS50**](https://cs50.harvard.edu)

## Unário (Base 1)

- Representação de 0 a 5 contando com os dedos de uma mão
- Conta normal, levantando um dedo por vez

## Base 2 (Binário)

- Representação de 0 a 31 com 5 dedos, contando padrões ao invés de quantidade

| Valor | Padrão    | Descrição                                           |
| ----- | --------- | --------------------------------------------------- |
| 0 =   | 0 0 0 0 0 | Nenhum dedo levantado                               |
| 1 =   | 1 0 0 0 0 | 1 dedo levantado (Polegar) = 1                      |
| 2 =   | 0 1 0 0 0 | 1 dedo levantado (Indicador) = 2                    |
| 3 =   | 1 1 0 0 0 | 2 dedos levantados (Polegar + Indicador) = 1 + 2    |

- **Binary Digit** ou **Bit** é um representador único de 0 ou 1
- Cada posição vale uma potência de 2 (1, 2, 4, 8, 16...) e o número é a soma das posições ligadas

## Byte

- Um byte são 8 bits

| 128 | 64 | 32 | 16 | 8 | 4 | 2 | 1 |
| --- | -- | -- | -- | - | - | - | - |
| 0   | 0  | 0  | 0  | 0 | 0 | 0 | 0 |

- 256 possibilidades no total em um byte (de 0 a 255)

## ASCII

- Representação de letras, números ou caracteres no geral usando um byte (o ASCII original usa 7 bits, 128 caracteres; com 8 bits é o "ASCII estendido"). Foi a primeira representação de caracteres, e por isso não suporta caracteres que o inglês não utiliza, como acentos e alfabetos não latinos.

## Unicode

- É o padrão que atribui um número a cada caractere. Os números cabem em até 21 bits e são codificados em 1 a 4 bytes (UTF-8).
- Consegue representar as línguas do mundo, além de emojis.

## RGB

- Cada pixel utiliza **3 bytes**: 1 byte para vermelho, 1 para verde e 1 para azul.

| vermelho | verde | azul |
| -------- | ----- | ---- |
| 255      | 255   | 255  |
| 2⁸ − 1   | 2⁸ − 1 | 2⁸ − 1 |

- 255 = `11111111` (8 bits todos ligados)

## Representação de outras condições

- Imagens são quadros inteiros de uma resolução específica. Se multiplicarmos um quadro de **1920x1080**, teremos **2.073.600** pixels, e cada pixel usa **3 bytes** de cor, ou **RGB**.
- Agora pegue diversas imagens em sequência, como várias fotos tiradas, e exiba-as em alta taxa, por exemplo 60 imagens por segundo ou **FPS**. Então você criou o **vídeo**.
- O som é representado por suas características, como a nota (altura/frequência), a duração e o volume (amplitude). Combinando isso com as imagens, o vídeo passa a ter som.

## Algoritmos

- Pegue um livro de 1000 páginas e tente procurar por um nome específico. Ao invés de procurar da primeira até a última página (busca linear, até 1000 passos), faça:
  - Abra no meio do livro
  - Descarte a metade em que o nome não pode estar
  - Repita com a metade restante (busca binária)
- Assim são ~10 passos para 1000 páginas (log₂ 1000 ≈ 10).
- Código é a **implementação** de um algoritmo em uma linguagem.

## Compilador

- Traduz o código-fonte (linguagem de programação) para código de máquina (binário)

## Início de Scratch
