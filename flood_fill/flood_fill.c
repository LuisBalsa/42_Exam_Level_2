typedef struct  s_point
{
    int           x;
    int           y;
} t_point;

void	ft(char **tab, t_point size, int x, int y, char c)
{
	if (x < 0 || y < 0 || x >= size.x || y >= size.y)
		return ;
	if (tab[y][x] != c)
		return ;
	tab[y][x] = 'F';
	ft(tab, size, x - 1, y, c);
	ft(tab, size, x + 1, y, c);
	ft(tab, size, x, y - 1, c);
	ft(tab, size, x, y + 1, c);
}

void  flood_fill(char **tab, t_point size, t_point begin)
{
	ft(tab, size, begin.x, begin.y, tab[begin.y][begin.x]);
}
