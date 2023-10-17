# Variadic_Functions

Este repositório funciona como um recurso de aprendizado para entender funções variádicas na programação em C. Ele inclui exemplos práticos que demonstram o uso da biblioteca stdarg.h e funções essenciais como va_start, va_arg, etc. Explore o código para adquirir proficiência no tratamento de funções com um número variável de argumentos, uma funcionalidade poderosa na programação em C.

## Introduction

Uma função variádica tem um conceito bem simples de se entender: ela é uma função que aceita uma quantidade x (variável) de parâmetros. Mas vamos entender melhor como isso funciona pois até agora o que sabemos é que toda função precisa ser precisamente definida para funcionar, ou seja, o protótipo da função define claramente para o compilador o que ele deve interpretar. Se pensarmos na função <strong>write()</strong>, por exemplo, sabemos que ela precisa de 3 argumentos para funcionar: o descritor de arquivo para onde desejamos escrever os dados, um ponteiro para área da memória que contém os dados que queremos escrever e o número de bytes que queremos escrever a partir do buffer. Como você pode perceber o protótipo da função write é claramente definido e ela não vai funcionar se não passarmos exatamente esses três parâmetros.
Pensando nisso, como será que a <strong>printf</strong> funciona? Nós sabemos que podemos passar a quantidade de parâmetros que quisermos para dentro dela mas não sabemos como isso funciona. Para começar a desvendar esse mistério nós vamos precisar entender uma nova biblioteca e alguns conceitos que são definidos nela: a <stdarg.h>. 
Essa biblioteca contém tudo o que precisamos para poder usar as seguintes funções variádicas: <strong>va_start</trong>, <strong>va_arg</trong>, <strong>va_copy</trong> e <strong>va_end</trong>. Se olharmos o manual da biblioteca (man stdarg), vamos perceber que existem funções que podem ser chamadas com um número indefinido de parâmetros que podem ser dos mais diversos tipos de dados. Incluir a biblioteca <stdarg.h> declara um tipo chamado <strong>va_list</strong> e define 3 macros para percorrer uma lista de argumentos cuja a quantidade e os tipos são indefinidos na hora da chamada da função.
Ou seja, a bibilioteca <stdarg.h> contém um tipo específico de dado que chamamos de <strong>va_list</strong> e três macros que nos permitem trablhar com funções variádicas


