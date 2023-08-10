'''
Program to find roots using bisection method

Expression x**3 - 2*x - 5 = 0
given as 
coefficients = [1,2,-5] 
powers = [3,1,0]
interval = [1,2]  
'''
import math

def bisection(func,coefficient,interval, tol=1e-2, max_iter=100):    # finding the starting interval
    
    a=interval[0]
    b=interval[1]

    if func(a,coefficient) * func(b,coefficient) >= 0:
        raise ValueError("Function values at the interval endpoints must have opposite signs.")
    
    for iteration in range(max_iter):
        c = (a + b) / 2
        if abs(func(c,coefficient)) < tol:
            return c
        
        if func(c,coefficient) * func(a,coefficient) < 0:
            b = c
        else:
            a = c
    

        print("Iteration: ",iteration,"a:",a," b:",b," c:",c)

    raise Exception("Bisection method did not converge within the specified number of iterations.")

def function(x,coiff):
    return coiff[0]*x**3 + coiff[1]*x**2 + coiff[2]*x**1 + coiff[3]

def main():
    # coefficients = eval(input("Enter the coefficients: "))
    # powers = eval(input("Enter the powers: "))
    # interval = eval(input("Enter the interval: "))
    #order- ax^3,bx^2,cx,d
    coefficients = [2,0,-4,-50] 

    interval = [1,10]  
    
    res = bisection(function,coefficients,interval)
    print("The root is: ",res)
    print()

print()

main()
