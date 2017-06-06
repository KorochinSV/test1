//New test commit
int stringStat(const char *string, int multiplier, int *count)
{
	int len = 0;
	while (*string++) len++;
	(*count)++;
	return len * multiplier;
}
