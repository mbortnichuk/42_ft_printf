#include "ft_printf.h"
#include "libft/libft.h"
#include <stdio.h>
#include <limits.h>
#include <locale.h>
#include <stdlib.h>
#include <unistd.h>
#include <wchar.h>

/*
** Compile with those flags to hide all unnesessary warnings ->
** -Wno-format-invalid-specifier -Wno-format -Wno-macro-redefined -Wno-implicitly-unsigned-literal
** or use run.sh
*/

int main(void)
{
	setlocale(LC_ALL, "");

	char	*str = "hello world, greetings!";
	wchar_t	*wstr = L"合気道 বিডাল এং ሰዎች 米שա";
	char 	c = 'a';
	char	*src = (char*)malloc(sizeof(char));
	//int		u = 42;
	//int		nbr = -42;
	int		x = 42;
	
	// printf("Decimal signed 1 (d): |%d| |%d|\n", 42, -42);
	// ft_printf("FT_Decimal signed 1 (d): |%d| |%d|\n", 42, -42);
	// printf("Deciaml signed 2 (i): |%i| |%i|\n", 42, -42);
	// ft_printf("FT_Decimal signed 2 (i): |%i| |%i|\n", 42, -42);
	// printf("Decimal 3 (D): |%D| |%D|\n", 42, -42);
	// ft_printf("FT_Decimal 3 (D): |%D| |%D|\n", 42, -42);

	// ft_printf("%-6d\n", -42);
	// printf("%-6d\n", -42);

	// ft_putnbr(printf("or: %s\n", NULL));
	// ft_putnbr(ft_printf("ft: %s\n", NULL));
	//printf("ORIG2: %S\n", L"@@");
	//ft_printf("FT2: %S\n", L"@@");
	// ft_putnbr(printf("1: |%C| |%C| |%C|\n", L'米', L'ש', L'ա'));
	// ft_putnbr(ft_printf("2: |%C| |%C| |%C|\n", L'米', L'ש', L'ա'));
	// ft_putnbr(printf("OR: |%S| |%S| |%S|\n", L"合気道", L"বিডাল এং", L"ሰዎች"));
	// ft_putnbr(ft_printf("FT: |%S| |%S| |%S|\n", L"合気道", L"বিডাল এং", L"ሰዎች"));
	ft_putnbr(printf("OR: |%5.3S| |%5S| |%.5S| |%-.6S| |%-07.5S|\n", wstr, wstr, wstr, wstr, wstr));
	ft_putnbr(ft_printf("FT: |%5.3S| |%5S| |%.5S| |%-.6S| |%-07.5S|\n" , wstr, wstr, wstr, wstr, wstr));
	// printf("OR1: |%5.3s| |%15.15s|\n", str, str);
	// ft_printf("FT1: |%5.3s| |%15.15s|\n", str, str);
	// printf("OR: |%-7.3s| |%-2.7s| |%-.8s|\n", str, str, str);
	// ft_printf("FT: |%-7.3s| |%-2.7s| |%-.8s|\n", str, str, str);
	// ft_putnbr(printf("OR: %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플'));
	// ft_putnbr(ft_printf("FT: %s%d%p%%%S%D%i%o%O%u%U%x%X%c%C\n","bonjour", 42, &c, L"暖炉", LONG_MAX, 42, 42, 42, 100000, ULONG_MAX, 42, 42, 'c', L'플'));
	// printf("OR2: %s\n", str);
	// ft_printf("FT2: %s\n", str);
	// printf("OR: %c\n", c);
	// ft_printf("FT: %c\n", c);
	// printf("OR: |%c| |%-2c| |%-2.3c| |%+3c| |%-03c|\n", c, c, c, 65, 65);
	// ft_printf("FT: |%c| |%-2c| |%-2.3c| |%+3c| |%-03c|\n", c, c, c, 65, 65);
	//printf("OR: %d\n", nbr);
	//ft_printf("FT: %d\n", nbr);
	//printf("OR: %i\n", nbr);
	//ft_printf("FT: %i\n", nbr);
	// printf("OR: %hU\n", 4294967296);
	// ft_printf("FT: %hU\n", 4294967296);
	// printf("OR x: %hhx\n", x);
	// ft_printf("FT x: %hhx\n", x);
	// printf("OR X: %X\n", x);
	// ft_printf("FT X: %X\n", x);
	// printf("%#x\n", x);
	// ft_printf("%#x\n", x);
	// printf("OR: %#X\n", x);
	// ft_printf("FT: %#X\n", x);
	// ft_putnbr(printf("OR: %o\n", x));
	// ft_putnbr(ft_printf("FT: %o\n", x));
	// printf("OR: %#o\n", x);
	// ft_printf("FT: %#o\n", x);
	// printf("OR: %O\n", x);
	// ft_printf("FT: %O\n", x);
	// printf("OR: %#O\n", x);
	// ft_printf("FT: %#O\n", x);
	// printf("OR p: %p\n", src);
	// ft_printf("FT p: %p\n", src);
	// ft_putnbr(printf("1: %%\n"));
	// ft_putnbr(ft_printf("2: %%\n"));
	// printf("OR: %hhO, %hhO\n", 0, USHRT_MAX);
	// ft_printf("FT: %hhO, %hhO\n", 0, USHRT_MAX);

	
	//char	s[100] = "12345";
	//printf("%s\n", ft_strrev(s));

	// printf("1o: %*x\n", 4, 42);
	// printf("2o: %4x\n", 42);
	// ft_printf("1f: %*x\n", 4, 42);
	// ft_printf("2f: %4x\n", 42);

	
	//while(1);
	
	//system("leaks ftest");

	return(0);
}
