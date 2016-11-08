# NOVEMBER 09 2016

# Challenge 1 - Happy Numbers

Given a positive integer `x` on stdin. Output to stdout whether a number is happy or not by writing either `:)` or `:(`.
To see if a number is `happy` you have to do the following:
	Take x and calculate the sum of the squares of its digits. If the sum is 1 the number is happy.
	Else x becomes that sum and you repeat the process.
	It is possible that some starting numbers get stuck in an infinite loop. Once you detect that you can tell that the number is not happy.

	Example:
	> 7
	> 7 -> 49 -> 97 -> 130 -> 10 -> 1
	> :)

	Note that you don't output the intermediate steps only the final solution. This is only an example.

	> 3
	> 9 -> 81 -> 65 -> 61 -> 37 -> 58 -> 89 -> 145 -> 42 -> 18 -> 65 -> 61 -> 37 ....
																\ We have a loop from this point on - break execution and print :(
	> :(