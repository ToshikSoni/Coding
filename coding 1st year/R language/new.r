water<-c(34523,34567,23578,34578,23445,76543,9876,2321,45632,98664,66666,97855,74333,53422,45342,13245,34213,53465,24322,67842,78535,67437)
temp<-c(22,25,26,44,64,23,54,23,65,21,24,23,23,34,21,64,23,56,23,54,34,56)
plot(water,temp)
length(water)
length(temp)
plot(water,temp,"s")
scatter.smooth(water,temp)
pairs(cbind(water,temp))
plot(iris)
pairs(rbind(water,temp))
install.packages("scatterplot3d")
library(scatterplot3d)
typeof("a")
typeof(1L)
scatterplot3d(iris)
scatterplot3d(iris[,1:3])
x<-c(1,2,3)
names(x)<-c("a","b","c")
cov(c(1,2,3,4),c(1,2,3,4))
