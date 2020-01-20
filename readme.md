A simple implementation of John Conway's FRACTRAN https://en.wikipedia.org/wiki/FRACTRAN

Compile frantran.c (using make or otherwise) and then pipe your programs (including the leading input integer) into the resultant executable. It will print the result out to standard out.

Programs are a list of digits, which represent numbers in the conventional indo-arabic base 10 way. The first group of digits represents the initial value of n. The second digit group is the numerator of the first fraction, the third digit group is the denominator of the first fraction, the fourth digit group is the numerator of the second fraction, and so on. Digits are separated and/or surrounded by non-digit characters, which otherwise are ignored and may thus be used as comments.

Conventionally, I write my fractran programs like this:

```fractran
72, 3/2 #short program that adds the exponents of two and three in the prime factorization of the number, and turns the sum into the exponent of three
```

But it would be exactly equivalent to write them like this:

```fractran
72 3 2
```

I just made this project for fun, and release it into the public domain under CC0. However, I did not invent the fractran programs in this project, I found them on the internet; it is unclear to me what sort of copyright may apply to them. It may be impossible to copyright a string of fewer than 20 numbers, or I may now hold the copyright simply because I added comments and/or formatting. Nevertheless, I release whatever rights over them I do hold into the public domain under CC0.
