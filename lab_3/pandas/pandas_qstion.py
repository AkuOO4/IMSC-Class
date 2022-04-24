import pandas as pd
import justpy as jp

iris=pd.read_csv(r'D:\prgrming\python\lab_3\pandas\iris.csv')
#print(iris)

species=list(iris['species'].unique())
print(species)

for i in species:
    graph=pd.DataFrame()
