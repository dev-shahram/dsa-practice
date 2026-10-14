'''

graph = {
    "5": ["3", "7"],
    "3": ["2", "4"],
    "7": ["8"],
    "2": [],
    "4": ["8"],
    "8": []
}

def bfs(graph, start,goal):#makes a graph or isy graph cyia or sath me kidr se start krna ha 
    visited = [start]# yay 1 lisy h a un ki jo hum ne visit kr liy hain nodes 
    queue = [start]#yay  1 queue ha wating line lahh skty 

    while len(queue) > 0:
        current = queue.pop(0)
        print(current, end=" ")
        if current==goal:
            print("goal found")
            return True

        for neighbour in graph[current]:
            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)
    print("goal not found ")     
    return False           

bfs(graph, "5","20")

'''


graph={
       'a':{'b':6,'e':1,'c':9},
       'b':{'a':6,'e':4,'d':3},
       'c':{'a':9,'f':2,'g':3},
       'd':{'b':3,'e':5,'f':7},
       'e':{'a':1,'b':4,'d':5,'f':6},
       'f':{'c':2,'e':6,'d':7},
       'g':{'c':6}
       }
def ucs(graph,start):
    queue=[(0,start)]
    visted=[]
    
    while len(queue)>0:
        queue.sort()
        cost,current =queue.pop(0)
        
        if current in visted:
            continue
        visted.append(current)
        print("visting", current ,"cost",cost)
        
        for child ,step in graph[current].items():
            if child not in visted:
                queue.append((cost+step,child))
ucs(graph,'c')