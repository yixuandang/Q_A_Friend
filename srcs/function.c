/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   function.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ydang <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 15:44:27 by ydang             #+#    #+#             */
/*   Updated: 2016/10/29 15:44:36 by ydang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "niander.h"

void	ft_quesnans(char *s)
{
	char	*str;
	//const char str1[4] = "Nian";

	str =(char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	str = s;
	while (str)
	{
		if ((ft_strcmp(str, "Nian der ni zai gan sha?")) == 0)
			ft_putstr("Chi Shi! [̲̅$̲̅(̲̅ιοο̲̅)̲̅$̲̅]\n");
		else if ((ft_strcmp(str, "Nian der dian hua duo shao?")) == 0)
			ft_putstr("Bu zhi dao! Ta mei dian hua.✐ ✎ ✏ ✑ ✒ ✍ ✉ ⌨\n");
		else if ((ft_strcmp(str, "Nian der neng zai jin nian zhao dao gong zuo ma?")) == 0)
			ft_putstr("Wo jue de yi ding neng!!!   (ง'̀-'́)ง \n");
		else if ((ft_strcmp(str, "Nian der der wo hao e ya zenm ban?")) == 0)
			ft_putstr("Wo qing ni chi fan!________Yeah! (◣◢)┌∩┐\n");
		else
			ft_putstr("Say something about nian der der plz. (◑_◑)\n");
		break;
	}
	return ;
}
