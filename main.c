/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlikhotk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/31 18:07:15 by vlikhotk          #+#    #+#             */
/*   Updated: 2017/11/04 12:26:43 by vlikhotk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <ctype.h>

void    ft_putchar(char c);
void    ft_putstr(char const *s);
void    ft_putnbr(int n);
void    ft_putendl(char const *s);
void    ft_striter(char *s, void (*f)(char *));
void    ft_strclr(char *s);
int     ft_strequ(char const *s1, char const *s2);
int     ft_strnequ(char const *s1, char const *s2, size_t n);
void    *ft_memalloc(size_t size);
void    ft_memdel(void **ap);
char    *ft_strnew(size_t size);
void    ft_strdel(char **as);
void    ft_striteri(char *s, void (*f)(unsigned int, char *));
char    *ft_strmap(char const *s, char (*f)(char));
char    *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char    *ft_strsub(char const *s, unsigned int start, size_t len);
char    *ft_strjoin(char const *s1, char const *s2);
char    *ft_strtrim(char const *s);
char    **ft_strsplit(char const *s, char c);
char    *ft_itoa(int n);

void test_ft_putstr(char *s)
{
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        write(1, &(*(s + i)), 1);
        i++;
    }
}

void test_striteri(unsigned int j, char *s1)
{
    int i;

    i = 0;
    while (i < j)
    {
        write(1, &(*(s1 + i)), 1);
        i++;
    }
}

char test_strmap(char c1)
{
    c1 += 1;
    return (c1);
}

char test_strmapi(unsigned int i, char c2)
{
    c2 += i;
    return (c2);
}

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
	printf("%s", "Original MEMCPY output\n");
	printf("%s%s\n", "0 bytes", memcpy(dest2, src2, 0));
	printf("%s%s\n", "2 bytes", memcpy(dest2, src2, 2));
	printf("%s", "Custom MEMCPY output\n");
	unsigned char src3[] = "Hello";
    unsigned char dest3[] = "ABCD";
	printf("%s%s\n", "0 bytes", ft_memcpy(dest3, src2, 0));
    printf("%s%s\n", "2 bytes", ft_memcpy(dest3, src2, 2));*/


	/*char src3[] = "1234567890";
    char dest4[10];
    printf("%s", "MEMCCPY FUNCTION\nOriginal MEMCCPY output\nSRC string is ");
    printf("%s%s", "\nOriginal string is ", src3);
	printf("%s%u", "\nReturned value is ", (unsigned int)memccpy(dest4, src3, 49, 3));
	printf("%s%s", "\nDestination string with found c symbol is ", dest4);
	printf("%s%d", "\nReturned value is ", (int)memccpy(dest4, src3, 30, 5));
	printf("%s%s", "\nDestination string with not found c symbol is ", dest4);
	char src4[] = "1234567890";
    char dest5[10];
	printf("%s%s", "\n\nsCustom MEMCCPY output\nSRC string is ", src4);
    printf("%s%u", "\nReturned value is ", (unsigned int)ft_memccpy(dest5, src4, 49, 3));
    printf("%s%s", "\nDestination string with found c symbol is ", dest5);
    printf("%s%d", "\nReturned value is ", (int)ft_memccpy(dest5, src4, 30, 5));
    printf("%s%s", "\nDestination string with not found c symbol is ", dest5);*/

    /*printf("%s", "MEMMOVE FUNCTION\nOriginal MEMMOVE output\nSRC string is ");
    char src22[] = "1234567890";
    char dest22[] = "abcdefghijk";
    printf("%s%s", "\nOriginal string is ", dest22);
    printf("%s%s", "\nDestination string with 5 bytes from src 5 to dest 1", memmove(&dest22[1], &src22[5], 5));
    printf("%s%s", "\nDestination string with 5 bytes from src 5 to dest 1", memmove(&dest22[1], &src22[5], 10));
    char src23[] = "1234567890";
    char dest23[] = "abcdefghijk";
    printf("%s%s", "\n\nsCustom MEMMOVE output\nSRC string is ", dest23);
    printf("%s%s", "\nDestination string with 5 bytes from src 5 to dest 1", ft_memmove(&dest23[1], &src23[5], 5));
    printf("%s%s", "\nDestination string with 5 bytes from src 5 to dest 1", ft_memmove(&dest23[1], &src23[5], 10));*/

    /*printf("%s", "MEMCHR FUNCTION\nOriginal MEMCHR output\n");
    char src24[] = "1234567890";
    printf("%s%s", "Original string is ", src24);
    printf("%s%s", "\nFind 9 in first 5 bytes ", memchr(src24, '9', 5));
    printf("%s%s", "\nFind 9 in first 10 bytes ", memchr(src24, '9', 10));
    printf("%s%s", "\n\nsCustom MEMCHR output\nSRC string is ", src24);
    printf("%s%s", "\nFind 9 in first 5 bytes ", ft_memchr(src24, '9', 5));
    printf("%s%s", "\nFind 9 in first 10 bytes ", ft_memchr(src24,'9', 10));*/

    /*printf("%s", "MEMCMP FUNCTION\nOriginal MEMCMP output\n");
    printf("%s%d\n", "If strings are the same result is ", memcmp("hello", "hello", 3));
    printf("%s%d\n", "If first string shorter result is ", memcmp("hell", "hello", 5));
    printf("%s%d\n", "If first string longer result is ", memcmp("hello", "hell", 5));
    printf("%s%d\n", "If first string has bigger byte result is ", memcmp("hello", "aello", 3));
    printf("%s%d\n", "If first string has less byte result is ", memcmp("aello", "hello", 3));
    printf("\n\n%s\n", "CUSTOM STRCMP output");
    printf("%s%d\n", "If strings are the same result is ", ft_memcmp("hello", "hello", 3));
    printf("%s%d\n", "If first string shorter result is ", ft_memcmp("hell", "hello", 5));
    printf("%s%d\n", "If first string longer result is ", ft_memcmp("hello", "hell", 5));
    printf("%s%d\n", "If first string has bigger byte result is ", ft_memcmp("hello", "aello", 3));
    printf("%s%d\n", "If first string has less byte result is ", ft_memcmp("aello", "hello", 3));*/

	/*printf("%s", "STRLEN FUNCTION\nORIGINAL STRLEN output");
	printf("%s%d", "\nThe length of \"Hello\" is ", strlen("Hello"));
	printf("%s%d", "\nThe length of empty string is is ", strlen(""));
	printf("%s", "\n\nCUSTOM STRLEN output");
    printf("%s%d", "\nThe length of \"Hello\" is ", ft_strlen("Hello"));
    printf("%s%d", "\nThe length of empty string is is ", ft_strlen(""));*/
  
	/*printf("%s", "STRDUP FUNCTION\nORIGINAL STRDUP output");
	printf("%s%s", "\nOutput of \"Hello\" string is ", strdup("Hello"));
	printf("%s", "\n\nCUSTOM STRDUP output");
	printf("%s%s", "\nOutput of \"Hello\" string is ", ft_strdup("Hello"));*/
	
	/*printf("%s", "STRCPY FUNCTION\nORIGINAL STRCPY output");
	char src5[] = "123456789";
    char dest6[10];
	printf("%s%s\n", "Dest string is ", strcpy(dest6, src5));
	printf("%s%d\n", "The last symbol is ", (int)dest6[9]);
	printf("\n\nCUSTOM STRCPY output");
	char src66[] = "123456789";
    char dest77[10];
	printf("%s%s\n", "Dest string is ", ft_strcpy(dest77, src66));
    printf("%s%d\n", "The last symbol is ", (int)dest77[9]);*/
   
	/*printf("%s", "STRNCPY FUNCTION\nORIGINAL STRNCPY output");
	char src6[] = "123456789";
    char dest7[10];
    printf("%s%s\n", "If src is longer than len dest string is ", strncpy(dest7, src6, 5));
    printf("%s%d\n", "The last symbol is ", (int)dest7[6]);
   	printf("%s", "\n\nCUSTOM STRNCPY output");
    char src7[] = "123456789";
    char dest8[10];
    printf("%s%s\n", "If src is longer than len dest string is ", ft_strncpy(dest8, src7, 5));
    printf("%s%d\n", "The last symbol is ", (int)dest8[6]);*/

    /*printf("%s", "STRCAT FUNCTION\nORIGINAL STRCAT output");
	char src9[20] = "Hello, ";
    char dest10[10] = "World";
	printf("%s%s\n", "\nDest string is ", strcat(src9, dest10));
	printf("%s", "\n\nCUSTOM STRCAT output");
    char src10[20] = "Hello, ";
    char dest11[10] = "World";
	printf("%s%s\n", "\nDest string is ", ft_strcat(src10, dest11));*/
	
	/*printf("%s", "STRNCAT FUNCTION\nORIGINAL STRNCAT output");
    char src12[20] = "Hello, ";
    char dest13[10] = "World";
    printf("%s%s\n", "\nIf len less than s2 dest string is ", strncat(src12, dest13, 3));
   	char src13[20] = "Hello, ";
    char dest14[10] = "World";
	printf("%s%s\n", "\nIf len longer than s2 dest string is ", strncat(src13, dest14, 10));
  	printf("%s", "\n\nCUSTOM STRNCAT output");
    char src14[20] = "Hello, ";
    char dest15[10] = "World";
	printf("%s%s\n", "\nIf len less than s2 dest string is ", ft_strncat(src14, dest15, 3));
	char src15[20] = "Hello, ";
    char dest16[10] = "World";
	printf("%s%s\n", "\nIf len longer than s2 dest string is ", ft_strncat(src15, dest16, 10));*/

	/*printf("%s", "STRLCAT FUNCTION\nORIGINAL STRLCAT output");
    char src17[10] = "12345";
    char dest18[10] = "123456789";
    printf("%s%lu\n", "\nIf len less than s2 dest string is ", strlcat(src17, dest18, 10));
    char src19[10] = "12345";
    char dest20[10] = "123456789";
    printf("%s%lu\n", "\nIf len less than s2 dest string is ", ft_strlcat(src19, dest20, 10));*/

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
    printf("%s%s\n", "String is found ", strnstr(src21, dest21, 10));
    printf("%s%s", "String not found ", strnstr(src21, "dfgd", 3));
    printf("\n%s%s", "String 2 has 0 length ", strnstr(src21, "", 3));
    printf("\n\n%s\n", "CUSTOM strnstr output");
    printf("%s%s\n", "String is found ", ft_strnstr(src21, dest21, 10));
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

    //printf("%s", "\nADDITIONAL FUNCTIONS\n\n");

    /*printf("%s", "FT_PUTCHAR ouput\n");
    printf("\n%s", "Print a symbol: ");
    ft_putchar('a');*/

    /*printf("%s", "\n\nFT_PUTSTR ouput\n");
    printf("\n%s", "Print Hello");
    ft_putstr("Hello");*/

    /*printf("%s", "\n\nFT_PUTENDL ouput\n");
    printf("\n%s", "Print Hello");
    ft_putendl("Hello");*/

    /*printf("%s", "\n\nFT_STRITER ouput\n");
    printf("%s\n", "Call ft_striter with Hello string and putchar function: ");
    ft_striter("Hello", &test_ft_putstr);*/

    /*printf("%s", "\n\nFT_STRITERI ouput\n");
    printf("%s\n", "Call ft_striteri with Hello string and putchar function: ");
    ft_striteri("Hello", &test_striteri);*/

    /*printf("%s", "\n\nFT_MEMALLOC ouput\n");       
    printf("%s%d", "The memory allocated is initialized to 0: ", (int)ft_memalloc(3));*/

    /*printf("%s", "\n\nFT_STRNEW ouput\n");
    printf("%s%d", "The string allocated and initialized to 0: ", (int)ft_strnew(3));*/

    /*printf("%s", "FT_STRCLR ouput\n");
    char *src29 = "Hello";
    printf("%s%s\n", "Original string is ", src29);
    ft_strclr(src29);
    printf("%s%d\n", "Clear Hello string result: ", (int)src29[0]);*/

    /*printf("\n\n%s", "FT_STRMAP ouput\n");
    char *src31 = "Hello";
    printf("%s%s\n", "Original string is ", src31);
    printf("%s%s", "Returned string is ", ft_strmap(src31, &test_strmap));*/

    /*printf("\n\n%s", "FT_STRMAPI ouput\n");
    char *src32 = "Hello";
    printf("%s%s\n", "Original string is ", src32);
    printf("%s%s", "Returned string is ", ft_strmapi(src32, &test_strmapi));*/

    /*printf("%s", "\n\nFT_PUTNBR output\n");
    printf("%s\n", "Ouput of 1 is ");
    ft_putnbr(1);
    printf("%s\n", "Ouput of 0 is ");
    ft_putnbr(0);
    printf("%s\n", "Output of 12345 is ");
    ft_putnbr(12345);
    printf("%s\n", "Output of -12345 is ");
    ft_putnbr(-12345);
    printf("%s\n", "Output of -2147483648 is ");
    ft_putnbr(-2147483648);
    printf("%s\n", "Output of 2147483647 is ");
    ft_putnbr(2147483647);*/

    /*printf("%s", "\nFT_STREQU FUNCTION\n");
    printf("%s%d\n", "If the same empty strings result is ", ft_strequ("", ""));
    printf("%s%d\n", "If the same empty strings result is ", ft_strequ("hello", "hello"));
    printf("%s%d\n", "Different length ", ft_strequ("h", "h "));
    printf("%s%d\n\n", "Different symbols ", ft_strequ("hello", "hellc"));*/
    
    /*printf("%s", "FT_STRNEQU FUNCTION\n");
    printf("%s%d\n", "If the same empty strings result is ", ft_strnequ("", "", 2));
    printf("%s%d\n", "If the same strings result is ", ft_strnequ("hello", "hello", 3));
    printf("%s%d\n", "Different length ", ft_strnequ("h", "h ", 3));
    printf("%s%d\n\n", "Different symbols ", ft_strnequ("hello", "hellc", 6));*/

    /*printf("%s", "\n\nFT_STRSUB FUNCTION\n");
    char const *src32 = "someHellosome";
    printf("%s%s\n", "Original string is ", src32);
    printf("%s%s", "Substring from index 4 and 5 symbols is: ", ft_strsub(src32, 4, 5));*/

    /*printf("%s", "\n\nFT_STRJOIN FUNCTION\n");
    char const *src33 = "Hello,";
    char const *src34 = "World!";
    printf("%s%s\n", "Should be Hello, World! string: ", ft_strjoin(src33, src34));*/
    
    /*printf("%s", "\n\nFT_STRTRIM FUNCTION\n");
    char const *src35 = "Hello";
    char const *src36 = " \n\tHello\t\t\n     ";
    printf("%s%s\n", "Result of Hello string without whitespaces: ", ft_strtrim(src35));
    printf("%s%s\n", "Result of Hello string with whitespaces at the start and and: ", ft_strtrim(src36));*/

    /*printf("%s", "\n\nFT_MEMDEL FUNCTION\n");
    char *src37;
    src37 = malloc(sizeof(char) * 10);
    src37 = "Hello";
    printf("%s%s", "Original string is ", src37);
    ft_memdel((void **)&src37);
    printf("%s%s", "String after free calling is ", src37);*/

    /*printf("%s", "\n\nFT_STRDEL FUNCTION\n");
    char *src38;
    src38 = malloc(sizeof(unsigned char) * 10);
    src38 = "Hello";
    printf("%s%s", "Original string is ", src38);
    ft_strdel(&src38);
    printf("%s%s", "String after free calling is ", src38);*/

    /*printf("%s", "\n\nFT_STRSPLIT FUNCTION\n");
    int i_spl = 0;
    char const *src39 = "*hello*fellow***students*";
    printf("%s%s\n", "Original string is: ", src39);
    char **dest39 = ft_strsplit(src39, '*');
    while (&dest39[i_spl] != NULL)
    {
        printf("%s%d%s\n", "Element of aray with index ", i_spl, dest39[i_spl]);
        i_spl++;
    }*/
    
    printf("%s", "\n\nFT_ITOA FUNCTION\n");
    printf("%s%d\n", "Original number is ", 0);
    printf("%s%s\n", "Result of itoa is ", ft_itoa(0));
    printf("%s%d\n", "Original number is ", 5);
    printf("%s%s\n", "Result of itoa is ", ft_itoa(5));
    printf("%s%d\n", "Original number is ", 123);
    printf("%s%s\n", "Result of itoa is ", ft_itoa(123));
    printf("%s%d\n", "Original number is ", 356146876);
    printf("%s%s\n", "Result of itoa is ", ft_itoa(356146876));
    printf("%s%d\n", "Original number is ", -5);
    printf("%s%s\n", "Result of itoa is ", ft_itoa(-5));
    printf("%s%d\n", "Original number is ", -123);
    printf("%s%s\n", "Result of itoa is ", ft_itoa(-123));
    printf("%s%d\n", "Original number is ", -356146876);
    printf("%s%s\n", "Result of itoa is ", ft_itoa(-356146876));

}
