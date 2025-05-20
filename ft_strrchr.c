/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarkis <msarkis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:32:42 by msarkis           #+#    #+#             */
/*   Updated: 2024/06/17 09:48:09 by msarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	char			*str;
	unsigned char	ch;

	ch = (unsigned char )c;
	str = (char *)s;
	i = ft_strlen(s);
	if (ch == 0)
		return (str + i++);
	while (i > 0)
	{
		if (str[i] == ch)
			return (&str[i]);
		i--;
	}
	if (str[0] == ch)
		return (&str[0]);
	return (NULL);
}
