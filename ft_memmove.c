/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarkis <msarkis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 17:45:58 by msarkis           #+#    #+#             */
/*   Updated: 2024/06/16 12:00:19 by msarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dp;
	const char	*sp;

	if (src == dest)
		return (dest);
	dp = (char *)dest;
	sp = (const char *)src;
	if (sp < dp && sp + n > dp)
		while (n--)
			*(dp + n) = *(sp + n);
	else
	{
		while (n--)
		{
			*dp = *sp;
			dp++;
			sp++;
		}
	}
	return (dest);
}
