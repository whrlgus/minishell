/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amin <amin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 09:38:31 by amin              #+#    #+#             */
/*   Updated: 2020/12/24 09:38:33 by amin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	ft_exit(void)
{
	ft_freearr(g_envp);
	write(1, "\n", 1);
	exit(0);
}

void		*ft_envmalloc(size_t size)
{
	void	*memory;

	if (!(memory = malloc(size)))
		return (NULL);
	ft_bzero(memory, size);
	return (memory);
}

void		ft_freearr(char **arr)
{
	int		i;

	if (!arr)
		return ;
	i = 0;
	while (arr[i])
	{
		free(arr[i]);
		i++;
	}
	free(arr);
	arr = NULL;
}

int		envp_len(char **envp)
{
	int		i;
	int		cnt;

	i = 0;
	cnt = 0;
	while (envp[i])
	{
		i++;
		cnt++;
	}
	return (cnt);
}
