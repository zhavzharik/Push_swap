/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abridger <abridger@student.21-school.ru    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/27 15:43:33 by abridger          #+#    #+#             */
/*   Updated: 2021/09/04 20:30:47 by abridger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_lstlast(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}

t_stack	*ft_lstlastbutone(t_stack *lst)
{
	if (!lst)
		ft_puterror();
	if (lst->next == NULL)
		return (NULL);
	while (lst->next->next)
		lst = lst->next;
	return (lst);
}

t_stack	*ft_lstinit(void)
{
	t_stack	*new;

	new = (t_stack *) malloc(sizeof(t_stack));
	new = NULL;
	return (new);
}

t_stack	*lastbutone_unsorted(t_stack *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next->flag == 0)
		lst = lst->next;
	return (lst);
}

int	ft_lstsize(t_stack *lst)
{
	int	length;

	if (!lst)
		return (0);
	length = 1;
	while (lst->next)
	{
		length++;
		lst = lst->next;
	}
	return (length);
}
