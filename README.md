# 🧮 Solução de Sistemas de Equações Lineares em C (Abordagem Matricial)

> Aplicação em linguagem C para leitura, estruturação e resolução de sistemas de equações lineares através do método de eliminação e manipulação de matrizes.

---

## 📖 Sobre o Projeto

Este projeto foi desenvolvido para a disciplina de **Análise de Algoritmos**. O objetivo principal é receber a representação de um sistema de equações lineares a partir de arquivos de entrada (`.in`) e calcular o valor das variáveis que satisfazem o sistema.

O programa processa a matriz aumentada do sistema, realizando operações elementares nas linhas para obter a solução das incógnitas de forma automatizada.

---

## ✨ Funcionalidades

- 📥 **Parsing de Arquivos de Entrada (`.in`):** Leitura dinâmica de arquivos contendo o número de equações/variáveis e a matriz de coeficientes com os termos independentes.
- 📐 **Manipulação Matricial:** Operações de transformações de linhas e substituição regressiva/progressiva para resolução do sistema.
- 📤 **Formatação de Saída:** Exibição clara e precisa dos valores das variáveis encontradas, compatível com os arquivos de validação (`.out`).
- ⚡ **Desempenho e Memória:** Implementação eficiente em C puro, com controle preciso de ponteiros e estruturas matriciais.

---

## 🛠️ Tecnologias e Conceitos Utilizados

- **Linguagem:** C (C99)
- **Compilador:** GCC
- **Entrada e Saída (I/O):** Manipulação de arquivos com `<stdio.h>` (`fopen`, `fscanf`, `fclose`).
- **Conceitos de Computação/Matemática:** Álgebra Linear, Sistemas de Equações Lineares, Eliminação de Gauss, Matrizes Aumentadas, Alocação Dinâmica e Ponteiros.

---

## 🚀 Como Compilar e Executar

### Pré-requisitos

Ter o compilador GCC instalado em seu ambiente (Linux, macOS ou Windows via MinGW/WSL).

### 1. Compilação

Navegue até a pasta raiz do repositório e compile o arquivo C:

```bash
gcc src/solucao_matricial.c -o solucao_matricial
```
### 2. Execução

Execute o binário passando ou redirecionando o arquivo de entrada desejado:

```Bash
# Execução redirecionando o arquivo de entrada via terminal (Linux/macOS):
./solucao_matricial < tests/input-A.in

# Ou rodando o programa diretamente (caso o nome do arquivo seja solicitado via teclado):
./solucao_matricial
```
---

## 📊 Exemplo de Entrada e Saída

Exemplo de Entrada (input-A.in)

```plaintext
3
2 1 -1 8
-3 -1 2 -11
-2 1 2 -3
```
(Onde o primeiro valor 3 indica a ordem do sistema $3 \times 3$, seguido da matriz aumentada de coeficientes).

Exemplo de Saída Esperada

```Plaintext
x1 = 2.00
x2 = 3.00
x3 = -1.00
```
---

## ✒️ Autor

Desenvolvido por Leonardo Milanez da Cunha Prado 📍 Estudante de Ciências da Computação


## 📁 Estrutura do Repositório

```text
.
├── src/
│   └── solucao_matricial.c    # Código-fonte principal com a resolução do sistema
│   ├── input-A.in             # Caso de teste A (Entrada)
│   ├── input-B.in             # Caso de teste B (Entrada)
│   └── output-expected.out    # Saída esperada para validação dos resultados
└── README.md
