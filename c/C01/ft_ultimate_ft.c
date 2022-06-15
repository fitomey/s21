// #include <unistd.h>

// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

// void ft_ft(int *nbr) {
//     *nbr = 42;
// }

void ft_ultimate_ft(int *********nbr) {
    *********nbr = 42;
}

// void ft_putnbr(int nb) {
//     int pos = 1;
//     if (nb < 0) {
//         pos = -1;
//     }
//     char splitNb [] = {'0', '0', '0', '0', '0', '0', '0', '0', '0', '0'};
//     int i = 0;
//     int del = 1000000000;
//     while (i < 10) {
//         splitNb [i] = nb / del * pos + '0';
//         nb = nb - (nb / del * del); 
//         del = del / 10;
//         i = i + 1;
//     }
//     if (pos == -1) {
//         ft_putchar('-');
//     }
//     i = 0;
//     while (splitNb[i] == '0' && i != 9) {
//         i = i + 1;
//     }
//     if (i == 9 && splitNb[9] == '0') {
//         ft_putchar('0');
//     }
//     else {
//         while (i < 10) {
//             ft_putchar(splitNb[i]);
//             i = i + 1;
//         }
//     }
// }

// int main(void) {
//     int n = 24;
//     int *p0N = &n;
//     int **p1N = &p0N;
//     int ***p2N = &p1N;
//     int ****p3N = &p2N;
//     int *****p4N = &p3N;
//     int ******p5N = &p4N;
//     int *******p6N = &p5N;
//     int ********p7N = &p6N;
//     int *********p8N = &p7N;
//     ft_ultimate_ft(p8N);
//     ft_putnbr(n);
// }