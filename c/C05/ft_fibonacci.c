// #include <unistd.h>
// #include <string.h>


// void ft_putchar(char c) {
// 	write(1, &c, 1);
// }

// void ft_putnbr(int nb) {
// 	int pos = 1;
// 	if (nb < 0) {
// 		pos = -1;
// 	}
// 	char splitNb [] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
// 	int i = 0;
// 	int del = 1000000000;
// 	while (i < 10) {
// 		splitNb [i] = nb / del * pos + '0';
// 		nb = nb - (nb / del * del);
// 		del = del / 10;
// 		i = i + 1;
// 	}
// 	if (pos == -1) {
// 		ft_putchar('-');
// 	}
// 	i = 0;
// 	while (splitNb[i] == '0' && i != 9) {
// 		i = i + 1;
// 	}
// 	if (i == 9 && splitNb[9] == '0') {
// 		ft_putchar('0');
// 	}
// 	else {
// 		while (i < 10) {
// 			ft_putchar(splitNb[i]);
// 			i = i + 1;
// 		}
// 	}
// }

// void ft_ft(int *nbr) {
// 	*nbr = 42;
// }

// void ft_ultimate_ft(int *********nbr) {
// 	*********nbr = 42;
// }

// void ft_swap(int *a, int *b){
// 	int c = *a;
// 	*a = *b;
// 	*b = c;
// }

// void ft_div_mod(int a, int b, int *div, int *mod){
// 	*div = a / b;
// 	*mod = a % b;
// }

// void ft_ultimate_div_mod(int *a, int *b){
// 	int div;
// 	int mod;
// 	div = *a / *b;
// 	mod = *a % *b;
// 	*a = div;
// 	*b = mod;
// }

// void ft_putstr(char *str) {
// 	int i = 0;
// 	while (str[i]) {
// 		ft_putchar(str[i]);
// 		i = i + 1;
// 	}
// }

// void ft_puttab(int *str, int size) {
// 	int i = 0;
// 	while (i < size) {
// 		ft_putnbr(str[i]);
// 		i = i + 1;
// 	}
// }

// int ft_strlen(char *str) {
// 	if (str == NULL) {
// 		return (0);
// 	}
// 	else {
// 		int i = 0;
// 		while (str[i]) {
// 			i++;
// 		}
// 		return (i);
// 	}
// }

// void ft_rev_int_tab(int *tab, int size) {
// 	int i = 0;
// 	int c;
// 	while (i < size / 2) {
// 		ft_swap(&tab[i],&tab[size - i - 1]);
// 		// c = tab[i];
// 		// tab[i] = tab[size - i - 1];
// 		// tab[size - i - 1] = c;
// 		i = i + 1;
// 	}
// }

// void ft_sort_int_tab(int *tab, int size) {
// 	int i = 0;
// 	int m = 0;
// 	while (i < size - 1) {
// 		m = 0;
// 		while (m + 1 < size) {
// 			if (tab[m] > tab[m + 1]) {
// 				ft_swap(&tab[m],&tab[m + 1]);
// 			}
// 			m = m + 1;
// 		}
// 		i = i + 1;
// 	}
// }

// char *ft_strcpy(char *dest, char *src) {
// 	int i = 0;
// 	while (src[i]) {
// 		dest[i] = src[i];
// 		i = i + 1;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// char *ft_strncpy(char *dest, char *src, unsigned int n) {
// 	unsigned int i = 0;
// 	while (i < n && src[i] != '\0') {
// 		dest[i] = src[i];
// 		i = i + 1;
// 	}
// 	while (i < n) {
// 		dest[i] = '\0';
// 		i = i + 1;
// 	}
// 	return (dest);
// }

// int ft_str_is_alpha(char *str) {
// 	int result = 1;
// 	int i = 0;
// 	while (str[i]) {
// 		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z')) {
// 			result = 0;
// 		}
// 		i = i + 1;
// 	}
// 	return(result);
// }

