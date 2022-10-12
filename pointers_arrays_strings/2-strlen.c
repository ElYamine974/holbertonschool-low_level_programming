/**
 * _strlen -  unction that returns the length of a string
 * @s: pointer to the first char of the string
 * Return: the length of a string
 */
int _strlen(char *s)
{
int cnt = 0;
while (s[cnt] != '\0')
{
cnt++;
}
return (cnt);
}
