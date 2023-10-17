# Variadic_Functions

This repository serves as a learning resource for understanding variadic functions in C programming. It includes practical examples showcasing the usage of the stdarg.h library and essential functions like va_start, va_arg, etc. Explore the codebase to gain proficiency in handling functions with a variable number of arguments, a powerful feature in C programming.

##Introduction

Uma função variádica tem um conceito bem simples de se entender: ela é uma função que aceita uma quantidade x (variável) de parâmetros. Mas vamos entender melhor como isso funciona pois até agora o que sabemos é que toda função precisa ser precisamente definida para funcionar, ou seja, o protótipo da função define claramente para o compilador o que ele deve interpretar. Se pensarmos na função <strong>write()</strong>, por exemplo, sabemos que ela precisa de 3 argumentos para funcionar: o descritor de arquivo para onde desejamos escrever os dados, um ponteiro para área da memória que contém os dados que queremos escrever e o número de bytes que queremos escrever a partir do buffer. Como você pode perceber o protótipo da função write é claramente definido e ela não vai funcionar se não passarmos exatamente esses três parâmetros.
Pensando nisso, como será que a <strong>printf</strong> funciona? Nós sabemos que podemos passar a quantidade de parâmetros que quisermos para dentro dela mas não sabemos como isso funciona. Para começar a desvendar esse mistério nós vamos precisar entender uma nova biblioteca e alguns conceitos que são definidos nela: a <stdarg.h>