// int ft_str_is_numeric(char *str) {
// 	int result = 1;
// 	int i = 0;
// 	while (str[i]) {
// 		if (str[i] < '0' || str[i] > '9') {
// 			result = 0;
// 		}
// 		i = i + 1;
// 	}
// 	return(result);
// }

// int ft_str_is_lowercase(char *str) {
// 	int result = 1;
// 	int i = 0;
// 	while (str[i]) {
// 		if (str[i] < 'a' || str[i] > 'z') {
// 			result = 0;
// 		}
// 		i = i + 1;
// 	}
// 	return(result);
// }

// int ft_str_is_uppercase(char *str) {
// 	int result = 1;
// 	int i = 0;
// 	while (str[i]) {
// 		if (str[i] < 'A' || str[i] > 'Z') {
// 			result = 0;
// 		}
// 		i = i + 1;
// 	}
// 	return(result);
// }

// int ft_str_is_printable(char *str) {
// 	int result = 1;
// 	int i = 0;
// 	while (str[i]) {
// 		if (str[i] <= 31) {
// 			result = 0;
// 		}
// 		i = i + 1;
// 	}
// 	return(result);
// }

// char *ft_strupcase(char *str) {
// 	int i = 0;
// 	while (str[i]) {
// 		if (str[i] >= 'a' && str[i] <= 'z') {
// 			str[i] = str[i] - 'a' + 'A';
// 		}
// 		i = i + 1;
// 	}
// 	return(str);
// }

// char *ft_strlowcase(char *str) {
// 	int i = 0;
// 	while (str[i]) {
// 		if (str[i] >= 'A' && str[i] <= 'Z') {
// 			str[i] = str[i] - 'A' + 'a';
// 		}
// 		i = i + 1;
// 	}
// 	return(str);
// }

// int ft_char_is_aA0 (char c) {
// 	int res = 0;
// 	if (c >= 'a' && c <= 'z') {
// 		res = 1;
// 	}
// 	if (c >= 'A' && c <= 'Z') {
// 		res = 1;
// 	}
// 	if (c >= '0' && c <= '9') {
// 		res = 1;
// 	}
// 	return(res);
// }

// char *ft_strcapitalize(char *str) {
// 	str = ft_strlowcase(str);
// 	int i = 0;
// 	while (str[i]) {
// 		while (str[i] && ft_char_is_aA0(str[i]) == 0) {
// 			i = i + 1;
// 		}
// 		if (str[i] >= 'a' && str[i] <= 'z') {
// 			str[i] = str[i] - 'a' + 'A';
// 		}
// 		while (str[i] && ft_char_is_aA0(str[i]) == 1) {
// 			i = i + 1;
// 		}
// 	}
// 	return(str);
// }

// unsigned int ft_strlcpy(char *dest, char *src, unsigned int size) {
// 	unsigned int i = 0;
// 	if (size != 0) {
// 		while (i < size - 1) {
// 			dest[i] = src[i];
// 			i = i + 1;
// 		}
// 		dest[i] = '\0';
// 	}
// 	return (ft_strlen(src));
// }

// void ft_putstr_non_printable(char *str) {
// 	int i = 0;
// 	int size = ft_strlen(str);
// 	while (i < size) {
// 		if (str[i] <= 31) {
// 			ft_putchar('\\');
// 			ft_putnbr(str[i] / 16);
// 			if (str[i] % 16 < 10) {
// 				ft_putnbr(str[i] % 16);
// 			}
// 			else {
// 				ft_putchar(str[i] % 16 - 10 + 'a');
// 			}
// 		}
// 		else {
// 			ft_putchar(str[i]);
// 		}
// 		i = i + 1;
// 	}

// }

// int ft_strcmp(char *s1, char *s2) {
// 	int i = 0;
// 	while (s1[i] - s2[i] == 0 && (s1[i] && s2[i])) {
// 		i = i + 1;
// 	}
// 	return (s1[i] - s2[i]);
// }

// int ft_strncmp(char *s1, char *s2, unsigned int n) {
// 	unsigned int i = 0;
// 	while (i < n && s1[i] - s2[i] == 0 && (s1[i] && s2[i])) {
// 		i = i + 1;
// 	}
// 	return (s1[i] - s2[i]);
// }

