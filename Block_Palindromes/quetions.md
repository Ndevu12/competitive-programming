Question 1: Block Palindromes
A palindrome is a word that shows the same sequence of letters when reversed. If a word can have its
letters grouped together in two or more blocks (each containing one or more adjacent letters) then it is a
block palindrome if reversing the order of those blocks results in the same sequence of blocks.
For example, using brackets to indicate blocks, the following are block palindromes:
• BONBON can be grouped together as (BON)(BON);
• ONION can be grouped together as (ON)(I)(ON);
• BBACBB can be grouped together as (B)(BACB)(B) or (BB)(AC)(BB) or (B)(B)(AC)(B)(B)
Note that (BB)(AC)(B)(B) is not valid as the reverse (B)(B)(AC)(BB) shows the blocks in a different order.
1(a) [ 23 marks ]
Write a program which reads in a word of between 2 and 10 (inclusive) uppercase
letters.
You should output a single number, the number of different ways the input can be
grouped to show it is a block palindrome.
Sample run
BBACBB
3
1(b) [ 2 marks ]
Give all the groupings of AABCBAA that show it is a block palindrome.
1(c) [ 6 marks ]
Suppose that all the groupings of a block palindrome contain an even number of blocks. What can you say
about the length of the block palindrome? How many different groupings can it have? Justify both your
answers.
