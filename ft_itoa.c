/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miozkan <miozkan@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 16:30:06 by miozkan           #+#    #+#             */
/*   Updated: 2022/10/06 16:42:44 by miozkan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int				idx;
	int				size;
	char			tmp;

	size = ft_strlen(str);
	idx = 0;
	while (idx < (size / 2))
	{
		tmp = str[idx];
		str[idx] = str[size - idx - 1];
		str[size - idx - 1] = tmp;
		idx++;
	}
	return (str);
}

int	ft_intlen(int n)
{
	int				idx;
	long long		tmp;

	tmp = n;
	idx = 1;
	if (tmp < 0)
	{
		tmp = tmp * -1;
		idx++;
	}
	while (tmp >= 10)
	{
		tmp = tmp / 10;
		idx++;
	}
	return (idx);
}

void	if_block(int *is_n, unsigned int *pos_n, int n)
{
	if (n < 0)
	{
		*is_n = 1;
		*pos_n = -n;
	}
	else
	{
		*is_n = 0;
		*pos_n = n;
	}
}	

char	*ft_itoa(int n)
{
	int				idx;
	int				is_negative;
	unsigned int	positive_n;
	char			*value;

	if (n == 0)
		return (ft_strdup("0"));
	value = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1));
	if (!value)
		return (NULL);
	if_block(&is_negative, &positive_n, n);
	idx = 0;
	while (positive_n != 0)
	{
		value[idx++] = (positive_n % 10) + '0';
		positive_n = positive_n / 10;
	}
	if (is_negative)
		value[idx++] = '-';
	value[idx] = '\0';
	return (ft_strrev(value));
}
