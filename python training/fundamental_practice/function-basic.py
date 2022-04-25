#定義函式
#函式內部的程式碼，若是沒有函式呼叫，就不會執行

#呼叫函式


#函式可用來做程式的包裝:同樣的邏輯可以重複利用
def calculate(max):
    sum=0
    for n in range(1,max+1):
        sum=sum+n
    print(sum)
calculate(10)
calculate(20)

