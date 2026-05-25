/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   signal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agengemb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:42:18 by agengemb          #+#    #+#             */
/*   Updated: 2024/04/26 16:42:21 by agengemb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/signal.hpp"

bool close_serv = false;

void sigint_handler(int signal)
{
	if (signal == SIGINT)
	{
		close_serv = true;
	}
}

void set_signal(void)
{
	struct sigaction action;
	bzero(&action, sizeof(action));
	action.sa_handler = &sigint_handler;
	sigaction(SIGINT, &action, NULL);
}
