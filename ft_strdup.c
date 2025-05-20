/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msarkis <msarkis@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 14:45:56 by msarkis           #+#    #+#             */
/*   Updated: 2024/06/17 11:23:50 by msarkis          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s2;
	size_t	len;

	len = ft_strlen(s) + 1;
	s2 = malloc(len * sizeof(char));
	if (!s2)
		return (NULL);
	ft_strlcpy(s2, s, len);
	return (s2);
}
