# Variadic_Functions

Este repositório serve como um recurso de aprendizado para compreender funções variádicas na programação em C. Ele inclui exemplos práticos que demonstram o uso da biblioteca `stdarg.h` e funções essenciais como `va_start`, `va_arg`, etc. Explore o código para adquirir proficiência no tratamento de funções com um número variável de argumentos, uma funcionalidade poderosa na programação em C.

## Introdução

Funções variádicas aceitam uma quantidade variável de parâmetros, o que é um conceito fundamental para entender. Até agora, sabemos que toda função precisa ter um número definido de parâmetros, mas como a função `printf` aceita um número arbitrário de argumentos? A resposta está na biblioteca `stdarg.h`. Ela contém as funções `va_start`, `va_arg`, `va_copy` e `va_end`, que nos permitem trabalhar com funções variádicas.

### Biblioteca `stdarg.h`

A inclusão da biblioteca `stdarg.h` declara um tipo chamado `va_list` e define três macros para percorrer uma lista de argumentos cuja quantidade e tipos são indefinidos na chamada da função. A biblioteca `stdarg.h` é uma ferramenta essencial para lidar com funções que aceitam um número variável de argumentos.

<p align="center">
  <img src="Screenshot from 2023-10-17 14-00-09.png" alt="man stdarg">
</p>

## Exemplos de Uso

A melhor maneira de entender as funções variádicas é através de exemplos práticos. A seguir, apresentamos um exemplo simples de como usar as funções `va_start` e `va_arg`:
<pre><code>
#include &lt;stdio.h&gt;
#include &lt;stdarg.h&gt;

int sum(int num_args, ...) 
{
    va_list args;
    
    int total = 0;
    va_start(args, num_args);

   int i = 0;
   while (i < num_args)
   {
    total += va_arg(args, int);
    i++;
  }

    va_end(args);

    return total;
}

int main() 
{
    int total = sum(4, 10, 20, 30, 40);
    printf("The sum is: %d\n", total);
    return 0;
}
</code></pre>
Neste exemplo, a função soma aceita um número variável de argumentos inteiros e retorna a soma deles.

## Como Compilar e Executar
Para compilar o exemplo acima, utilize um compilador C, como o gcc, da seguinte forma:
<code>
gcc exemplo.c -o exemplo
</code>
Em seguida, execute o programa gerado:

<code>
./exemplo
</code>

[🌐Read this README in English](./README_EN.md)
