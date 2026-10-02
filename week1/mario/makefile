# Flags padrão do compilador
CFLAGS = -Wall -Wextra -std=c99

# Linka a biblioteca cs50 automaticamente
LDLIBS = -lcs50

# Regra Genérica: Qualquer executável depende de seu respectivo arquivo .c
%: %.c
	gcc $(CFLAGS) $< $(LDLIBS) -o $@
