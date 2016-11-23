# NOVEMBER 09 2016

# Challenge 5 - Cryptic

Cryptographics are a very interesting and popular field in Computer Science.
A simple encryption and decryption method is the binary XOR operator because if
`a XOR b = c` then `c XOR b = a`.
For this challenge you are given an input file `challenge-5.data` which contains
a list of numbers representing the XORed characters of an encrypted string.
Your task is to decrypt it without knowing the key. 
*The key is 3 characters long.*
*The message is english.*

XOR encryption is often done with a key of the same length as the input text,
however to make it easier and not use a very hard to remember and long key we
simplify a bit by using a smaller key and keep repeating it.

If the key was `abc` and the input was `qwertyuiop` then you would encrypt/decrypt
as following:

		q    w    e    r    t    y    u    i    o    p
xor		a    b    c    a    b    c    a    b    c    a
_______________________________________________________
result	16	 21   6    19   22   26   20   11   12   17
xor		a    b    c    a    b    c    a    b    c    a
_______________________________________________________
result	q    w    e    r    t    y    u    i    o    p