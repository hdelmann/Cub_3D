/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapset3.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgirard- <jgirard-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 19:41:54 by jgirard-          #+#    #+#             */
/*   Updated: 2023/11/28 14:30:34 by jgirard-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Cub3D.h"

float	calucl_dist(float x0, float x1, float y0, float y1)
{
	float	dist;

	dist = sqrt(((x1 - x0) * (x1 - x0))
			+ ((y1 - y0) * (y1 - y0)));
	return (dist);
}

int	my_strlen(const char *chaine)
{
	int	longueur;

	longueur = 0;
	while (chaine[longueur] != '\0')
	{
		longueur++;
	}
	return (longueur);
}

char	**ft_strcpy_env(char **envp)
{
	int		i;
	char	**cpyenv;

	i = 0;
	cpyenv = NULL;
	while (envp[i])
	{
		cpyenv[i] = ft_strdup_f(envp[i]);
		i++;
	}
	cpyenv[i] = NULL;
	return (cpyenv);
}