// char *ft_strcat(char *dest, char *src) {
// 	int i = 0;
// 	int l = ft_strlen(dest);
// 	while (src[i]) {
// 		dest[i + l] = src[i];
// 		i = i + 1;
// 	}
// 	dest[i + l] = '\0';
// 	return (dest);
// }

// char *ft_strncat(char *dest, char *src, unsigned int nb) {
// 	unsigned int i = 0;
// 	unsigned int l = ft_strlen(dest);
// 	while (src[i] && i < nb) {
// 		dest[i + l] = src[i];
// 		i = i + 1;
// 	}
// 	dest[i + l] = '\0';
// 	return (dest);
// }

// char *ft_strstr(char *str, char *to_find) {
// 	int i = 0;
// 	int m = 0;
// 	while (str[i]) {
// 		m = 0;
// 		while (str[i + m] == to_find[m] && to_find[m]) {
// 			m = m + 1;
// 		}
// 		if (to_find[m] == '\0') {
// 			return (&str[i]);
// 		}
// 		i = i + 1;
// 	}
// 	return (NULL);
// }

// int ft_atoi(char *str) {
// 	int i = 0;
// 	int minus = 0;
// 	int start = 0;
// 	int m = 0;
// 	int splitNb [] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
// 	while (str[i] == ' ' || ((str[i] > 8) && (str[i] < 14))) {
// 		i = i + 1;
// 	}
// 	while (str[i] == '+' || str[i] == '-') {
// 		if (str[i] == '-') {
// 			minus = minus + 1;
// 		}
// 		i = i + 1;
// 	}
// 	if (minus % 2 == 0) {
// 		minus = 1;
// 	}
// 	else {
// 		minus = -1;
// 	}
// 	start = i;
// 	while (str[i] >= '0' && str[i] <= '9') {
// 		i = i + 1;
// 	}
// 	int end = i;
// 	int max10 = 1;
// 	i = 0;
// 	while (i + 1 < end - start) {
// 		max10 = max10 * 10;
// 		i = i + 1;
// 	}
// 	int n = 0;
// 	i = 0;
// 	while (i < end - start) {
// 		n = n + ((str[start + i] - '0') * max10);
// 		max10 = max10 / 10;
// 		i = i + 1;
// 	}
// 	return (n * minus);
// }

// void ft_putnbr_base(int nbr, char *base) {
// 	int i = 0;
// 	int m = 0;
// 	int is_base = 1;
// 	if (base != NULL) {
// 		if (ft_strlen(base) > 1) {
// 			while (base[i]) {
// 				m = i + 1;
// 				if (base[i] == '+' || base[i] == '-') {
// 					is_base = 0;
// 				}
// 				while (base[m]) {
// 					if (base[m] == base[i]) {
// 						is_base = 0;
// 					}
// 					m++;
// 				}
// 				i++;
// 			}
// 		}
// 		else {
// 			is_base = 0;
// 		}
// 	}
// 	else {
// 		is_base = 0;
// 	}
// 	if (is_base == 1) {
// 		int nbase = ft_strlen(base);
// 		unsigned int unsnbr;
// 		if (nbr < 0) {
// 			ft_putchar('-');
// 			unsnbr = nbr * (-1);
// 		}
// 		else {
// 			unsnbr = nbr;
// 		}
// 		int splitNb [] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

// 		i = 32;
// 		while (unsnbr >= nbase) {
// 			splitNb[i] = unsnbr % nbase;
// 			unsnbr = unsnbr / nbase;
// 			i = i - 1;
// 		}
// 		splitNb[i] = unsnbr;

// 		while (i <= 32) {
// 			ft_putchar(base[splitNb[i]]);
// 			i = i + 1;
// 		}

// 	}

// }

// int ft_power(int nb, int pow){
// 	if (pow == 0) {
// 		return(1);
// 	}
// 	else {
// 		int i = 0;
// 		int multi = nb;
// 		while (i + 1 < pow) {
// 			nb = nb * multi;
// 			i++;
// 		}
// 		return (nb);
// 	}
// }

