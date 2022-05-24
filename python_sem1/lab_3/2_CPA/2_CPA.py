import numpy as np

def PCA(A):
    #Get the mean values of each column
    M = np.mean(A.T,axis = 1)
    #Centering the columns
    C = A - M
    #Calculating the covaraince matrix
    V = np.cov(C.T)
    #Eigendecomposition of covariance matrix
    values,vectors = np.linalg.eig(V)
    P = vectors.T.dot(C.T)
    proj = (vectors.T[:][:2]).T
    # projecting the data
    P = proj.T.dot(C.T)
    return P

def matrix():
    n, m = map(int, input("Enter the number of rows and column of matrix : ").split()) 
    #defining the matrix and taking input.
    print("Enter elements row by row : ")
    A = np.array([input().strip().split() for _ in range(n)], int)
  
    P = PCA(A)
    print("\nPCA of matrix : ")
    print(P)
    print("\nAfter rounding off : ")
    for i in P :
        for j in i:
            print(round(j,2),end="\t")
        print("\n")
matrix()