#Point 實體物件的設計:平面座標上的點
class Point:
    def __init__(self, x, y):
        self.x=x
        self.y=y
        #定義實體方法
    def show(self):
        print(self.x, self.y)
    def distance(self, targetX, targetY):
        return(((self.x-targetX)**2)+((self.y-targetY)**2))**0.5
p=Point(3,4)
p.show()#呼叫實體方法/函式
result=p.distance(0,0)#計算座標 3,4 和座標 0,0 之間的距離
print(result)
#File 實體物件的設計:包裝檔案讀取的程式