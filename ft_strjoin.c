/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:02:48 by miozkan           #+#    #+#             */
/*   Updated: 2022/10/06 15:02:49 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len1;
	int		len2;
	int		i;
	int		j;

	i = -1;
	j = -1;
	len1 = ft_strlen((char *)s1);
	len2 = ft_strlen((char *)s2);
	result = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
	while (++i < len1)
		result[i] = s1[i];
	while (++j < len2)
		result[i + j] = s2[j];
	result[i + j] = '\0';
	return (result);
}
