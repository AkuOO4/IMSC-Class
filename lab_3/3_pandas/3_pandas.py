import pandas as pd
import matplotlib.pyplot as plt
from sklearn.preprocessing import StandardScaler
from sklearn.decomposition import PCA


f = pd.read_csv(".\Iris.csv")
# ploting the bar chart according to the frequency of species.
f.Species.value_counts().plot(
figsize=(8, 8),
kind="bar",
color=["r", "g", "b"],
xlabel="Species",
ylabel="Frequency of Species",
)

plt.title("Frequency Bar Graph")
plt.show()
# plotting the principal analysis graph for two components

X = f.iloc[:, 1:5].values
X_std = StandardScaler().fit_transform(X)
pca = PCA(n_components=2)
principalComponents = pca.fit_transform(X_std)
principalDf = pd.DataFrame(
data=principalComponents, columns=["principal component 1", "principal component 2"]
)

final_f = pd.concat([principalDf, f["Species"]], axis=1)
fig = plt.figure(figsize=(10, 8))
ax = fig.add_subplot(1, 1, 1)
ax.set_xlabel("First Principle Component")
ax.set_ylabel("Second Principal Component")
ax.set_title("PCA Graph")
targets = ["Iris-setosa", "Iris-versicolor", "Iris-virginica"]
colors = ["r", "g", "b"]

for target, color in zip(targets, colors):
    indicesToKeep = final_f["Species"] == target
    ax.scatter(
    final_f.loc[indicesToKeep, "principal component 1"],
    final_f.loc[indicesToKeep, "principal component 2"],
    c=color,
    s=50,
    )
    ax.legend(targets)
    plt.show()

# histogram for sepal length.
plt.figure(figsize=(7, 5))
x = f.SepalLengthCm
plt.hist(x, color="r")
plt.title("Sepal Length Histogram")
plt.xlabel("Sepal Length cm")
plt.ylabel("Distribution Count")
plt.show()

# histogram for sepal width.
plt.figure(figsize=(7, 5))
x = f.SepalWidthCm
plt.hist(x, color="g")
plt.title("Sepal Width Histogram")
plt.xlabel("Sepal Width cm")
plt.ylabel("Distribution Count")
plt.show()

# histogram for petal length.
plt.figure(figsize=(7, 5))
x = f.PetalLengthCm
plt.hist(x, color="orange")
plt.title("Petal Length Histogram")
plt.xlabel("Petal Length cm")
plt.ylabel("Distribution Count")
plt.show()

# histogram for petal widtTH.
plt.figure(figsize=(7, 5))
x = f.PetalWidthCm
plt.hist(x, color="g")
plt.title("Petal Width Histogram")
plt.xlabel("Petal Width")
plt.ylabel("Distribution Count")
plt.show()