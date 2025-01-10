# Decimal To Binary (`d2b`)
*companion to [binary-to-decimal](https://github.com/mazylol/binary-to-decimal)*

It is very simple, input a decimal as the first argument, get binary

`d2b 733 -> 1011011101`

# Install
1. Clone the repo and move into the directory
2. `meson setup buildDir`
3. `cd buildDir`
4. `sudo ninja install`

or

1. Clone the repo and move into the directory
2. `(gcc/clang) main.c -o b2d`
3. `sudo cp d2b /usr/local/bin`
