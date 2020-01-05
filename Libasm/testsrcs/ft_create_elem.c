/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_create_elem.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: nepage-l <nepage-l@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/10/09 14:33:51 by jdesbord     #+#   ##    ##    #+#       */
/*   Updated: 2020/01/04 16:45:03 by nepage-l    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "main.h"

t_list	*ft_create_elem(void *data)
{
	t_list *new;

	if (!(new = malloc(sizeof(t_list) * 1)))
		return (NULL);
	new->data = data;
	new->next = NULL;
	return (new);
}
