/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amin <amin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 10:07:07 by amin              #+#    #+#             */
/*   Updated: 2020/12/24 10:07:09 by amin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!s1 && !s2)
		return (0);
	if (!s1 || !s2)
		return ((!s1) ? ft_strdup(s2) : ft_strdup(s1));
	len = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	str = ft_strcpy(str, s1);
	str = ft_strcat(str, s2);
	return (str);
}
