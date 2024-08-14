for stroing negative numbers, C++ uses 2's complement

eg. int a = -5

negative numbers are identified by 1 on front bit (most significant bit)

------stored as 2's complement

convert a = 5 binary 101
then set it as 32 bit(4byte) integer -> 00000000 00000000 00000000 00000101
take 1's complement                  -> 11111111 11111111 11111111 11111010
Add  1 as value (+1)                 -> 11111111 11111111 11111111 11111011
Boom. stored

-----also, retrieved as 2's complement

again the same process, do 2's complement of 11111111 11111111 11111111 11111011
get 00000000 00000000 00000000 00000101
then convert back to 5

IMP(if the int is unsigned, but still assigned a negative value, then while retrieving, 2's complement is not followed, thus giving a huge +ve number)
