/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amin <amin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 09:38:36 by amin              #+#    #+#             */
/*   Updated: 2020/12/24 09:38:38 by amin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

int			find_equal(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '=')
			return (i);
		i++;
	}
	return (0);
}

char		*find_str(char *str, int n)
{
	int		i;
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * n + 1);
	i = 0;
	while (str[i] && i < n)
	{
		tmp[i] = str[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

char		*find_dir(char *str, int n)
{
	int		i;
	char	*tmp;

	tmp = (char *)malloc(sizeof(char) * ft_strlen(str) - n + 2);
	i = 0;
	while (str[n + 1])
	{
		tmp[i] = str[n + 1];
		n++;
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
