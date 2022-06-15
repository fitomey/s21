//#include <unistd.h>

/*void ft_putchar(char c) {
    write(1, &c, 1);
}*/

void ft_print_alphabet(void) {
    char let = 'a';
    while (let <= 'z'){
        ft_putchar(let);
        let = let + 1;
    }
}

/*int main(void) {
    ft_print_alphabet();
}*/