from picalculator import (
    calculate_serialy, calculate_with_threads, 
    calculate_with_processes, calculate_with_joblib
)

if __name__ == '__main__':
    
    calculate_serialy()         
    calculate_with_threads()  
    calculate_with_processes() 
    calculate_with_joblib()    