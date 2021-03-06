# Power Method Solutions

A first project for my work in the Lab of Dr. Jussi Eloranta at California State University at Northridge. 

Herein, I bring myself up to speed with regard to iterative power method solutions to eigenproblems. 

# Project Structure
Based on *A Quick Guide to Organizing Computational Biology Projects* by William Noble. [source](http://www.ploscompbiol.org/article/info%3Adoi%2F10.1371%2Fjournal.pcbi.1000424)

1. bin
1. data
1. doc
	1. Simple Power Method
1. results
1. src


# Simple Power Method

1. Choose a random normalized starting vector, *y*
2. while some convergence criteria is not satisfied
    1. solve the linear equation A *y*=*x*
    1. normalize *x*
    1. set *y* to *x*

# Deeper Mathematics
Reading:

1. Olver, Introduction to Partial Differential Equations
    1. Sturm-Liouville equations
    2. Functional Analysis
1. Arbenz, Lecture Notes on Solving Large Scale Eigenvalue Problems
3. Hildebrand, Introduction to Numerical Analysis
