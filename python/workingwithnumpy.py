import numpy as np

arr1 = np.array([1, 2, 3])
arr2 = np.array([3,5,8])
print(arr1*arr2)
#printing 2-d arrays
arr3 = np.array([[1,2,3],[4,5,6]])
print(arr3)
arr4 = np.array([[2,3,4],[4,7,8]])
print(arr4)
print(arr3+arr4)
print(arr3.ndim)
print(arr4.shape)
#to get the specific row and column element
print(arr3[1,2]) #should be showing 6 as it points out to arr3 1st row (index starts from 0) and 2 column which is 6
