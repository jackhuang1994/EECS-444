# EECS 349&444_HW2_Part(3)
1. A pdf file including my comments, analysis, results, source code and IDA analysis for each question.
2. 4 C programs corresponds to assembly code Q1 to Q4.
2. I used Dev-C++ to create and compile these C programs, but I am guessing gcc compiler works too.
## Solutions(Same stuff in the pdf)
Q1. The functionality of this assembly code is to initialize three variables, calculate (3\*5 - 3/2) and store the result in the last variable. The result is 14.\
Q2. The functionality of this assembly code is using a loop to compare the first eight elements and store the greatest value in the ninth element, and the tenth element is a counter of this loop. The result would be 432, which is 1B0h in hexadecimal.\
Q3. The functionality of this assembly code is to find values ranging from 100 to 999, which satisfies the condition x = i^3 + j^3 + k^3 for i = (x/100), j = (((x/100)\*(-100) + x)/10), and z = (x - (x/10 + x/10\ * 4) \* 2). My c program returns 4 results, which are 153, 370, 371, and 407.\
Q4. This assembly code first initializes three value x =7, y =100, and z = 0. Then there is a loop while z < 100, we do array[z] = z + 1, then add z by 1. Once z is equal to 100, we should have an array consists of 100 integers from 1 to 100. Then we call another function, which includes three parameters x,y, and z, and print out the return value of this function. 
This function has 100 loops, and each loop sets 1 of 7 elements equals to 0. It will returns 50 in the end, which is the the last integer set to 0.
