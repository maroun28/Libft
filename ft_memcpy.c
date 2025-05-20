/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarkis <msarkis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:19:44 by msarkis           #+#    #+#             */
/*   Updated: 2024/06/16 12:00:47 by msarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (!dest && !src)
	{
		return (0);
	}
	if (n == 0 || (dest == src))
	{
		return (dest);
	}
	dp = (char *)dest;
	sp = (const char *)src;
	while (n)
	{
		if (*dp != *sp)
		{
			*dp = *sp;
		}
		dp++;
		sp++;
		n--;
	}
	return (dest);
}
