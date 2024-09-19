for any number num
if num&1 == 1, num is odd
if num&2 == 0, num is even


to make a number out of some given numericals / to suppose reverse a digit, the formula is:
answer = (given_digit * 10^i) + answer, this will make 1,2,3 as 321
-------------------------^
----------------------- (Power)

if you wanna make 1,2,3 as 123 only; (as i have used in previous modules)
try
answer = 10 * answer + given_digit