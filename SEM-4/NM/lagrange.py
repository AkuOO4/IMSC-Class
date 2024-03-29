'''
WRITE A PROGRAM TO ESTIMATE THE VALUE OF A FUNCTION FOR ANY INTERMEDIATE VALUE OF THE 
INDEPENDENT VARIABLE USING LAGRANGE INTERPOLATION METHOD

x    : x0 x1 x2 x3 ... xn
f(x) : y0 y1 y2 y3 ... yn

f(k) = (k-x1)(k-x2)...(k-xn)/(x0-x1)(x0-x2)...(x0-xn) * y0 + 
       (k-x0)(k-x2)...(k-xn)/(x1-x0)(x1-x2)...(x1-xn) * y1 +
       ... +
       (k-x0)(k-x1)...(k-x_n-1)/(xn-x1)(xn-x2)...(xn-x_n-1) * yn + 
'''

def lagrange_interpolation(X,Y,k):
    x_k = 0
    for i in range(len(X)):
        T_i = Y[i]
        for j in range(len(X)):
            if i != j:
                # numerator term
                T_i *= (k - X[j])
                # denominator term
                T_i *= (1/(X[i] - X[j]))
        x_k+=T_i

    return x_k
        

def main():
    x = [30, 40, 50, 55, 65]
    f_x = [115.14, 100.16, 92.25, 71.18, 58.88]
    for k in range(46,64):
        f_k = lagrange_interpolation(x,f_x,k)
        print("f({0}) = {1}".format(k,f_k))
    

main()