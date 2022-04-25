print("姓名  座號  國文  數學  英文")
print("%3s  %2d  %3d  %3d  %3d" % ("林大明",1,100,87,79))
print("%3s  %2d  %3d  %3d  %3d" % ("陳阿中",2,74,88,100))
print("%3s  %2d  %3d  %3d  %3d" % ("張小英",11,82,65,8))

print(100,"多吃水果",60)
print(100,"多吃水果",60,sep="&")
print(100,60,sep="&",end="")

# %s 代表字串 , %d 整數 ,%f 浮點數
#print(項目 % (參數列))
name="林小明"
score=80
print("%s 的成績為 %d "%(name,score))#林小明的成績為80

#浮點數格式化
price=23.8
print("價格為%8.2f" % price)#價格為   23.80,23左方有3個空白字元
#print(字串.format(參數列))
name="林小明"
score=80
print("{}的成績為 {}".format(name,score))#林小明 的成績為 80
#type(項目)
print(type(56))#<class 'int'>
print(type("How are you?"))#<class 'str'>
print(type(True))#<class 'bool'>
