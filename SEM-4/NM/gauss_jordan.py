# Program to perform gauss-jordan elimination

import numpy as np

def gauss_elimination(A,b):
    n = len(A) 
    for i in range(0,n):
        for j in range(i+1,n):
            try:
                factor = A[i,i] / A[j,i]
            except ZeroDivisionError:
                print("Division by zero")
                break
            for k in range(0,n):
                A[j,k] = A[j,k] - A[i,k] / factor
            b[j] = b[j] - b[i] / factor
    return A,b

def gauss_jordan_elimination(A,b):
    A,b = gauss_elimination(A,b)
    n = len(A)
    for i in range(0,n,-1):
        for j in range(i-1,n,-1):
            try:
                factor = A[i,i] / A[j,i]
            except ZeroDivisionError:
                print("Division by zero")
                break
        for k in range(0,n,-1):
            A[j,k] = A[j,k] - A[i,k] / factor
        b[j] = b[j] - b[i] / factor
    return b


def main():
    A = np.array([[1,1,1],[2,1,-1],[1,-1,2]])
    b = np.array([-2,1,1])
    print("A = \n",A)
    print()
    print("b = ",b)
    x = gauss_jordan_elimination(A,b)
    print("\nfinal solution")

    for i in x:
        print("{:.4f}".format(i),end=" ")

main()