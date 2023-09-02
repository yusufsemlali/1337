/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 17:33:02 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/19 18:32:59 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	s;
	int	e;
	int	temp;

	s = 0;
	while (s < size - 1)
	{
		e = 0;
		while (e < size - s - 1)
		{
			if (tab[e] > tab[e + 1])
			{
				temp = tab[e];
				tab[e] = tab[e + 1];
				tab[e + 1] = temp;
			}
			e++;
		}
		s++;
	}
}
