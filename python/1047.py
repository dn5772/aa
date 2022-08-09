class Point:
    x: int = 0
    y: int = 0

    def __init__(self, x, y):
        self.x = x
        self.y = y

    def __lt__(self, other):
        return self.x < other.x or self.y < other.y

    def __gt__(self, other):
        return self.x > other.x or self.y > other.y


class Tree:
    point: Point = None
    cost: int = None

    def __init__(self, point, cost):
        self.point = point
        self.cost = cost


startPoint = Point(1000000, 1000000)
endPoint = Point(0, 0)

trees = []

n = int(input())

for i in range(n):
    x, y, cost = input().split()
    x = int(x)
    y = int(y)
    point = Point(x, y)
    cost = int(cost)
    trees.append(Tree(point, cost))

    if startPoint > point:
        if startPoint.x > point.x:
            startPoint.x = point.x
        if startPoint.y > point.y:
            startPoint.y = point.y
    if endPoint < point:
        if endPoint.x < point.x:
            endPoint.x = point.x
        if endPoint.y < point.y:
            endPoint.y = point.y

perimeter = ((endPoint.x - startPoint.x) + (endPoint.y - startPoint.y)) * 2

trees.sort(key=lambda tree: tree.cost, reverse=True)

print(perimeter)

ans = 0
cnt = 0

while perimeter > ans:
    print(cnt)
    ans += trees[cnt].cost
    cnt += 1

print(cnt)