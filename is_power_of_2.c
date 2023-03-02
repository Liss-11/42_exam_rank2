int	    is_power_of_2(unsigned int n)
{
	if(n <= 0)
	{
		return (0);
	}
	while(n > 1)
	{

		n = n/2;
		if((n%2 != 0) && (n != 1))
		{
			return (0);
		}
	}
	return (1);
}
