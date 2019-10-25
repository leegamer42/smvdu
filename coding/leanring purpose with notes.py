#data preprocessing

#importing the libraries

import numpy as np #for math functions
import pandas as pd #for import and manage datasets
import matplotlib.pyplot as plt #for plotting graphs of our data

#importing dataset
#save the python in the same file as the dataset and the execute the python code by pressing f5 or run option
dataset = pd.read_csv('Data.csv')
#this command will import the dataset into our coding line
#we can go to the variable explorer tab to check the imported data
#we are also assigning the data to "dataset" by doing so
#pd.read_csv('name of the file')

#index start at 0

#creating the matrix and feature of the dataset
x= dataset.iloc[:, :-1].values
#[first part is line of dataset, this is the column of the dataset]
#:-1 all the coulumns except for the last one
y=dataset.iloc[:,3].values
#imports from the dataset into a variable Y with the third coulmn

#MISSING DATA!
#we take the mean of the data

from sklearn.preprocessing import Imputer
#here we import Imputer from sklearn.preprocessing
imputer = Imputer(missing_values = 'NaN',strategy = 'mean',axis=0)	
#here we create a object imputer and describe the way of how we are going to deal with the missing data
imputer=imputer.fit(x[:,1:3]) 
#we chosse the column we wish to work on using fit function
x[:,1:3] = imputer.transform(x[:,1:3])
#we assign the new data in the object to our working variable 


#categorical data
#encoding the text data into numerical format so that we are able to process them later on based upon a algo
from sklearn.preprocessing import LabelEncoder , OneHotEncoder
#we import labelencoder and onehotencoder to our code
#label encoder = it turns the data into list of different variable 
#one hot encoder makes a table of the data and gives equal importance to all the data
#basically onehotencoder is suitable were there is no comparision or scale of which data has more or less importance
#label encoder is used were there is more or less comparision of the data or if it is a simple yes or no data

le_y = LabelEncoder()
#making a object of the label encoder class
le_y.fit_transform(y)
#performing the labelencoder task
y= le_y.transform(y)
#storing the chnages into the working variable

#dummy encoding <one hot encoder>
ohe = OneHotEncoder(categorical_features = [0])
#creating a object based on the one hot encoder class,also using the categorical_feature on the first coulumn of the dataset
x=ohe.fit_transform(x).toarray()
#storing the changes into the working variable

#warning update
#from sklearn.model_selection import train_test_split

#training set and test set
#why do we need splitting?
from sklearn.model_selection import train_test_split
#importing train_test_split which helps us in training and testing the dataset
x_train, x_test,y_train,y_test = train_test_split(x,y,test_size=0.2,random_state=0)
#we declare train and test variable and then assign them using the tts class , we set the training set percentage to 0.25, which means 25% of the data will be used in testing the trained set. random state randomizes which data gets into train set or test set

#feature scaling
#usuakky the machine learning models are based upon the euclidean distance model, meaning that one of the data type is taken as x coordinate and the other one as y coordinate
#euclidean is sqrt(x1-x2)^2+(y1-y2)^2

#why do we need feature scaling? the data with which we have to deal with exist in different scales because of which the numerical value of a bigger data can dominate the numerical value of a smaller data, hence we need to normalise them so that we can have a equal impact from both type of data in our machine learning model
#ways of performing feature scaling- 1.standardisation and 2. normalisation 

from sklearn.preprocessing import StandardScaler
#class which helps in scaling the data
sc_x=StandardScaler()
#make a object of the class and assign it to it
x_train = sc_x.fit_transform(x_train)
#fit it into the training set 
x_test = sc_x.transform(x_test)
#fit it into the test set , we dont perform fit as we have already done it 
