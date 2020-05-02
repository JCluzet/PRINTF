/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_%.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocluzet <jo@cluzet.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 15:59:57 by jocluzet          #+#    #+#             */
/*   Updated: 2020/05/01 16:00:04 by jocluzet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_printf.h"

int	type_pourc(t_pf *pf)
{
	if (pf->boleen_largeur == 0)
		largeur_c(pf->nombre_largeur - 1, pf);
	ecrire('%', pf);
	if (pf->boleen_largeur == 1)
		largeur_c(pf->nombre_largeur - 1, pf);
	return (1 + pf->index);
}
