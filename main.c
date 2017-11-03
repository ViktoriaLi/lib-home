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
#include <ctype.h>

void ft_putchar(char c);
void test_ft_putstr(char *s);
void ft_putnbr(int n);

int main(void)
{
	/*printf("%s", "MEMSET FUNCTION\n");
	unsigned char src[] = "1234567890dfsfdgfdgfghf";
	printf("%s", "Original MEMSET output\n");
	printf("%s%s\n", "Original string is ", src);
	printf("%s%s\n", "Set symbol 1 to 10 bytes ", memset(src, '1', 10));
	printf("%s%s\n", "Set symbol 2 to 5 bytes ", memset(src, '2', 5));
	printf("%s%s\n", "Set symbol 3 to 1 byte ", memset(src, '3', 1));
	printf("%s%s\n", "Set 0 to 1 bytes ", memset(src, 0, 1));
	printf("%s", "Custom MEMSET output\n");
	unsigned char src1[] = "1234567890dfsfdgfdgfghf";
	printf("%s\n", src1);
    printf("%s%s\n", "Set symbol 1 to 10 bytes ", ft_memset(src1, '1', 10));
	printf("%s%s\n", "Set symbol 2 to 5 bytes ", ft_memset(src1, '2', 5));
	printf("%s%s\n", "Set symbol 3 to 1 byte ", ft_memset(src1, '3', 1));
	printf("%s%s\n", "Set 0 to 1 bytes ", ft_memset(src1, 0, 1));*/

	/*printf("%s", "BZERO FUNCTION\n");
	int src[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%s", "Original BZERO output\n");
	printf("%s%d\n", "Original string is ", *src);
	bzero(src, 1);
	printf("%s%d\n", "bzero with 1 byte ", *src);
	bzero(src, 8);
	printf("%s%d\n", "bzero with 8 bytes ", *(src + 2));
	bzero(src, 16);
	printf("%s%d\n", "bzero with 16 bytes ", *(src + 3));
	printf("%s", "Custom BZERO output\n");
	int src1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	printf("%s%d\n", "Original string is ", *src1);
	ft_bzero(src1, 1);
	printf("%s%d\n", "bzero with 1 byte ", *src1);
	ft_bzero(src1, 8);
	printf("%s%d\n", "bzero with 8 bytes ", *(src1 + 2));
	ft_bzero(src1, 16);
	printf("%s%d\n", "bzero with 16 bytes ", *(src1 + 3));*/

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

	/*test_ft_putstr("STRLCAT FUNCTION\nORIGINAL strlcat output");
    char src17[8] = "Hello, ";
    char dest18[5] = "World";
    test_ft_putstr("\nIf len less than s2 dest string is ");
    ft_putnbr(strlcat(src17, dest18, 3));
    char src19[20] = "Hello,";
    char dest20[10] = "World";
    test_ft_putstr("\nIf len longer than s2 dest string is ");
    ft_putnbr(strlcat(src19, dest20, 10));*/

	/*printf("%s", "STRCHR FUNCTION\nORIGINAL strchr output\n");
	char src20[] = "1234567890sfdsgfhfghgfh";
	printf("%s%s\n", "Original string is ", src20);
	printf("%s%s\n", "4 symbol found ", strchr(src20, '4'));
	printf("%s%s", "Symbol not found ", strchr(src20, 'a'));
	printf("\n%s%d", "Symbol is 0 ", (int)*strchr(src20, 0));
	printf("\n\n%s", "CUSTOM strchr output");
	printf("%s%s\n", "4 symbol found ", ft_strchr(src20, '4'));
	printf("%s%s", "Symbol not found ", ft_strchr(src20, 'a'));
	printf("\n%s%d", "Symbol is 0 ", (int)*ft_strchr(src20, 0));*/

	/*printf("%s", "STRRCHR FUNCTION\nORIGINAL strrchr output\n");
	char src20[] = "1234567890sfdsgfhfghgfh";
	printf("%s%s\n", "Original string is ", src20);
	printf("%s%s\n", "f symbol found ", strrchr(src20, 'f'));
	printf("%s%s", "Symbol not found ", strrchr(src20, 'a'));
	printf("\n%s%d", "Symbol is 0 ", (int)*strrchr(src20, 0));
	printf("\n\n%s\n", "CUSTOM strrchr output");
	printf("%s%s\n", "4 symbol found ", ft_strrchr(src20, '4'));
	printf("%s%s", "Symbol not found ", ft_strrchr(src20, 'a'));
	printf("\n%s%d", "Symbol is 0 ", (int)*ft_strrchr(src20, 0));*/

	/*printf("%s", "STRSTR FUNCTION\nORIGINAL strstr output\n");
	char src21[] = "1234567890";
    char dest21[] = "34567";
    printf("%s%s\n", "Original string is ", src21);
    printf("%s%s\n", "We find string ", dest21);
    printf("%s%s\n", "String is found ", strstr(src21, dest21));
    printf("%s%s", "String not found ", strstr(src21, "dfgd"));
    printf("\n%s%s", "String 2 has 0 length ", strstr(src21, ""));
    printf("\n\n%s\n", "CUSTOM strstr output");
    printf("%s%s\n", "String is found ", ft_strstr(src21, dest21));
    printf("%s%s", "String not found ", ft_strstr(src21, "dfgd"));
    printf("\n%s%s", "String 2 has 0 length ", ft_strstr(src21, ""));*/

    /*printf("%s", "STRNSTR FUNCTION\nORIGINAL strnstr output\n");
    char src21[] = "1234567890";
    char dest21[] = "34567";
    printf("%s%s\n", "Original string is ", src21);
    printf("%s%s\n", "We find string 3 bytes of", dest21);
    /*printf("%s%s\n", "String is found ", strnstr(src21, dest21));
    printf("%s%s", "String not found ", strnstr(src21, "dfgd"));
    printf("\n%s%s", "String 2 has 0 length ", strnstr(src21, ""));*/
   /* printf("\n\n%s\n", "CUSTOM strnstr output");
    printf("%s%s\n", "String is found ", ft_strnstr(src21, dest21, 4));
    printf("%s%s", "String not found ", ft_strnstr(src21, "dfgd", 3));
    printf("\n%s%s", "String 2 has 0 length ", ft_strnstr(src21, "", 3));*/

    /*printf("%s", "STRCMP FUNCTION\nORIGINAL STRCMP output\n");
    printf("%s%d\n", "If strings are the same result is ", strcmp("hello", "hello"));
    printf("%s%d\n", "If first string shorter result is ", strcmp("hell", "hello"));
    printf("%s%d\n", "If first string longer result is ", strcmp("hello", "hell"));
    printf("%s%d\n", "If first string has bigger byte result is ", strcmp("hello", "aello"));
    printf("%s%d\n", "If first string has less byte result is ", strcmp("aello", "hello"));
    printf("\n\n%s\n", "CUSTOM STRCMP output");
    printf("%s%d\n", "If strings are the same result is ", ft_strcmp("hello", "hello"));
    printf("%s%d\n", "If first string shorter result is ", ft_strcmp("hell", "hello"));
    printf("%s%d\n", "If first string longer result is ", ft_strcmp("hello", "hell"));
    printf("%s%d\n", "If first string has bigger byte result is ", ft_strcmp("hello", "aello"));
    printf("%s%d\n", "If first string has less byte result is ", ft_strcmp("aello", "hello"));*/

	/*printf("%s", "STRNCMP FUNCTION\nORIGINAL STRNCMP output\n");
    printf("%s%d\n", "If strings are the same result is ", strncmp("hello", "hellojkl", 5));
    printf("%s%d\n", "If first string shorter result is ", strncmp("hell", "hellosfsfdsf", 5));
    printf("%s%d\n", "If first string longer result is ", strncmp("hello", "hell", 5));
    printf("%s%d\n", "If first string has bigger byte result is ", strncmp("hello123", "aello456", 3));
    printf("%s%d\n", "If first string has less byte result is ", strncmp("aello123", "hello456", 2));
    printf("\n\n%s\n", "CUSTOM STRNCMP output");
    printf("%s%d\n", "If strings are the same result is ", ft_strncmp("hello", "hellojkl", 5));
    printf("%s%d\n", "If first string shorter result is ", ft_strncmp("hell", "hellosfsfdsf", 5));
    printf("%s%d\n", "If first string longer result is ", ft_strncmp("hello", "hell", 5));
    printf("%s%d\n", "If first string has bigger byte result is ", ft_strncmp("hello123", "aello456", 3));
    printf("%s%d\n", "If first string has less byte result is ", ft_strncmp("aello123", "hello456", 2));*/

	/*printf("%s", "ATOI FUNCTION\nORIGINAL ATOI output\n");
    printf("%s%d\n", "If string with literals result is ", atoi("dfdf5"));
    printf("%s%d\n", "If string with gaps rewult is ", atoi("   456"));
    printf("%s%d\n", "If string with + and gaps result is ", atoi("+   456df  "));
    printf("%s%d\n", "If string with plus result is ", atoi("+456df  "));
    printf("%s%d\n", "If string with gaps and - result is ", atoi("   -456"));
    printf("%s%d\n", "If string with slash n result is ", atoi("\n\n\n\n+456"));
    printf("%s%d\n", "If string with slash t result is ", atoi("\t-54646"));
    printf("%s%d\n", "If string with slash v result is ", atoi("\v596"));
    printf("%s%d\n", "If string with slash f result is ", atoi("\f596"));
    printf("%s%d\n", "If string with slash r result is ", atoi("\r596"));
    printf("%s%d\n", "If string with extreme negative number result is ", atoi("-2147483648"));
    printf("%s%d\n", "If string with extreme positive number result is ", atoi("+2147483647"));
    printf("%s%d\n", "If string with more then extreme negative number result is ", atoi("-21474836481686"));
    printf("%s%d\n", "If string with more then extreme positive number result is ", atoi("+21474836471686"));
    printf("\n\n%s\n", "CUSTOM ATOI output");
    printf("%s%d\n", "If string with literals result is ", ft_atoi("dfdf5"));
    printf("%s%d\n", "If string with gaps rewult is ", ft_atoi("   456"));
    printf("%s%d\n", "If string with + and gaps result is ", ft_atoi("+   456df  "));
    printf("%s%d\n", "If string with plus result is ", ft_atoi("+456df  "));
    printf("%s%d\n", "If string with gaps and - result is ", ft_atoi("   -456"));
    printf("%s%d\n", "If string with slash n result is ", ft_atoi("\n\n\n\n+456"));
    printf("%s%d\n", "If string with slash t result is ", ft_atoi("\t-54646"));
    printf("%s%d\n", "If string with slash v result is ", ft_atoi("\v596"));
    printf("%s%d\n", "If string with slash f result is ", ft_atoi("\f596"));
    printf("%s%d\n", "If string with slash r result is ", ft_atoi("\r596"));
    printf("%s%d\n", "If string with extreme negative number result is ", ft_atoi("-2147483648"));
    printf("%s%d\n", "If string with extreme positive number result is ", ft_atoi("+2147483647"));
    printf("%s%d\n", "If string with more then extreme negative number result is ", ft_atoi("-21474836481686"));
    printf("%s%d\n", "If string with more then extreme positive number result is ", ft_atoi("+21474836471234"));*/

    /*printf("%s", "ISALPHA FUNCTION\nORIGINAL ISALPHA output\n");
    printf("%s%d\n", "Is alpha a ", isalpha('a'));
    printf("%s%d\n", "Is alpha k ", isalpha('k'));
    printf("%s%d\n", "Is alpha z ", isalpha('z'));
    printf("%s%d\n", "Is alpha A ", isalpha('A'));
    printf("%s%d\n", "Is alpha K ", isalpha('K'));
    printf("%s%d\n", "Is alpha Z ", isalpha('Z'));
    printf("%s%d\n", "Is alpha gap ", isalpha(' '));
    printf("%s%d\n", "Is alpha * ", isalpha('*'));
    printf("\n\n%s\n", "CUSTOM ISALPHA output");
    printf("%s%d\n", "Is alpha a ", ft_isalpha('a'));
    printf("%s%d\n", "Is alpha k ", ft_isalpha('k'));
    printf("%s%d\n", "Is alpha z ", ft_isalpha('z'));
    printf("%s%d\n", "Is alpha A ", ft_isalpha('A'));
    printf("%s%d\n", "Is alpha K ", ft_isalpha('K'));
    printf("%s%d\n", "Is alpha Z ", ft_isalpha('Z'));
    printf("%s%d\n", "Is alpha gap ", ft_isalpha(' '));
    printf("%s%d\n", "Is alpha * ", ft_isalpha('*'));*/

    /*printf("%s", "ISDIGIT FUNCTION\nORIGINAL ISDIGIT output\n");
    printf("%s%d\n", "Is alpha 3 with code 50 ", isdigit(50));
    printf("%s%d\n", "Is alpha 7 ", isdigit('7'));
    printf("%s%d\n", "Is alpha z ", isdigit('z'));
    printf("\n\n%s\n", "CUSTOM ISDIGIT output");
    printf("%s%d\n", "Is alpha 3 with code 50 ", ft_isdigit(50));
    printf("%s%d\n", "Is alpha 7 ", ft_isdigit('7'));
    printf("%s%d\n", "Is alpha z ", ft_isdigit('z'));*/

    /*printf("%s", "ISALNUM FUNCTION\nORIGINAL ISALNUM output\n");
    printf("%s%d\n", "Is alpha * ", isalnum('*'));
    printf("%s%d\n", "Is alpha 7 ", isalnum('7'));
    printf("%s%d\n", "Is alpha z ", isalnum('z'));
    printf("\n\n%s\n", "CUSTOM ISALNUM output");
    printf("%s%d\n", "Is alpha * ", ft_isalnum('*'));
    printf("%s%d\n", "Is alpha 7 ", ft_isalnum('7'));
    printf("%s%d\n", "Is alpha z ", ft_isalnum('z'));*/

    /*printf("%s", "ISASCII FUNCTION\nORIGINAL ISASCII output\n");
    printf("%s%d\n", "Is alpha * ", isascii('*'));
    printf("%s%d\n", "Is alpha 7 ", isascii('7'));
    printf("%s%d\n", "Is alpha z ", isascii('z'));
    printf("\n\n%s\n", "CUSTOM ISASCII output");
    printf("%s%d\n", "Is alpha * ", ft_isascii('*'));
    printf("%s%d\n", "Is alpha 7 ", ft_isascii('7'));
    printf("%s%d\n", "Is alpha z ", ft_isascii('z'));*/

    /*printf("%s", "ISPRINT FUNCTION\nORIGINAL ISPRINT output\n");
    printf("%s%d\n", "Is alpha * ", isprint('*'));
    printf("%s%d\n", "Is alpha 7 ", isprint('7'));
    printf("%s%d\n", "Is alpha z ", isprint('z'));
    printf("\n\n%s\n", "CUSTOM ISPRINT output");
    printf("%s%d\n", "Is alpha * ", ft_isprint('*'));
    printf("%s%d\n", "Is alpha 7 ", ft_isprint('7'));
    printf("%s%d\n", "Is alpha z ", ft_isprint('z'));*/

    /*printf("%s", "TOUPPER FUNCTION\nORIGINAL TOUPPER output\n");
    printf("%s%d\n", "Is alpha a ", toupper('a'));
    printf("%s%d\n", "Is alpha 7 ", toupper('7'));
    printf("%s%d\n", "Is alpha z ", toupper('z'));
    printf("\n\n%s\n", "CUSTOM TOUPPER output");
    printf("%s%d\n", "Is alpha a ", ft_toupper('a'));
    printf("%s%d\n", "Is alpha 7 ", ft_toupper('7'));
    printf("%s%d\n", "Is alpha z ", ft_toupper('z'));*/

    /*printf("%s", "TOLOWER FUNCTION\nORIGINAL TOLOWER output\n");
    printf("%s%d\n", "Is alpha A ", tolower('A'));
    printf("%s%d\n", "Is alpha 7 ", tolower('7'));
    printf("%s%d\n", "Is alpha Z ", tolower('Z'));
    printf("\n\n%s\n", "CUSTOM TOLOWER output");
    printf("%s%d\n", "Is alpha A ", ft_tolower('A'));
    printf("%s%d\n", "Is alpha 7 ", ft_tolower('7'));
    printf("%s%d\n", "Is alpha Z ", ft_tolower('Z'));*/
}
