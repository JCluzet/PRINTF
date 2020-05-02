/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_xmaj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocluzet <jo@cluzet.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 16:02:16 by jocluzet          #+#    #+#             */
/*   Updated: 2020/05/01 16:09:20 by jocluzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int		type_xmaj(va_list args, t_pf *pf)
{
	unsigned int		d;
	char				c;

	initialisationflag(pf);
	pf->boleen_argc_d = 0;
	d = va_arg(args, unsigned int);
	c = (pf->boleen_flag_0 && (pf->p_boleen == 0) &&
			pf->boleen_largeur != 1 ? '0' : ' ');
	while (pf->nombre_precision > ft_strlen_x(d) + pf->d_num_zero)
		pf->d_num_zero++;
	if (pf->boleen_largeur != 2)
		pf->d_numberof0 = (pf->nombre_largeur - (ft_strlen_x(d)));
	else
		pf->d_numberof0 = ft_strlen_x(d);
	if (!pf->boleen_largeur)
		showlargeurx(pf, c, d);
	affichonsxmaj(d, pf);
	if (pf->boleen_largeur == 1)
		showlargeurx(pf, c, d);
	return (1 + pf->index);
}

void	affichonsxmaj(unsigned int d, t_pf *pf)
{
	int index;

	index = 0;
	while (pf->d_num_zero > index)
	{
		ecrire('0', pf);
		index++;
	}
	if ((d == 0 && ((pf->nombre_precision != 0) || (pf->p_boleen == 0))))
		ecrire('0', pf);
	if (!(d == 0 && (pf->p_boleen && pf->nombre_precision < 1)))
		ft_putnbr_base(d, "0123456789ABCDEF", pf);
}
