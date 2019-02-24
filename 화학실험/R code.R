data<-data.frame(read.csv(file="C:/Temp/세특/화학실험/data.csv",sep=",",header = T, check.names=FALSE))
head(data)
graph<- data.frame(data[,c(4,2)])
plot(graph, type="b",ylim=c(4.0,5.0),main="아두이노를 활용한 중화점 찾기 실험",xlab = "총량 (단위:ml)")
