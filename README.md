# CS50

Curos de ciência da computação de Harvard CS50 pelo site do [Na Prática](https://ead.estudar.org.br/c/cc50-o-curso-de-ciencia-da-computacao-de-harvard-no-brasil/) !

No curso usamos a [*IDE*](https://ide.cs50.io) própria do CS50

# Biblioteca CS50

O curso tem sua própria biblioteca para lidar com informações do usuário, podemos capturar dados que são digitado para todos os tipos com get_<tipo>:

get_string("prompt:");
get_int
get_float
get_double
ger_char

Para termos acesso à essas funções, porecisamos incluir a library, como no exemplo:

```c
// incluíndo a biblioteca
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // chamando a função
    string nome = get_string("Qual seu nome: ")
    printf("Olá, %s!\n", nome);
}
```

Porém ela está no ambiente de desenvolvimento integrado do curso. Para que eu tivesse acesso na minha máquina local, acessei o [repositório da library](https://github.com/cs50/libcs50) e fiz o download como orientado no READEME.

Tive dificuldade ao compilar mesmo seguindo os passos orientado, porém refiz o processo de instalação conforme esses passos da [documentação](https://cs50.readthedocs.io/libraries/cs50/c/):

```shell
// ubuntu (sistema que eu utilizo
$ curl -s https://packagecloud.io/install/repositories/cs50/repo/script.deb.sh | sudo bash
$ sudo apt install libcs50
```

Depois do Download, precisei  definir as variáveis de ambiente no ~/.bashrc
- Para acessar as variáveis digite no terminal: nano ~/.bashrc
```txt
CC="clang"
CFLAGS="-ferror-limit=1 -gdwarf-4 -ggdb3 -O0 -std=c11 -Wall -Werror -Wextra -Wno-gnu-folding-constant -Wno-sign-compare -Wno-unused-parameter -Wno-unused-variable -Wno-unused-but-set-variable -Wshadow"
LDLIBS="-lcrypt -lcs50 -lm"
```

Reiniciei o bash:
```Shell
source ~/.bashrc
```

Instalei o **clang**
```Shell
sudo apt-get install clang
```

Após esse passo a passo consegui seguir compilando os códigos com o uso da library do CS50 usando o ***make***



