/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 12:02:21 by miozkan           #+#    #+#             */
/*   Updated: 2022/10/06 13:49:49 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(char *s, int c)
{
	int	index;

	c = c % 128;
	index = ft_strlen(s) + 1;
	while (index--)
	{
		if (*(s + index) == c)
			return (s + index);
	}
	return (0);
}
