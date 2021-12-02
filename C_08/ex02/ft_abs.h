/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: algaspar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 16:25:02 by algaspar          #+#    #+#             */
/*   Updated: 2021/11/30 18:56:32 by algaspar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ABS_H
# define FT_ABS_H

int	absval(int val)
{
	if (val < 0)
		val = -val;
	return (val);
}
# define ABS(Value) absval(Value)
#endif
