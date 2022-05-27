class matrix:
    def __init__(self,col,values[]) -> None:
        self.__size=col
        self.__m=[]
        
        if values==None:
            print("Enter the values of the matrix\n")
            for x in range (col):
                    self.__m[x]=list(input())
        
        else:
            self.__m=values
        
        def check_magic(self):
            count=2*self.__size+1
            sum1=0
            sum2=0
            ct=0
            #checking  if columns are equal
            for r in self.__m:
                
                for i in r:
                    if ct%2==0:
                        sum1+=i
                    else:
                        sum2+=i
                ct+=1
                if sum1!=0 and sum2!=0:
                    if sum1!=sum2:
                        return False

            



val=[[1,2,3],[3,2,1],[0,9,8]]
new=val
print(new)