// int ft_char_num_in_base(char c, char *base) {
// 	int i = 0;
// 	int res = -1;
// 	while (base[i]) {
// 		if (base[i] == c) {
// 			res = i;
// 		}
// 		i++;
// 	}
// 	return (res);
// }

// int ft_atoi_base(char *str, char *base) {
// 	int n = 0;
// 	int i = 0;
// 	int m = 0;
// 	int minus = 0;
// 	int start = 0;
// 	int end = 0;
// 	int is_base = 1;
// 	if (base != NULL) {
// 		if (ft_strlen(base) > 1) {
// 			while (base[i]) {
// 				m = i + 1;
// 				if (base[i] == '+' || base[i] == '-' || base[i] == ' ') {
// 					is_base = 0;
// 				}
// 				while (base[m]) {
// 					if (base[m] == base[i]) {
// 						is_base = 0;
// 					}
// 					m++;
// 				}
// 				i++;
// 			}
// 		}
// 		else {
// 			is_base = 0;
// 		}
// 	}
// 	else {
// 		is_base = 0;
// 	}
// 	if (is_base == 1) {
// 		i = 0;
// 		m = 0;
// 		while (str[i] == ' ' || ((str[i] > 8) && (str[i] < 14))) {
// 			i = i + 1;
// 		}
// 		while (str[i] == '+' || str[i] == '-') {
// 			if (str[i] == '-') {
// 				minus = minus + 1;
// 			}
// 			i = i + 1;
// 		}
// 		if (minus % 2 == 0) {
// 			minus = 1;
// 		}
// 		else {
// 			minus = -1;
// 		}
// 		start = i;
// 		while (ft_char_num_in_base(str[i], base) != -1) {
// 			i = i + 1;
// 		}
// 		end = i - 1;
// 		i = i - 1;
// 		while (i >= start) {
// 			n = n + (ft_char_num_in_base(str[i], base) * ft_power(ft_strlen(base), end - i));
// 			i = i - 1;
// 		}
// 		return (n * minus);
// 	}
// 	else {
// 		return (0);
// 	}
// }

// int ft_iterative_factorial(int nb){
// 	int i = 1;
// 	int res = 1;
// 	if (nb > 0)
// 	{
// 		while (i <= nb)
// 		{
// 			res = res * i;
// 			i++;
// 		}
// 		return(res);
// 	}
// 	else if (nb == 0)
// 	{
// 		return(1);
// 	}
// 	else
// 	{
// 		return(0);
// 	}
// }

// int ft_recursive_factorial(int nb)
// {
// 	if (nb > 0)
// 	{
// 		return(nb * ft_recursive_factorial(nb - 1));
// 	}
// 	else if (nb == 0)
// 	{
// 		return(1);
// 	}
// 	else
// 	{
// 		return(0);
// 	}
// }

// int ft_iterative_power(int nb, int power){
// 	int i = 0;
// 	int multi = nb;
// 	if (power > 0)
// 	{
// 		while (i + 1 < power) {
// 			nb = nb * multi;
// 			i++;
// 		}
// 		return (nb);
// 	}
// 	else if (power == 0)
// 	{
// 		return(1);
// 	}
// 	else
// 	{
// 		return(0);
// 	}
// }

// int ft_recursive_power(int nb, int power){
// 	if (power > 0)
// 	{
// 		return (nb * ft_recursive_power(nb, power - 1));
// 	}
// 	else if (power == 0)
// 	{
// 		return(1);
// 	}
// 	else
// 	{
// 		return(0);
// 	}
// }

int ft_fibonacci(int index)
{
	if (index > 1)
	{
		return(ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
	}
	else if (index == 1)
	{
		return(1);
	}
	else if (index == 0)
	{
		return(0);
	}
	else
	{
		return(-1);
	}
}

// int main(void) {
// 	ft_putnbr(ft_fibonacci(-100));
// }
