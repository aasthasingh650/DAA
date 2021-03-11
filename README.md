# Assignment 4
### Team Members
| Enrollment No. | Name | GithubId |
| :---:   | :-: | :-: |
| IIT2019078 | Aastha Singh | aasthasingh650 |
| IIT2019079 | Vaibhav  | aquris |
| IIT2019080 | Ranveer Singh | ranveer251 |

**Group No-**"26"

**Faculty Name-**"Md. Javed Sir"

**Mentor Name-** "Md. Meraz Sir"
***

## This Repo is for submitting all of our DAA  C2 assignments which are being evaluated by TA Sir Meraz.
---
## Problem Statement
Find the longest common Prefix using Divide & Conquer method

## How to use code

```
#Download project
git clone https://github.com/aasthasingh650/DAA 
```

Project Initialize

```cd daa
#create Assignment4 folder
mkdir Assignment4

#go to Assignment4
cd Assignment4

#Create file
touch readme.md

.
.
```
***
Run the code
```
code.cpp

```
Output
```
Longest common prefix

```
***
### Test case
```
Test case-1
Input: 
5
India
Indonesia
Indiana
Indian
IndianOcean
Out: 
Ind
#--------------------------#
Test case-2
Input:
4
App
Ape
Apple
Aps
Out:
Ap
```
***
## Theory
In this problem we have to find the longest common prefix for given ‘n’ strings. We know that the common prefix for any two strings will be the  consecutive common character from the start of the strings. Here, the longest common prefix between two strings is calculated using the divide and conquer approach.

The array of strings is divided into two parts. The same is done for the left part and then the right part. We keep on dividing the arrays until we get a single string. Now we start conquering by returning the longest common prefix between the strings returned by the left and the right part.This way at the end we will get the longest common prefix of the array of strings.

***
## Analysis
### Time Complexity
The algorithms were tested against positive random sets of variable sizes.The result thus obtained from this experiment is given below:
Since in the lcp function, we are iterating through all the strings in the string array so the complexity of the function will be O(n*m) where n is the total number of strings in the array of strings and m is the length of the longest string among them.

### Space Complexity
The Space complexity of the program is O(m*log(n)). This is because we allocate space to the resultant string or the longest common prefix string. There will be a maximum of log(n) divisions and each string returned will have a maximum size of m.

***
## References
1. [https://edutechlearners.com/download/Introduction_to_algorithms-3rd%20Edition.pdf] (Introduction to Algorithms)
2. [https://www.geeksforgeeks.org/longest-common-prefix-using-divide-and-conquer-algorithm/](https://www.geeksforgeeks.org/longest-common-prefix-using-divide-and-conquer-algorithm/)
3. [https://stackoverflow.com/questions/49436211/longest-common-prefix-divide-and-conquer-approach-complexity-analysis](https://stackoverflow.com/questions/49436211/longest-common-prefix-divide-and-conquer-approach-complexity-analysis)
