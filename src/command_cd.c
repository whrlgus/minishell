/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   command_cd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amin <amin@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 10:38:12 by amin              #+#    #+#             */
/*   Updated: 2020/12/24 14:06:52 by amin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

char		*find_home_path(char *home, char **envp)
{
	char	*path;
	int		n;
	int		i;

	i = -1;
	n = 0;
	while (envp[++i])
	{
		if (!(ft_strncmp(home, envp[i], 4)))
		{
			path = find_dir(envp[i], 4);
			return (path);
		}
	}
	return (0);
}

void	command_cd(char **commands, char **envp)
{
	char	*h_path;

	h_path = 0;
	if (commands[1] == NULL || ((commands[1] != NULL) &&
		(ft_strlen(&commands[1][0]) == 1) && (commands[1][0] == '~')))
		{
			h_path = find_home_path("HOME", envp);
			if (h_path == NULL || chdir(h_path) == -1)
				ft_putstr_fd("error", 2);
			return ;
		}
}
