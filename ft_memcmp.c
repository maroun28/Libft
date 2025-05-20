/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarkis <msarkis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 12:29:55 by msarkis           #+#    #+#             */
/*   Updated: 2024/06/17 10:15:06 by msarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*str1;
	const char	*str2;

	if (n == 0)
		return (0);
	str1 = (const char *) s1;
	str2 = (const char *) s2;
	i = 0;
	while ((i < n - 1) && (str1[i] == str2[i]))
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
