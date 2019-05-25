/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbortnic <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/28 12:43:53 by mbortnic          #+#    #+#             */
/*   Updated: 2018/01/28 20:10:31 by mbortnic         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define RESET "\x1b[0m"
#define GREEN "\x1b[32m"
#define RED "\x1b[31m"
#define YELLOW "\x1b[33m"
#define BLUE "\x1b[34m"
#define MAGENTA "\x1b[35m"
#define CYAN "\x1b[36m"

/*
** To test your ft_printf you need to uncomment commented lines or to copy desired existing test and add ft_ before printf.
*/

int main(void)
{
	setlocale(LC_ALL, "");

	char *str = "hello world!";
	char *wstr = L"ድመቶች ሰዎች አልወደውም.";
	char c = 'a';
	char wc = L'道';
	char *ptr = (char*)malloc(sizeof(char));
	puts("---- custom tests ----");
	printf("Decimal signed 1 (d): |%d| |%d|\n", 42, -42);
	//ft_printf("FT_Decimal signed 1 (d): |%d| |%d|\n", 42, -42);
	printf("Deciaml signed 2 (i): |%i| |%i|\n", 42, -42);
	//ft_printf("FT_Deciaml signed 2 (i): |%i| |%i|\n", 42, -42);
	printf("Decimal 3 (D): |%D| |%D|\n", 42, -42);
	//ft_printf("FT_Decimal 3 (D): |%D| |%D|\n", 42, -42);
	printf("Character (c): |%c| |%c|\n", 'a', 65);
	//ft_printf("FT_Character (c): |%c| |%c|\n", 'a', 65);
	printf("String (s): %s\n", str);
	//ft_printf("FT_String (s): %s\n", str);
	printf("Pointer address (p): %p\n", ptr);
	// ft_printf("FT_Pointer address (p): %p\n", ptr);
	printf("Octal unsigned 1 (o): %o\n", 8400);
	//ft_printf("FT_Octal unsigned 1 (o): %o\n", 8400);
	printf("Octal unsigned 2 (O): %O\n", 8400);
	// ft_printf("FT_Octal unsigned 2 (O): %O\n", 8400);
	printf("Hexadecimal int LOW (x): %x\n", 8400);
	//ft_printf("FT_Hexadecimal int LOW (x): %x\n", 8400);
	printf("Hexadecimal int UPP (X): %X\n", 8400);
	// ft_printf("FT_exadecimal int UPP (X): %X\n", 8400);
	printf("Unsigned Decimal1 u: |%u| |%u|\n", 8400, -8400);
	//ft_printf("FT_Unsigned Decimal1 u: |%u| |%u|\n", 8400, -8400);
	printf("Unsigned Decimal2 U: |%U| |%U|\n", 8400, -8400);
	//ft_printf("FT_Unsigned Decimal2 U: |%U| |%U|\n", 8400, -8400);
	printf("Percent option: |%-6%| |%6%| |%%| |%06%|\n");
	// ft_printf("FT_Percent option: |%-6%| |%6%| |%%| |%06%|\n");
	printf("Wide char C: |%C| |%C| |%C|\n", L'米', L'ש', L'ա');
	//ft_printf("FT_Wide char C: |%C| |%C| |%C|\n", L'米', L'ש', L'ա');
	printf("Wide string S: |%S| |%S| |%S|\n", L"合気道", L"বিড়াল এবং", L"ሰዎች");
	//ft_printf("FT_Wide string S: |%S| |%S| |%S|\n", L"合気道", L"বিড়াল এবং", L"ሰዎች");
	printf("Preceding with blanks: %10d\n", 42);
	//ft_printf("FT_Preceding with blanks: %10d\n", 42);
	printf("Preceding with zeros: %010d\n", 42);
	//ft_printf("FT_Preceding with zeros: %010d\n", 42);
	printf("# with x X o: %#x | %#X | %#o\n", 8400, 8400, 8400);
	//ft_printf("FT_# with x X o: %#x | %#X | %#o\n", 8400, 8400, 8400);
	printf("Width trick: %*d \n", 5, 10);
	// ft_printf("FT_Width trick: %*d \n", 5, 10);
	puts("----------");

	puts(GREEN"----- %d %i %D with width(10), justification(-10) and precision('.') '-' '+' (0) -----"RESET);
	printf("CASE 1: |%10d| |%10i| |%10D|\n", 422, 422, 422); /*prints 10 symbols total including 422*/
	// ft_printf("FT_CASE 1: |%10d| |%10i| |%10D|\n", 422, 422, 422);
	printf("CASE 2: |%-10d| |%-10i| |%-10D|\n", 422, 422, 422); /*prints 10 symbols total, but 422 comes first - left justified*/
	printf("CASE 3: |%010d| |%010i| %010D|\n", 422, 422, 422); /*prints 10 symbols, filling left side with zeros*/
	printf("CASE 4: |%8.5d| |%8.5i| |%8.5D|\n", 422, 422, 422); /*prints 8 symbols: 3 spaces, 5 nbr's: 2 zeros and 422*/
	// ft_printf("FT_CASE 4: |%8.5d| |%8.5i| |%8.5D|\n", 422, 422, 422);
	printf("CASE 5: |%3.5d| |%3.5i| |%3.5D|\n", 422, 422, 422); /*prints 5 symbols: 2 zeros and 422; 3 length being ignored*/
	printf("CASE 6: |%5.1d| |%5.1i| |%5.1D|\n", 422, 422, 422); /*prints 5 symbols: 2 spaces and 422; 1 being ignored*/
	printf("CASE 7: |%-.10d| |%-.10i| |%-.10D|\n", 422, 422, 422); /*prints 10 symbols: 7 zeros and 422*/
	// ft_printf("FT_CASE 7: |%-.10d| |%-.10i| |%-.10D|\n", 422, 422, 422);
	printf("CASE 8: |%07.5d| |%07.5i| |%07.5D|\n", 422, 422, 422); /*7 symbols total: 2 spaces, 2 zeros, 422*/
	printf("CASE 9: |%0.0d| |%0.0i| |%0.0D|\n", 422, 422, 422); /*prints only 422*/
	printf("CASE 10: |%0.d| |%0.i| |%0.D|\n", 422, 422, 422); /*same as previous*/
	printf("CASE 11: |%1.1d| |%1.1i| |%1.1D|\n", 422, 422, 422); /*same as previous*/
	printf("CASE 12: |%-15.10d| |%-15.10i| |%-15.10D|\n", 422, 422, 422); /*prints 15 symbols: 7 zeros, 422 and 5 spaces*/
	printf("CASE 13: |%-0+11d| |%-0+11d| |%-0+11d|\n", 422, 422, 422); /*prints 11 elements: +422 and the rest is spaces; flag 0 is ignores when flag '-'*/
	printf("CASE 14: |%0d| |%0i| |%0D|\n\n", 422, 422, 422); /*prints just 422*/
	puts("----------");

	puts(GREEN"--- %u %U with width(10), justification(-10) and precision('.') '-' '+' (0) ---"RESET);
	printf("CASE 1: |%10u| |%10U| |%10u| |%10U|\n", 422, 422, -422, -422); 
	printf("CASE 2: |%-10u| |%-10U| |%-10u| |%-10U|\n", 422, 422, -422, -422); 
	printf("CASE 3: |%010u| |%010U| |%010u| |%010U|\n", 422, 422, -422, -422); 
	printf("CASE 4: |%8.5u| |%8.5U| |%8.5u| |%8.5U|\n", 422, 422, -422, -422); 
	printf("CASE 5: |%3.5u| |%3.5U| |%3.5u| |%3.5U|\n", 422, 422, -422, -422); 
	printf("CASE 6: |%5.1u| |%5.1U| |%5.1u| |%5.1U|\n", 422, 422, -422, -422); 
	printf("CASE 7: |%-.10u| |%-.10U| |%-.10u| |%-.10U|\n", 422, 422, -422, -422); 
	printf("CASE 8: |%07.5u| |%07.5U| |%07.5u| |%07.5U|\n", 422, 422, -422, -422); 
	printf("CASE 9: |%0.0u| |%0.0U| |%0.0u| |%0.0U|\n", 422, 422, -422, -422); 
	printf("CASE 10: |%0.u| |%0.U| |%0.u| |%0.U|\n", 422, 422, -422, -422); 
	printf("CASE 11: |%1.1u| |%1.1U| |%1.1u| |%1.1U|\n", 422, 422, -422, -422); 
	printf("CASE 12: |%-15.10u| |%-15.10U| |%-15.10u| |%-15.10U|\n", 422, 422, -422, -422);
	printf("CASE 13: |%-0+11u| |%-0+11U| |%-0+11u| |%-0+11U|\n", 422, 422, -422, -422); 
	printf("CASE 14: |%0u| |%0U| |%0u| |%0U|\n\n", 422, 422, -422, -422); 
	puts("----------");

	puts(GREEN"--- %d %i %D %u %U with length and width modifiers ---"RESET);
	puts("hh h l ll j z");
	printf("CASE 1: |%hhd| |%hd| |%ld| |%lld| |%jd| |%zd|\n", 422, 422, 422, 422, 422, 422); /*hhd wtf?*/
	printf("CASE 2: |%hhi| |%hi| |%li| |%lli| |%ji| |%zi|\n", 422, 422, 422, 422, 422, 422); /*hhi wtf?*/
	printf("CASE 3: |%hhD| |%hD| |%lD| |%llD| |%jD| |%zD|\n", 422, 422, 422, 422, 422, 422);
	printf("CASE 4: |%hhu| |%hu| |%lu| |%llu| |%ju| |%zu|\n", 422, 422, 422, 422, 422, 422); /*hhu wtf?*/
	printf("CASE 5: |%hhU| |%hU| |%lU| |%llU| |%jU| |%zU|\n", 422, 422, 422, 422, 422, 422);
	puts("----------");
	printf("CASE 6 d: |%5hhd| |%5hd| |%20ld| |%20lld| |%20jd| |%10zd|\n", 422, 422, 422, 422, 422, 422); /*hhd wtf?*/
	printf("CASE 7 i: |%5hhi| |%5hi| |%20li| |%20lli| |%20ji| |%10zi|\n", 422, 422, 422, 422, 422, 422); /*hhi wtf?*/
	printf("CASE 8 D: |%5hhD| |%5hD| |%20lD| |%20llD| |%20jD| |%10zD|\n", 422, 422, 422, 422, 422, 422);
	printf("CASE 9 u: |%5hhu| |%5hu| |%20lu| |%20llu| |%20ju| |%10zu|\n", 422, 422, 422, 422, 422, 422); /*hhu wtf?*/
	printf("CASE 10 U: |%5hhU| |%5hU| |%20lU| |%20llU| |%20jU| |%10zU|\n\n", 422, 422, 422, 422, 422, 422);
	puts("----------");

	puts(CYAN"--- %x %X %o %O with length and width modifiers ---"RESET);
	puts("hh h l ll j z");
	printf("CASE 1: |%hhx| |%hx| |%lx| |%llx| |%jx| |%zx|\n", 422, 422, 422, 422, 422, 422);
	printf("CASE 2: |%hhX| |%hX| |%lX| |%llX| |%jX| |%zX|\n", 422, 422, 422, 422, 422, 422);
	printf("CASE 3: |%hho| |%ho| |%lo| |%llo| |%jo| |%zo|\n", 422, 422, 422, 422, 422, 422); /*hho wtf?*/
	printf("CASE 4: |%hhO| |%hO| |%lO| |%llO| |%jO| |%zO|\n", 422, 422, 422, 422, 422, 422);
	puts("----------");
	printf("CASE 6 x: |%5hhx| |%5hx| |%20lx| |%20llx| |%20jx| |%10zx|\n", 422, 422, 422, 422, 422, 422); 
	printf("CASE 7 X: |%5hhX| |%5hX| |%20lX| |%20llX| |%20jX| |%10zX|\n", 422, 422, 422, 422, 422, 422); 
	printf("CASE 8 o: |%5hho| |%5ho| |%20lo| |%20llo| |%20jo| |%10zo|\n", 422, 422, 422, 422, 422, 422); /*hho wtf?*/
	printf("CASE 9 O: |%5hhO| |%5hO| |%20lO| |%20llO| |%20jO| |%10zO|\n\n", 422, 422, 422, 422, 422, 422); 
	puts("----------");

	puts(CYAN"--- %x %X %o %O with width(10), justification(-10) and precision('.') '-' '+' (0) ---"RESET);
	printf("CASE 1: |%10x| |%10X| |%10o| |%10O|\n", 422, 422, 422, 422); 
	printf("CASE 2: |%-10x| |%-10X| |%10o| |%10O|\n", 422, 422, 422, 422); 
	printf("CASE 3: |%010x| |%010X| |%010o| |%010O|\n", 422, 422, 422, 422); 
	printf("CASE 4: |%8.5x| |%8.5X| |%8.5o| |%8.5O|\n", 422, 422, 422, 422); 
	printf("CASE 5: |%3.5x| |%3.5X| |%3.5o| |%3.5O|\n", 422, 422, 422, 422); 
	printf("CASE 6: |%5.1x| |%5.1X| |%5.1o| |%5.1O|\n", 422, 422, 422, 422); 
	printf("CASE 7: |%-.10x| |%-.10X| |%-.10o| |%-.10O|\n", 422, 422, 422, 422); 
	printf("CASE 8: |%07.5x| |%07.5X| |%07.5o| |%07.5O|\n", 422, 422, 422, 422); 
	printf("CASE 9: |%0.0x| |%0.0X| |%0.0o| |%0.0O|\n", 422, 422, 422, 422); 
	printf("CASE 10: |%0.x| |%0.X| |%0.o| |%0.O|\n", 422, 422, 422, 422); 
	printf("CASE 11: |%1.1x| |%1.1X| |%1.1o| |%1.1O|\n", 422, 422, 422, 422); 
	printf("CASE 12: |%-15.10x| |%-15.10X| |%-15.10o| |%-15.10O|\n", 422, 422, 422, 422);
	printf("CASE 13: |%-0+11x| |%-0+11X| |%-0+11o| |%-0+11O|\n", 422, 422, 422, 422); 
	printf("CASE 14: |%0x| |%0X| |%0o| |%0O|\n\n", 422, 422, 422, 422); 
	puts("----------");

	puts(CYAN"--- '#' for %o %O %x %X %i---"RESET);
	printf("CASE 1: |%#8o| |%#8O| |%#8x| |%#8X| |%#8i|\n", 8400, 8400, 8400, 8400, 8400); /*adding 0 - o, O; adding 0x - x, X; prints 8 symbols - 2 of them are spaces int the left side*/
	printf("CASE 2: |%#o| |%#O| |%#x| |%#X| |%#i|\n", 8400, 8400, 8400, 8400, 8400); /*same as above*/
	printf("CASE 3: |%#09o| |%#09O| |%#09x| |%#09X| |%#09i|\n", 8400, 8400, 8400, 8400, 8400); /*adding zeros in the left side*/
	printf("CASE 4: |%#7.5o| |%#7.5O| |%#7.5x| |%#7.5X| |%#7.5i|\n", 8400, 8400, 8400, 8400, 8400);
	printf("CASE 5: |%#.8o| |%#.8O| |%#.8x| |%#.8X| |%#.8i|\n", 8400, 8400, 8400, 8400, 8400);
	printf("CASE 6: |%#-12.7o| |%#-12.7O| |%#-12.7x| |%#-12.7X| |%#-12.7i|\n", 8400, 8400, 8400, 8400, 8400);
	printf("CASE 7: |%#09.2o| |%#09.2O| |%#09.2x| |%#09.2X| |%#09.2i|\n", 8400, 8400, 8400, 8400, 8400);
	puts("----------");

	puts(MAGENTA"--- %p with width, precision and justification ---"RESET);
	printf("CASE 1: |%.0p| |%6p|\n", ptr, ptr);
	printf("CASE 2: |%9.6p| |%17p|\n", ptr, ptr);
	printf("CASE 3: |%6.p| |%-22p|\n", ptr, ptr);
	puts("----------");

	puts(YELLOW"--- %c %C %s %S with length and width modifiers ---"RESET);
	puts("%s");
	printf("CASE 1: |%s| |%s| |%s| |%s|\n", NULL, "", "ПрэвЭд!", "ç±³");
	// ft_printf("FT_CASE 1: |%s| |%s| |%s| |%s|\n", NULL, "", "ПрэвЭд!", "ç±³");
	printf("CASE 2: |%5.3s| |%3.6s| |%05.6s| |%.4s|\n", str, str, str, str);
	// ft_printf("FT_CASE 2: |%5.3s| |%3.6s| |%05.6s| |%.4s|\n", str, str, str, str);
	printf("CASE 3: |%-7.7s| |%-2.7s| |%-.8s|\n", str, str, str);
	// ft_printf("FT_CASE 3: |%-7.7s| |%-2.7s| |%-.8s|\n", str, str, str);
	printf("CASE 4: |%-0.7s| |%030s|\n", str, str);
	// ft_printf("FT_CASE 4: |%-0.7s| |%030s|\n", str, str);
	puts("%c");
	printf("CASE 5: |%-2c| |%-2.3c| |%+3c| |%+c| |%-03c|\n", c, c, c, c, c);
	// ft_printf("FT_CASE 5: |%-2c| |%-2.3c| |%+3c| |%-03c|\n", c, c, c, c);
	puts("%S");
	printf("CASE 6: |%S| |%S| |%S| |%S| |%S|\n", L"something", L"米", L"বিড়াল এবং খাওয়া", L"合気道", L"");
	printf("CASE 7: |%5.3S| |%3.5S| |%5S| |%.5S|\n", wstr, wstr, wstr, wstr);
	printf("CASE 8: |%-.6S| |%-7.5S| |%-07.5S| |%-020S|\n", wstr, wstr, wstr, wstr);
	puts("%C");
	printf("CASE 9: |%-2c| |%-2.3c| |%+3c| |%+c| |%-03c|\n", wc, wc, wc, wc, wc);
	puts("----------");

	return (0);
}
