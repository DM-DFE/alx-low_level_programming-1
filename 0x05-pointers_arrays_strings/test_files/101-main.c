
int main(int ac, char **av)
{
	if (ac != 2)
		return 1;

	// calculate the checksum of av[1]
	int checksum = 0;
	for (int i = 0; av[1][i] != '\0'; i++)
		checksum += av[1][i];

	if (checksum == 2772)
		return 0;

	return 1;
}
