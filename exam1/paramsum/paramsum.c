void	putnbr(int nb)
{	if (nb > 9)
		putnbr(nb / 10);
	char remain = (nb % 10) + '0';
	write(1, &remain, 1);
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		char ac_count = ac -1;
		putnbr(ac_count);
	}	
	write(1, "\n",1);
}
