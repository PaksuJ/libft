/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpartane <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 14:43:03 by jpartane          #+#    #+#             */
/*   Updated: 2019/11/14 11:36:02 by jpartane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <stdio.h>

/*void	iter(char *c)
{
	printf("%s\n", c);
}*/

/*void	iteri(unsigned int n, char *c)
{
	printf("%c %d\n", *c, n);
}*/

/*char	map(char c)
{
	printf("%c\n");
	return (c);
}*/

/*char	mapi(unsigned int n, char c)
{
	printf("%c\n");
	return (c);
}*/


int		main(void)
{
	char m = '\0';
	const char u[] = "top.of.the.morning";
	const char k = '.';
	char c[] = "hiello";
	char b[] = "mama";
	char a = 'c';
	char str1[] = "123";
	const char g[] = "tiivitaavi";
	const char f = 'i';
	const char r[] = "oavi";
	const char o[] = "Lii Fai Fou";
	const char p[] = "Fai";
	
	

/*	ft_putchar(a); 
	ft_putchar('\n');
	ft_putstr(b);
	printf("%zu\n", (ft_strlen(b)));
	ft_putnbr(5000);
	ft_putendl(b);
	ft_putchar_fd(a, 4);
	ft_putstr_fd(b, 4);
	printf("%d\n", (ft_putendl_fd(b, 2)));
	ft_putnbr_fd(1000, 1);
	printf("%d", (ft_isalpha('B')));
	ft_isdigit(7);
	printf("%d\n", (ft_isprint(4)));
	printf("%d\n", (ft_isalnum('4')));
	printf("%c\n", (ft_tolower(50)));
	printf("%c\n", (ft_toupper(65)));
	printf("%d\n", (ft_strcmp(c, b)));
	printf("%s\n", (ft_strdup(b)));
	printf("%s\n", (ft_strcpy(b, c)));
	printf("%s\n", (ft_strncpy(b, c, 4)));:
	printf("%d\n", (ft_atoi(str1)));
	printf("%s\n", ft_strcat(b, c));
	printf("%s\n", ft_strncat(c, b, 5));
	printf("%zu\n", ft_strlcat(c, b, 4));
	printf("%d\n", ft_strequ(c, b));
	printf("%d\n", ft_strnequ(c, b, 2));
	printf("%s\n", ft_memcpy(c, b, 5));
	printf("%s\n", ft_bzero(c, 4));
	printf("%s\n", ft_memset(c, '$', 5));
	printf("%d\n", ft_strncmp(b, c, 3));
	printf("%s\n", ft_strchr(g, f));
	printf("%s\n", ft_strrchr(u, f));
	printf("%s\n", ft_strstr(g, r));
	printf("%s\n", ft_strnstr(o, p, 4));*/
	

	// FT_MEMCCPY
	/*char string1[41] = "Will trump build a wall?";
	char buffer[41];
	char *pdest;
	printf("Source : %s\n", string1);
	pdest = ft_memcccpy(buffer, string1, 'd', 40);
	*pdest = '\0';
	printf("%s\n", buffer);*/

	// FT_MEMCHR
	/*const char str[] = "umpalumpa";
	const char gy = 'l';
	printf("%s\n", ft_memchr(str, gy, 3));*/

	// FT_MEMMOVE
	/*char dest[] = "mama";
	const char src[] = "dada";
	printf("Before memmove dest = %s, src = %s\n", dest, src);
	ft_memmove(dest, src, 4);
	printf("After memmove dest = %s, src = %s\n", dest, src);*/

	// FT_MEMDEL
	/*void	*memory = "Hello";
	printf("%s %p\n", memory, &memory);
	memory = malloc(sizeof(*memory) * 10);
	ft_memdel(&memory);
	if (!memory)
		write(1, "NULL", 4);
	else
		write(1, "NOT NULL", 8);
	printf("%s %p", memory, &memory);*/

	// FT_MEMALLOC
	/*char	*str;
	str = ft_memalloc(5);
	ft_strcpy(str, "hello");
	printf("%s\n", str);*/

	// FT_STRNEW
	/*char *str = "hello";
   	printf("%s,%p\n", str, &str);
	if (!(str = ft_strnew(10)))
			write(1, "NULL", 4);
		else
			write(1, str, 11);
	printf("%s %p", str, &str);*/

	// FT_STRDEL
	/*char	*memory = "hello";
	printf("%s %p\n", memory, &memory);
	memory = malloc(sizeof(*memory) * 10);
	ft_strdel(&memory);
	if (!memory)
		write(1, "NULL", 4);
	else
		write(1, "NOT NULL", 8);
	printf("%s %p", memory, &memory);*/
	
	// FT_STRCLR
	/*char	strclr[] = "hello";
	printf("%s", strclr);
	ft_strclr(strclr);
	printf("%s", strclr);*/

	// FT_STRITER
	/*char	str[] = "hello";
	printf("%s\n", str);
	ft_striter(str, &iter);*/

	// FT_STRITERI
	/*char str[] = "hello";
	printf("%s\n", str);
	ft_striteri(str, &iteri);*/

	// FT_STRMAP
	/*char *str = "hello";
	printf("%s\n", str);
	printf("%s\n", ft_strmap(str, &map));*/

	// FT_STRMAPI
	/*char	*str = "hello";
	printf("%s\n", str);
	printf("%s\n", ft_strmapi(str, &mapi));*/

	// FT_STRSUB
	/*char	*str = "world";
	printf("%s\n", ft_strsub(str, 1, 5));*/

	// FT_STRJOIN
	/*char	*str = "hello";
	char	*str12 = " world";
	printf("%s\n", ft_strjoin(str, str12));*/

	// FT_STRTRIM
	/*char *string = "hellou";
	printf("%s\n", ft_strtrim(string));*/

	// FT_STRNDUP
	/*char *str = "hello";
	printf("%s\n", ft_strndup(str, 4));*/

	// FT_STRSPLIT
	/*printf("%\n", ft_strsplit("*hello**students**", '*'));*/

	// FT_ITOA
	/*printf("%s\n", ft_itoa(1000));*/

	// FT_MEMCMP
	/*unsigned char	string1[10] = "snoop";
	unsigned char	string2[10] = "snoop";

	printf("%i\n", ft_memcmp(string1, string2, 5));*/
	
	// FT_STRREV
	/*char str[] = "paksuJ";
	printf("%s\n", ft_strrev(str));	*/

	
	
	return (0);
}
