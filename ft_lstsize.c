/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:22:15 by miozkan           #+#    #+#             */
/*   Updated: 2022/10/09 14:22:16 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		idx;
	t_list	*position;

	idx = 0;
	position = lst;
	while (position != NULL)
	{
		position = position->next;
		idx++;
	}
	return (idx);
}
