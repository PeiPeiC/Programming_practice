#隨機模組
import random
#統計模組
#data=random.sample([1,5,6,10,20],3)
#print(data)
#隨機調換順序(就是洗牌的概念)
#data=[1,5,8,20]
#random.shuffle(data)
#print(data)
#隨機取得亂數
#data=random.uniform(0.0,1.0)#0~1之間的隨機亂數
#print(data)
#取得常態分配亂數
#平均數100,標準差10,得到的資料多數在90~110之間
#data=random.normalvariate(100,10)
#平均數0,標準差5,得到的資料 多數  在-5~5 之間
#data=random.normalvariate(0,5)
#print(data)
#統計模組
import statistics as stat
data=stat.stdev([1,2,3,4,5,8,10])
print(data)
#平均數、中位數、標準差、常態分配