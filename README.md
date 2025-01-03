# Advent Of Code 2015 - C

## Day 01
### Part 01
 - You recive  a set of parenthesis and '(' means 1 and ')' means - 1 (go up or down a floor).
 Decided to get the input via cli argument, calling: 
 ```bash
 a.out $(cat input)
 ```
 and pass it to a char pointer, looping through it until the iterator is equal to it's lenght.

 then inside the loop incremented two variable for opening and closing brackets.
 pass the difference of the opening and the closing to the variable finalFloor and printing it out.
 
### Part 02
 - You are asked to see at what movement you first enter the basement (negative floor).
 That required me to create a variable that kept track of the floor we were on, inside the loop, and making a condition to check if the floor was negative and if it was the first time entering the basement. 

When the floor becomes negative we have entered the basement and we can set the variables enterBasement to 1 so that we don't go inside the conditional anymore and the variable firstBasement to the value of the iterator to see at what movement we have entered the basement first.

Lastly outside the loop we add a check to see if the variable enter basement was set to something other then 0, if so we print the firstBasement variable to tell us at what floor we first entered the basement.


