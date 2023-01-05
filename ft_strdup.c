/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:56:06 by miozkan           #+#    #+#             */
/*   Updated: 2022/10/06 14:30:50 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	char	*s;
	int		i;
	int		j;

	i = ft_strlen(src);
	s = (char *)malloc(sizeof(src[0]) * i);
	j = 0;
	if (!s)
		return (NULL);
	while (j < i)
	{
		s[j] = src[j];
		j++;
	}
	s[j] = '\0';
	return (s);
}
