/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   main.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/12/15 01:58:15 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/05 22:57:09 by nepage-l    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

int		main(void)
{
	char	*str;
	char	*str2;
	char	*str4;
	char	*str5;
	t_list	*lst;
	char 	*str3;
	int 	i;
	int 	fdread = open("testsrcs/lol", O_RDONLY);
	int 	fdwrite = open("testsrcs/lol", O_WRONLY);

	str4 = ft_strdup("str");
	str5 = strdup("banana\n");
	ft_strcpy(str5, str4);
	dprintf(1, "STRCPY = %s\n", str5);
	str3 = ft_strdup("str");
	str2 = ft_strdup("banana\n");
	str = malloc(sizeof(char) * 21);
	
	lst = ft_create_elem("hey");
	ft_list_push_front(&lst, str3);
	str3 = ft_strdup("str2");
	ft_list_push_front(&lst, str2);
	dprintf(1, "!!!! LIST NON SORT !!!!\n");
	dprintf(1, "1m%s\n",lst->data);
	dprintf(1, "2m%s\n",lst->next->data);
	dprintf(1, "2m%s\n",lst->next->next->data);
	ft_list_sort(&lst, ft_strcmp);
	dprintf(1, "!!! LIST SORT !!!\n");
	dprintf(1, "1m%s\n",lst->data);
	dprintf(1, "2m%s\n",lst->next->data);
	dprintf(1, "2m%s\n",lst->next->next->data);
//	dprintf(1, "%p\n",lst);
	//dprintf(1, "number of maillon = %d\n", ft_list_size(lst));
	dprintf(1, "!!!!!   WRITE   !!!!!\n");
	dprintf(1, "RET write = |%d|\n", i = write(fdwrite, "THIS IS BANANAS\n", 16));
	dprintf(1, "RET write = |%d|\n", i = write(1, "THIS IS BANANAS\n", 16));
	dprintf(1, "!!!!!   READ    !!!!!\n");
	dprintf(1, "RET read = |%d|\n", i = ft_read(fdread, str, -1));
	str[i] = '\0';
	dprintf(1, "str is |%s|\n", str);
	dprintf(1, "!!!!!  STRLEN   !!!!!\n");
	dprintf(1, "str : %shas length = %zu\n", str, ft_strlen(str));
	dprintf(1, "!!!!!  STRCMP   !!!!!\n");
	dprintf(1, "cmp str & banana\\n :%d\n", ft_strcmp(str, str2));
	dprintf(1, "!!!!!  STRDUP   !!!!!\n");
	dprintf(1, "address of str = %p\n", str);
	dprintf(1, "address of str duplicate = %p\n", str2 = ft_strdup(str));
	dprintf(1, "str = %sstr2 = %s", str, str2);
	printf("!!!!! ATOI_BASE !!!!!\n");
	printf("%d\n", ft_atoi_base("-0", "0123456789"));
	printf("%d\n", ft_atoi_base("-48", "0123456789"));
	printf("%d\n", ft_atoi_base(" -+--2147448", "0123456789"));
	printf("%d\n", ft_atoi_base("    ++---222", "012"));
	printf("%d\n", ft_atoi_base(" -333f", "0123"));
	printf("%d\n", ft_atoi_base("04f4", "01234"));
	printf("%d\n", ft_atoi_base("-55+5", "012345"));
	printf("%d\n", ft_atoi_base("6641-6", "0123456"));
	printf("%d\n", ft_atoi_base("777", "01234567"));
	printf("%d\n", ft_atoi_base("888", "012345678"));
	printf("%d\n", ft_atoi_base("99", "0123456789"));
	printf("%d\n", ft_atoi_base("aaa", "0123456789a"));
	printf("%d\n", ft_atoi_base("bbb", "0123456789ab"));
	printf("%d\n", ft_atoi_base("ccc", "0123456789abc"));
	printf("%d\n", ft_atoi_base("ddd", "0123456789abcd"));
	printf("%d\n", ft_atoi_base("eee", "0123456789abcde"));
	printf("%d\n", ft_atoi_base("ff", "0123456789abcdef"));
	printf("%d\n", ft_atoi_base("ggg", "0123456789abcdefg"));

	close(fdwrite);
	close(fdread);
	
	return (0);
}
