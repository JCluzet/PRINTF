/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printforever.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lemarabe, schene, cbertola                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/09 14:50:35 by lesbests          #+#    #+#             */
/*   Updated: 2019/12/12 02:22:03 by cbertola         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void red()
{
  printf("\033[1;31m");
}

void green()
{
  printf("\033[0;32m");
}

void reset()
{
  printf("\033[0m\n");
}

void color(int ret, int ret2)
{
	if (ret == ret2)
		green();
	else
		red();
}

int main()
{
    char *str = "hello !";
    char *vide = "";
    char *ptr_nul = NULL;
    char c = 'c';
    char char_nul = 0;
    char char_sp = ' ';
    int max = 2147483647;
    int min = -2147483648;
    int pos = 42;
    int neg = -209;
    int z = 0;
    unsigned int u_max = 4294967295;
    unsigned int u_min = 0;
	int ret = 0;
	int ret2 = 0;

 printf("\n***************\nFORMAT D\n***************\n\n");

    printf(">> BASIC_____________________________________________________________________________________________________\n");
    printf(">> %%d\n");
	ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%d|\t|%d|\t|%d|\t|%d|\t|%d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%d|\t|%d|\t|%d|\t|%d|\t|%d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> %%04d\n");
	ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%04d|\t|%08d|\t|%04d|\t|%04d|\t|%04d|\n", pos, -71, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%04d|\t|%08d|\t|%04d|\t|%04d|\t|%04d|\n", pos, -71, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> %%08.1d\n");
	ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%08.1d|\t|%08.1d|\t|%08.1d|\t|%08.1d|\t|%08.1d|\n", pos, -71, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%08.1d|\t|%08.1d|\t|%08.1d|\t|%08.1d|\t|%08.1d|\n", pos, -71, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> %%04.6d\n");
	ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%04.6d|\t|%04.6d|\t|%04.6d|\t|%04.6d|\t|%04.6d|\n", pos, -71, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%04.6d|\t|%04.6d|\t|%04.6d|\t|%04.6d|\t|%04.6d|\n", pos, -71, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> %%004.6d\n");
	ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%004.6d|\t|%004.6d|\t|%004.6d|\t|%004.6d|\t|%004.6d|\n", pos, -71, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%004.6d|\t|%004.6d|\t|%004.6d|\t|%004.6d|\t|%004.6d|\n", pos, -71, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();



    printf(">> Precision = 0______________________________________________________________________________________________\n");
	ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.0d|\t|%12.0d|\t|%12.0d|\t|%12.0d|\t|%12.0d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.0d|\t|%12.0d|\t|%12.0d|\t|%12.0d|\t|%12.0d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.0d|\t|%-12.0d|\t|%-12.0d|\t|%-12.0d|\t|%-12.0d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.0d|\t|%-12.0d|\t|%-12.0d|\t|%-12.0d|\t|%-12.0d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 1______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.1d|\t|%12.1d|\t|%12.1d|\t|%12.1d|\t|%12.1d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.1d|\t|%12.1d|\t|%12.1d|\t|%12.1d|\t|%12.1d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.1d|\t|%-12.1d|\t|%-12.1d|\t|%-12.1d|\t|%-12.1d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.1d|\t|%-12.1d|\t|%-12.1d|\t|%-12.1d|\t|%-12.1d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 6______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.6d|\t|%12.6d|\t|%12.6d|\t|%12.6d|\t|%12.6d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.6d|\t|%12.6d|\t|%12.6d|\t|%12.6d|\t|%12.6d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.6d|\t|%-12.6d|\t|%-12.6d|\t|%-12.6d|\t|%-12.6d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.6d|\t|%-12.6d|\t|%-12.6d|\t|%-12.6d|\t|%-12.6d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 12______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.12d|\t|%12.12d|\t|%12.12d|\t|%12.12d|\t|%12.12d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.12d|\t|%12.12d|\t|%12.12d|\t|%12.12d|\t|%12.12d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.12d|\t|%-12.12d|\t|%-12.12d|\t|%-12.12d|\t|%-12.12d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.12d|\t|%-12.12d|\t|%-12.12d|\t|%-12.12d|\t|%-12.12d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 0____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.0d|\t|%012.0d|\t|%012.0d|\t|%012.0d|\t|%012.0d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.0d|\t|%012.0d|\t|%012.0d|\t|%012.0d|\t|%012.0d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 1____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.1d|\t|%012.1d|\t|%012.1d|\t|%012.1d|\t|%012.1d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.1d|\t|%012.1d|\t|%012.1d|\t|%012.1d|\t|%012.1d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 6____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.6d|\t|%012.6d|\t|%012.6d|\t|%012.6d|\t|%012.6d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.6d|\t|%012.6d|\t|%012.6d|\t|%012.6d|\t|%012.6d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width &&  Precision = 12___________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.12d|\t|%012.12d|\t|%012.12d|\t|%012.12d|\t|%012.12d|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.12d|\t|%012.12d|\t|%012.12d|\t|%012.12d|\t|%012.12d|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();
    
    printf("\n/!\\ UNDEFINED BEHAVIOR = flag - && 0width\n");
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.0d|\t|%-012.0d|\t|%-012.0d|\t|%-012.0d|\t|%-012.0d|\n", pos, neg, z, max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.1d|\t|%-012.1d|\t|%-012.1d|\t|%-012.1d|\t|%-012.1d|\n", pos, neg, z, max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.6d|\t|%-012.6d|\t|%-012.6d|\t|%-012.6d|\t|%-012.6d|\n", pos, neg, z, max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.12d|\t|%-012.12d|\t|%-012.12d|\t|%-012.12d|\t|%-012.12d|\n", pos, neg, z, max, min);

 printf("\n***************\nFORMAT I\n***************\n\n");

    printf(">> Precision = 0______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.0i|\t|%12.0i|\t|%12.0i|\t|%12.0i|\t|%12.0i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.0i|\t|%12.0i|\t|%12.0i|\t|%12.0i|\t|%12.0i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.0i|\t|%-12.0i|\t|%-12.0i|\t|%-12.0i|\t|%-12.0i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.0i|\t|%-12.0i|\t|%-12.0i|\t|%-12.0i|\t|%-12.0i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 1______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.1i|\t|%12.1i|\t|%12.1i|\t|%12.1i|\t|%12.1i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.1i|\t|%12.1i|\t|%12.1i|\t|%12.1i|\t|%12.1i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.1i|\t|%-12.1i|\t|%-12.1i|\t|%-12.1i|\t|%-12.1i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.1i|\t|%-12.1i|\t|%-12.1i|\t|%-12.1i|\t|%-12.1i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 6______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.6i|\t|%12.6i|\t|%12.6i|\t|%12.6i|\t|%12.6i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.6i|\t|%12.6i|\t|%12.6i|\t|%12.6i|\t|%12.6i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.6i|\t|%-12.6i|\t|%-12.6i|\t|%-12.6i|\t|%-12.6i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.6i|\t|%-12.6i|\t|%-12.6i|\t|%-12.6i|\t|%-12.6i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 12______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.12i|\t|%12.12i|\t|%12.12i|\t|%12.12i|\t|%12.12i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.12i|\t|%12.12i|\t|%12.12i|\t|%12.12i|\t|%12.12i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.12i|\t|%-12.12i|\t|%-12.12i|\t|%-12.12i|\t|%-12.12i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.12i|\t|%-12.12i|\t|%-12.12i|\t|%-12.12i|\t|%-12.12i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 0____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.0i|\t|%012.0i|\t|%012.0i|\t|%012.0i|\t|%012.0i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.0i|\t|%012.0i|\t|%012.0i|\t|%012.0i|\t|%012.0i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 1____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.1i|\t|%012.1i|\t|%012.1i|\t|%012.1i|\t|%012.1i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.1i|\t|%012.1i|\t|%012.1i|\t|%012.1i|\t|%012.1i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 6____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.6i|\t|%012.6i|\t|%012.6i|\t|%012.6i|\t|%012.6i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.6i|\t|%012.6i|\t|%012.6i|\t|%012.6i|\t|%012.6i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width &&  Precision = 12___________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.12i|\t|%012.12i|\t|%012.12i|\t|%012.12i|\t|%012.12i|\n", pos, neg, z, max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.12i|\t|%012.12i|\t|%012.12i|\t|%012.12i|\t|%012.12i|\n", pos, neg, z, max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf("\n/!\\ UNDEFINED BEHAVIOR = flag - && 0width\n");
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.0i|\t|%-012.0i|\t|%-012.0i|\t|%-012.0i|\t|%-012.0i|\n", pos, neg, z, max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.1i|\t|%-012.1i|\t|%-012.1i|\t|%-012.1i|\t|%-012.1i|\n", pos, neg, z, max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.6i|\t|%-012.6i|\t|%-012.6i|\t|%-012.6i|\t|%-012.6i|\n", pos, neg, z, max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.12i|\t|%-012.12i|\t|%-012.12i|\t|%-012.12i|\t|%-012.12i|\n", pos, neg, z, max, min);


    printf("\n***************\nFORMAT U\n***************\n\n");

   printf(">> Precision = 0______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.0u|\t|%12.0u|\t|%12.0u|\t|%12.0u|\t|%12.0u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.0u|\t|%12.0u|\t|%12.0u|\t|%12.0u|\t|%12.0u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.0u|\t|%-12.0u|\t|%-12.0u|\t|%-12.0u|\t|%-12.0u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.0u|\t|%-12.0u|\t|%-12.0u|\t|%-12.0u|\t|%-12.0u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf(">> Precision = 1______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.1u|\t|%12.1u|\t|%12.1u|\t|%12.1u|\t|%12.1u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.1u|\t|%12.1u|\t|%12.1u|\t|%12.1u|\t|%12.1u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.1u|\t|%-12.1u|\t|%-12.1u|\t|%-12.1u|\t|%-12.1u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.1u|\t|%-12.1u|\t|%-12.1u|\t|%-12.1u|\t|%-12.1u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf(">> Precision = 6______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.6u|\t|%12.6u|\t|%12.6u|\t|%12.6u|\t|%12.6u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.6u|\t|%12.6u|\t|%12.6u|\t|%12.6u|\t|%12.6u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.6u|\t|%-12.6u|\t|%-12.6u|\t|%-12.6u|\t|%-12.6u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.6u|\t|%-12.6u|\t|%-12.6u|\t|%-12.6u|\t|%-12.6u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf(">> Precision = 12______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.12u|\t|%12.12u|\t|%12.12u|\t|%12.12u|\t|%12.12u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.12u|\t|%12.12u|\t|%12.12u|\t|%12.12u|\t|%12.12u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.12u|\t|%-12.12u|\t|%-12.12u|\t|%-12.12u|\t|%-12.12u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.12u|\t|%-12.12u|\t|%-12.12u|\t|%-12.12u|\t|%-12.12u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf(">> 0width && Precision = 0____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.0u|\t|%012.0u|\t|%012.0u|\t|%012.0u|\t|%012.0u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.0u|\t|%012.0u|\t|%012.0u|\t|%012.0u|\t|%012.0u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf(">> 0width && Precision = 1____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.1u|\t|%012.1u|\t|%012.1u|\t|%012.1u|\t|%012.1u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.1u|\t|%012.1u|\t|%012.1u|\t|%012.1u|\t|%012.1u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf(">> 0width && Precision = 6____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.6u|\t|%012.6u|\t|%012.6u|\t|%012.6u|\t|%012.6u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.6u|\t|%012.6u|\t|%012.6u|\t|%012.6u|\t|%012.6u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf(">> 0width &&  Precision = 12___________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.12u|\t|%012.12u|\t|%012.12u|\t|%012.12u|\t|%012.12u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.12u|\t|%012.12u|\t|%012.12u|\t|%012.12u|\t|%012.12u|\n", pos, neg, z, u_max, u_min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf("\n/!\\ UNDEFINED BEHAVIOR = flag - && 0width\n");
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.0u|\t|%-012.0u|\t|%-012.0u|\t|%-012.0u|\t|%-012.0u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-012.0u|\t|%-012.0u|\t|%-012.0u|\t|%-012.0u|\t|%-012.0u|\n", pos, neg, z, u_max, u_min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.1u|\t|%-012.1u|\t|%-012.1u|\t|%-012.1u|\t|%-012.1u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-012.1u|\t|%-012.1u|\t|%-012.1u|\t|%-012.1u|\t|%-012.1u|\n", pos, neg, z, u_max, u_min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.6u|\t|%-012.6u|\t|%-012.6u|\t|%-012.6u|\t|%-012.6u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-012.6u|\t|%-012.6u|\t|%-012.6u|\t|%-012.6u|\t|%-012.6u|\n", pos, neg, z, u_max, u_min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.12u|\t|%-012.12u|\t|%-012.12u|\t|%-012.12u|\t|%-012.12u|\n", pos, neg, z, u_max, u_min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-012.12u|\t|%-012.12u|\t|%-012.12u|\t|%-012.12u|\t|%-012.12u|\n", pos, neg, z, u_max, u_min);



    printf("\n***************\nFORMAT X-MIN\n***************\n\n");

    printf(">> Precision = 0______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%x|\t|%x|\t|%x|\t|%x|\t|%x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%x|\t|%x|\t|%x|\t|%x|\t|%x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    printf(">> Precision = 0______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.0x|\t|%12.0x|\t|%12.0x|\t|%12.0x|\t|%12.0x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.0x|\t|%12.0x|\t|%12.0x|\t|%12.0x|\t|%12.0x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.0x|\t|%-12.0x|\t|%-12.0x|\t|%-12.0x|\t|%-12.0x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.0x|\t|%-12.0x|\t|%-12.0x|\t|%-12.0x|\t|%-12.0x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 1______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.1x|\t|%12.1x|\t|%12.1x|\t|%12.1x|\t|%12.1x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.1x|\t|%12.1x|\t|%12.1x|\t|%12.1x|\t|%12.1x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.1x|\t|%-12.1x|\t|%-12.1x|\t|%-12.1x|\t|%-12.1x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.1x|\t|%-12.1x|\t|%-12.1x|\t|%-12.1x|\t|%-12.1x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 6______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.6x|\t|%12.6x|\t|%12.6x|\t|%12.6x|\t|%12.6x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.6x|\t|%12.6x|\t|%12.6x|\t|%12.6x|\t|%12.6x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.6x|\t|%-12.6x|\t|%-12.6x|\t|%-12.6x|\t|%-12.6x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.6x|\t|%-12.6x|\t|%-12.6x|\t|%-12.6x|\t|%-12.6x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 12______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.12x|\t|%12.12x|\t|%12.12x|\t|%12.12x|\t|%12.12x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.12x|\t|%12.12x|\t|%12.12x|\t|%12.12x|\t|%12.12x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.12x|\t|%-12.12x|\t|%-12.12x|\t|%-12.12x|\t|%-12.12x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.12x|\t|%-12.12x|\t|%-12.12x|\t|%-12.12x|\t|%-12.12x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 0____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.0x|\t|%012.0x|\t|%012.0x|\t|%012.0x|\t|%012.0x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.0x|\t|%012.0x|\t|%012.0x|\t|%012.0x|\t|%012.0x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 1____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.1x|\t|%012.1x|\t|%012.1x|\t|%012.1x|\t|%012.1x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.1x|\t|%012.1x|\t|%012.1x|\t|%012.1x|\t|%012.1x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 6____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.6x|\t|%012.6x|\t|%012.6x|\t|%012.6x|\t|%012.6x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.6x|\t|%012.6x|\t|%012.6x|\t|%012.6x|\t|%012.6x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width &&  Precision = 12___________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.12x|\t|%012.12x|\t|%012.12x|\t|%012.12x|\t|%012.12x|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.12x|\t|%012.12x|\t|%012.12x|\t|%012.12x|\t|%012.12x|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf("\n/!\\ UNDEFINED BEHAVIOR = flag - && 0width\n");
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.0x|\t|%-012.0x|\t|%-012.0x|\t|%-012.0x|\t|%-012.0x|\n", pos, neg, z, u_max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.1x|\t|%-012.1x|\t|%-012.1x|\t|%-012.1x|\t|%-012.1x|\n", pos, neg, z, u_max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.6x|\t|%-012.6x|\t|%-012.6x|\t|%-012.6x|\t|%-012.6x|\n", pos, neg, z, u_max, min);
    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-012.12x|\t|%-012.12x|\t|%-012.12x|\t|%-012.12x|\t|%-012.12x|\n", pos, neg, z, u_max, min);

    
    

    printf("\n***************\nFORMAT X-MAJ\n***************\n\n");
   
    printf(">> Precision = 0______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.0X|\t|%12.0X|\t|%12.0X|\t|%12.0X|\t|%12.0X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.0X|\t|%12.0X|\t|%12.0X|\t|%12.0X|\t|%12.0X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.0X|\t|%-12.0X|\t|%-12.0X|\t|%-12.0X|\t|%-12.0X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.0X|\t|%-12.0X|\t|%-12.0X|\t|%-12.0X|\t|%-12.0X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 1______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.1X|\t|%12.1X|\t|%12.1X|\t|%12.1X|\t|%12.1X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.1X|\t|%12.1X|\t|%12.1X|\t|%12.1X|\t|%12.1X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.1X|\t|%-12.1X|\t|%-12.1X|\t|%-12.1X|\t|%-12.1X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.1X|\t|%-12.1X|\t|%-12.1X|\t|%-12.1X|\t|%-12.1X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 6______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.6X|\t|%12.6X|\t|%12.6X|\t|%12.6X|\t|%12.6X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.6X|\t|%12.6X|\t|%12.6X|\t|%12.6X|\t|%12.6X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.6X|\t|%-12.6X|\t|%-12.6X|\t|%-12.6X|\t|%-12.6X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.6X|\t|%-12.6X|\t|%-12.6X|\t|%-12.6X|\t|%-12.6X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> Precision = 12______________________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%12.12X|\t|%12.12X|\t|%12.12X|\t|%12.12X|\t|%12.12X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%12.12X|\t|%12.12X|\t|%12.12X|\t|%12.12X|\t|%12.12X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[flag -]\t|%-12.12X|\t|%-12.12X|\t|%-12.12X|\t|%-12.12X|\t|%-12.12X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[flag -]\t|%-12.12X|\t|%-12.12X|\t|%-12.12X|\t|%-12.12X|\t|%-12.12X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 0____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.0X|\t|%012.0X|\t|%012.0X|\t|%012.0X|\t|%012.0X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.0X|\t|%012.0X|\t|%012.0X|\t|%012.0X|\t|%012.0X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 1____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.1X|\t|%012.1X|\t|%012.1X|\t|%012.1X|\t|%012.1X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.1X|\t|%012.1X|\t|%012.1X|\t|%012.1X|\t|%012.1X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width && Precision = 6____________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.6X|\t|%012.6X|\t|%012.6X|\t|%012.6X|\t|%012.6X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.6X|\t|%012.6X|\t|%012.6X|\t|%012.6X|\t|%012.6X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    printf(">> 0width &&  Precision = 12___________________________________________________________________________________\n");
    ret2 = ft_printf("MY_PRINTF\t[no flag]\t|%012.12X|\t|%012.12X|\t|%012.12X|\t|%012.12X|\t|%012.12X|\n", pos, neg, z, u_max, min);
    ret = printf("VR_PRINTF\t[no flag]\t|%012.12X|\t|%012.12X|\t|%012.12X|\t|%012.12X|\t|%012.12X|\n", pos, neg, z, u_max, min);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();





    printf("***************\nFORMAT C\n***************\n-> ignorer +, precision, 0width\n\n");

    printf("COMPORTEMENTS DEFINIS\n");
    ret2 = ft_printf("MY_PRINTF\t['c']\t|%c|\t|%3c|\t|%-3c|\t|%15c|\t|%-15c|\n", c, c, c, c, c);
	ret = printf("VR_PRINTF\t['c']\t|%c|\t|%3c|\t|%-3c|\t|%15c|\t|%-15c|\n", c, c, c, c, c);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

	ret2 = ft_printf("MY_PRINTF\t[null]\t|%c|\t|%3c|\t|%-3c|\t|%15c|\t|%-15c|\n", char_nul, char_nul, char_nul, char_nul, char_nul);
	ret = printf("VR_PRINTF\t[null]\t|%c|\t|%3c|\t|%-3c|\t|%15c|\t|%-15c|\n", char_nul, char_nul, char_nul, char_nul, char_nul);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

	ret2 = ft_printf("MY_PRINTF\t[space]\t|%c|\t|%3c|\t|%-3c|\t|%15c|\t|%-15c|\n", char_sp, char_sp, char_sp, char_sp, char_sp);
	ret = printf("VR_PRINTF\t[space]\t|%c|\t|%3c|\t|%-3c|\t|%15c|\t|%-15c|\n", char_sp, char_sp, char_sp, char_sp, char_sp);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

	printf("\n/!\\ UNDEFINED BEHAVIOR\n");
    ret2 = ft_printf("MY_PRINTF\t['c']\t|%.3c|\t|%3.3c|\t|%-3.3c|\t|%15.3c|\t|%-15.3c|\n", c, c, c, c, c);
    ret = printf("VR_PRINTF\t['c']\t|%.3c|\t|%3.3c|\t|%-3.3c|\t|%15.3c|\t|%-15.3c|\n", c, c, c, c, c);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

	ret2 = ft_printf("MY_PRINTF\t[null]\t|%.3c|\t|%3.3c|\t|%-3.3c|\t|%15.3c|\t|%-15.3c|\n", char_nul, char_nul, char_nul, char_nul, char_nul);
	ret = printf("VR_PRINTF\t[null]\t|%.3c|\t|%3.3c|\t|%-3.3c|\t|%15.3c|\t|%-15.3c|\n", char_nul, char_nul, char_nul, char_nul, char_nul);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

	ret2 = ft_printf("MY_PRINTF\t[space]\t|%.3c|\t|%3.3c|\t|%-3.3c|\t|%15.3c|\t|%-15.3c|\n", char_sp, char_sp, char_sp, char_sp, char_sp);
	ret = printf("VR_PRINTF\t[space]\t|%.3c|\t|%3.3c|\t|%-3.3c|\t|%15.3c|\t|%-15.3c|\n", char_sp, char_sp, char_sp, char_sp, char_sp);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();
   
    printf("\n***************\nFORMAT S\n***************\n-> ignorer +, 0width\n\n");
    ret2 = ft_printf("MY_PRINTF\t[chaine]\t|%s|\t|%12s|\t|%3s|\t|%.12s|\t|%.3s|\t|%12.3s|\t|%3.3s|\t|%3.12s|\t|%12.12s|\t|%.0s|\n", str, str, str, str, str, str, str, str, str, str);
    ret = printf("VR_PRINTF\t[chaine]\t|%s|\t|%12s|\t|%3s|\t|%.12s|\t|%.3s|\t|%12.3s|\t|%3.3s|\t|%3.12s|\t|%12.12s|\t|%.0s|\n", str, str, str, str, str, str, str, str, str, str);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[chaine -]\t|%-s|\t|%-12s|\t|%-3s|\t|%-.12s|\t|%-.3s|\t|%-12.3s|\t|%-3.3s|\t|%-3.12s|\t|%-12.12s|\t|%-.0s|\n", str, str, str, str, str, str, str, str, str, str);
    ret = printf("VR_PRINTF\t[chaine -]\t|%-s|\t|%-12s|\t|%-3s|\t|%-.12s|\t|%-.3s|\t|%-12.3s|\t|%-3.3s|\t|%-3.12s|\t|%-12.12s|\t|%-.0s|\n", str, str, str, str, str, str, str, str, str, str);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();
    
    ret2 = ft_printf("MY_PRINTF\t[vide   ]\t|%s|\t|%12s|\t|%3s|\t|%.12s|\t|%.3s|\t|%12.3s|\t|%3.3s|\t|%3.12s|\t|%12.12s|\t|%.0s|\n", vide, vide, vide, vide, vide, vide, vide, vide, vide, vide);
    ret = printf("VR_PRINTF\t[vide   ]\t|%s|\t|%12s|\t|%3s|\t|%.12s|\t|%.3s|\t|%12.3s|\t|%3.3s|\t|%3.12s|\t|%12.12s|\t|%.0s|\n", vide, vide, vide, vide, vide, vide, vide, vide, vide, vide);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[vide -]\t|%-s|\t|%-12s|\t|%-3s|\t|%-.12s|\t|%-.3s|\t|%-12.3s|\t|%-3.3s|\t|%-3.12s|\t|%-12.12s|\t|%-.0s|\n", vide, vide, vide, vide, vide, vide, vide, vide, vide, vide);
    ret = printf("VR_PRINTF\t[vide -]\t|%-s|\t|%-12s|\t|%-3s|\t|%-.12s|\t|%-.3s|\t|%-12.3s|\t|%-3.3s|\t|%-3.12s|\t|%-12.12s|\t|%-.0s|\n", vide, vide, vide, vide, vide, vide, vide, vide, vide, vide);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[null   ]\t|%s|\t|%12s|\t|%3s|\t|%.12s|\t|%.3s|\t|%12.3s|\t|%3.3s|\t|%3.12s|\t|%12.12s|\t|%.0s|\n", ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul); 
    ret = printf("VR_PRINTF\t[null   ]\t|%s|\t|%12s|\t|%3s|\t|%.12s|\t|%.3s|\t|%12.3s|\t|%3.3s|\t|%3.12s|\t|%12.12s|\t|%.0s|\n", ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset();

    ret2 = ft_printf("MY_PRINTF\t[null -]\t|%-s|\t|%-12s|\t|%-3s|\t|%-.12s|\t|%-.3s|\t|%-12.3s|\t|%-3.3s|\t|%-3.12s|\t|%-12.12s|\t|%-.0s|\n", ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul);
    ret = printf("VR_PRINTF\t[null -]\t|%-s|\t|%-12s|\t|%-3s|\t|%-.12s|\t|%-.3s|\t|%-12.3s|\t|%-3.3s|\t|%-3.12s|\t|%-12.12s|\t|%-.0s|\n", ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul, ptr_nul);
	color(ret, ret2);
	printf("PRINTF = %d,\t FT_PRINTF = %d\n", ret, ret2);
	reset(); 
}
