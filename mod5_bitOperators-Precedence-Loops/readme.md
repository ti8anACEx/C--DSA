BIT-WISE OPERATORS:-

    they work in bit (0s and 1s) level.

    bitAND - &
    bitOR - |
    bitNOT - ~
    bitXOR - ^

    bitAND

    2 & 3 gives 2
    5 & 7 gives 5
    HOW?
    2 & 3 means 10 & 11 in binary form. so 10 & 11 gives 10 in binary or 2 in integer (as 0 & 1 = 0 and 1 & 1 = 1)
    5 & 7 means 101 & 111 in binary form. so 101 & 111 gives 101 in binary or 5 in integer (as 1 & 1 = 1 and 0 & 1 = 0 and 1 & 1 = 1)




    bitOR
    2 | 4 gives 6
    HOW?
    2 | 4 means 10 | 100 in binary form. so 10 | 100 in binary gives 110 in binary or 6 in integer (as 0 | 0 = 0 and 1 | 0 = 1 and remaining 1 = 1 )
    Basically    10
                100
                ---
                110

    3 | 6 gives 6. HOW?
    Basically    11
                110
                ---
                110


    bitNOT

    now suppose int a = 3 ->(11 in binary form)
    ~3 means -4 
    then ~a or ~3 means 
        00000000 00000000 00000000 00000011 as 4 bit is allocated for integers
        11111111 11111111 11111111 11111100
        = -ve number as most significant bit is 1
        therefore, we have to take 2's complement for the remaining 31 bits _1111111 11111111 11111111 11111100
        =                                                                   _0000000 00000000 00000000 00000011 (1's complement)
                                                                                                            + 1 (for 2's complement)
                                                                            _0000000 00000000 00000000 00000100
        =                                                                            which is 4 in decimal form
        =                                                                                                    -4 
        Therefore, ~3 = -4
                ~2 = -3




    bitXOR (bot bits must be different for a true output or 1 as output. ie,  1/0 ^ 0/1 = 1 only)

    so 2^4 gives 6
    HOW?

            2-> 010
            3-> 100
                ---
                110 <-6


BIT-SHIFT OPERATORS:-

    Left Shift

    5 << 1 gives 10
    it means shift the binary 5 by 1 bit to the left (<-)
    so
        5->                  00000000 00000000 00000000 00000101
        5 << by 1 bit gives  00000000 00000000 00000000 00001010
        =                                          10 in decimal


    3 << 2 gives 10
    it means shift the binary 5 by 1 bit to the left (<-)
    so
        3->                  00000000 00000000 00000000 00000011
        3 << by 2 bit gives  00000000 00000000 00000000 00001100
        =                                          12 in decimal

    ** its a common behavior of smaller numbers like 5, if we do left shift by 1 bit, they get multiplied by 2
        but its not valid for all numbers, specifically bigger numbers

        Example - 21<<2 = 84 (21 * 2 = 42, 42 * 2 = 84...lmao)


    Right shift 

    5 >> 2 gives 
    it means shift the binary 5 by 2 bit to the right (->)
    so
        5->                  00000000 00000000 00000000 00000101
        5 >> by 2 bit gives  00000000 00000000 00000000 00000001
        =                                           1 in decimal (also in binary LOL)

    ----IMPORTANT----
    The bits used to pad the deleted bits are 0 in case of positive numbers being left or right shifted.
    For negative numbers, the padding bits / numbers are compiler dependent (can be 0 or anything else)




****************************************************************************************

cout << 2 * 3/4 +5 << endl;
should give 5 if / is performed first and 6 if * is performed first.
So, in such a case, if two operators have same PRECEDENCE, ASSOCIATIVITY is used.
Here Left to right associativity is used and thus the compiler gave the answer to be '6'

Brackets are recommended to use for predicted behaviour.