/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocluzet <jo@cluzet.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/19 22:09:37 by jocluzet          #+#    #+#             */
/*   Updated: 2020/05/01 16:14:33 by jocluzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		type_c(va_list args, t_pf *pf)
{
	int	c;

	c = va_arg(args, int);
	if (pf->boleen_largeur == 0)
		largeur_c(pf->nombre_largeur - 1, pf);
	write(1, &c, 1);
	if (pf->boleen_largeur == 1)
		largeur_c(pf->nombre_largeur - 1, pf);
	pf->returndepf++;
	return (1 + pf->index);
}

void	largeur_c(int num, t_pf *pf)
{
	int		index;
	int		v;
	char	c;

	index = 0;
	v = 0;
	c = (pf->boleen_flag_0 && (pf->p_boleen == 0) &&
			pf->boleen_largeur != 1 ? '0' : ' ');
	while (num > v)
	{
		ecrire(c, pf);
		v++;
	}
}
