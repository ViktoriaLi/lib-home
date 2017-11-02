/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:07:15 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/02 22:09:47 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include "bonuslibft.h"

void ft_putchar(char c);
void test_ft_putstr(char *s);
void ft_putnbr(int n);

int main(void)
{
	/*printf("%s", "MEMSET FUNCTION\n");
	unsigned char src[] = "1234567890dfsfdgfdgfghf";
	printf("%s", "Original memset output\n");
	printf("%s\n", src);
	printf("%s\n", memset(src, '1', 10));
	printf("%s\n", memset(src, '2', 5));
	printf("%s\n", memset(src, '3', 1));
	printf("%s\n", memset(src, 0, 1));
	printf("%s", "Custom memset output\n");
	unsigned char src1[] = "1234567890dfsfdgfdgfghf";
	printf("%s\n", src1);
    printf("%s\n", ft_memset(src1, '1', 10));
	printf("%s\n", ft_memset(src1, '2', 5));
	printf("%s\n", ft_memset(src1, '3', 1));
	printf("%s\n", ft_memset(src1, 0, 1));*/

	/*printf("%s", "BZERO FUNCTION\n");
	int src[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%s", "Original bzero output\n");
	printf("%d\n", *src);
	bzero(src, 1);
	printf("%d\n", *src);
	bzero(src, 8);
	printf("%d\n", *(src + 2));
	bzero(src, 16);
	printf("%d\n", *(src + 3));
	printf("%s", "Custom bzero output\n");
	int src1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%d\n", *src1);
	ft_bzero(src1, 1);
	printf("%d\n", *src1);
	ft_bzero(src1, 8);
	printf("%d\n", *(src1 + 2));
	ft_bzero(src1, 16);
	printf("%d\n", *(src1 + 3));*/

	/*unsigned char src2[] = "Hello";
	unsigned char dest2[] = "ABCD";
	printf("%s", "MEMCPY FUNCTION\n");
	printf("%s", "Original memcpy output\n");
	printf("%s\n", memcpy(dest2, src2, 0));
	printf("%s\n", memcpy(dest2, src2, 2));
	printf("%s", "Custom memcpy output\n");
	unsigned char src3[] = "Hello";
    unsigned char dest3[] = "ABCD";
	printf("%s\n", ft_memcpy(dest3, src2, 0));
    printf("%s\n", ft_memcpy(dest3, src2, 2));*/


	/*char src3[] = "1234567890";
    char dest4[10];
    test_ft_putstr("MEMCCPY FUNCTION\nOriginal memccpy output\nSRC string is ");
    test_ft_putstr(src3);
	test_ft_putstr("\nReturned value is ");
	printf("%u", (unsigned int)memccpy(dest4, src3, 49, 3));
	test_ft_putstr("\nDestination string with found c symbol is ");
	test_ft_putstr(dest4);
	test_ft_putstr("\nReturned value is ");
	ft_putnbr((int)memccpy(dest4, src3, 30, 5));
	test_ft_putstr("\nDestination string with not found c symbol is ");
	test_ft_putstr(dest4);
	ft_putchar('\n');

	char src4[] = "1234567890";
    char dest5[10];
	test_ft_putstr("\nCustom memccpy output\nSRC string is ");
    test_ft_putstr(src4);
    test_ft_putstr("\nReturned value is ");
    printf("%u", (unsigned int)ft_memccpy(dest5, src4, 49, 3));
    test_ft_putstr("\nDestination string with found c symbol is ");
    test_ft_putstr(dest5);
    test_ft_putstr("\nReturned value is ");
    ft_putnbr((int)ft_memccpy(dest5, src4, 30, 5));
    test_ft_putstr("\nDestination string with not found c symbol is ");
    test_ft_putstr(dest5);
	ft_putchar('\n');*/

	/*test_ft_putstr("STRLEN FUNCTION\nORIGINAL strlen output");
	test_ft_putstr("\nThe length of \"Hello\" is ");
	ft_putnbr(strlen("Hello"));
	test_ft_putstr("\nThe length of empty string is is ");
    ft_putnbr(strlen(""));
	test_ft_putstr("\n\nCUSTOM strlen output");
    test_ft_putstr("\nThe length of \"Hello\" is ");
    ft_putnbr(ft_strlen("Hello"));
    test_ft_putstr("\nThe length of empty string is is ");
    ft_putnbr(ft_strlen(""));*/

	/*test_ft_putstr("STRDUP FUNCTION\nORIGINAL strdup output");
	test_ft_putstr("\nOutput of \"Hello\" string is ");
	test_ft_putstr(strdup("Hello"));
	test_ft_putstr("\n\nCUSTOM strdup output");
	test_ft_putstr("\nOutput of \"Hello\" string is ");
	test_ft_putstr(ft_strdup("Hello"));*/
	
	/*test_ft_putstr("STRCPY FUNCTION\nORIGINAL strcpy output");
	char src5[] = "123456789";
    char dest6[10];
	test_ft_putstr("Dest string is ");
	test_ft_putstr(strcpy(dest6, src5));
	ft_putchar('\n');
	test_ft_putstr("The last symbol is ");
	ft_putnbr((int)dest6[9]);
	ft_putchar('\n');
	test_ft_putstr("\n\nCUSTOM strcpy output");
	char src6[] = "123456789";
    char dest7[10];
	test_ft_putstr("Dest string is ");
    test_ft_putstr(ft_strcpy(dest7, src6));
    ft_putchar('\n');
    test_ft_putstr("The last symbol is ");
    ft_putnbr((int)dest7[9]);
    ft_putchar('\n');*/

	/*test_ft_putstr("STRNCPY FUNCTION\nORIGINAL strncpy output");
	char src6[] = "123456789";
    char dest7[10];
    test_ft_putstr("If src is longer than len dest string is ");
    test_ft_putstr(strncpy(dest7, src6, 5));
    ft_putchar('\n');
    test_ft_putstr("The last symbol is ");
    ft_putnbr((int)dest7[6]);
	test_ft_putstr("\n\nCUSTOM strncpy output");
    char src7[] = "123456789";
    char dest8[10];
    test_ft_putstr("If src is longer than len dest string is ");
    test_ft_putstr(ft_strncpy(dest8, src7, 5));
    ft_putchar('\n');
    test_ft_putstr("The last symbol is ");
    ft_putnbr((int)dest8[6]);*/

    /*test_ft_putstr("STRCAT FUNCTION\nORIGINAL strcat output");
	char src9[20] = "Hello, ";
    char dest10[10] = "World";
	test_ft_putstr("\nDest string is ");
	test_ft_putstr(strcat(src9, dest10));
	test_ft_putstr("\n\nCUSTOM strncat output");
	test_ft_putstr("\nDest string is ");
	char src10[20] = "Hello, ";
    char dest11[10] = "World";
    test_ft_putstr(ft_strcat(src10, dest11));*/
	
	/*test_ft_putstr("STRNCAT FUNCTION\nORIGINAL strncat output");
    char src12[20] = "Hello, ";
    char dest13[10] = "World";
    test_ft_putstr("\nIf len less than s2 dest string is ");
    test_ft_putstr(strncat(src12, dest13, 3));
	char src13[20] = "Hello, ";
    char dest14[10] = "World";
	test_ft_putstr("\nIf len longer than s2 dest string is ");
    test_ft_putstr(strncat(src13, dest14, 10));
	test_ft_putstr("\n\nCUSTOM strncat output");
    char src14[20] = "Hello, ";
    char dest15[10] = "World";
	test_ft_putstr("\nIf len less than s2 dest string is ");
    test_ft_putstr(ft_strncat(src14, dest15, 3));
	char src15[20] = "Hello, ";
    char dest16[10] = "World";
	test_ft_putstr("\nIf len longer than s2 dest string is ");
    test_ft_putstr(ft_strncat(src15, dest16, 10));*/

	test_ft_putstr("STRLCAT FUNCTION\nORIGINAL strlcat output");
    char src17[20] = "Hello, ";
    char dest18[10] = "World";
    test_ft_putstr("\nIf len less than s2 dest string is ");
    ft_putnbr(strlcat(src17, dest18, 3));
    char src19[20] = "Hello,";
    char dest20[10] = "World";
    test_ft_putstr("\nIf len longer than s2 dest string is ");
    ft_putnbr(strlcat(src19, dest20, 10));
}
