# Python3
# Problem Statement: https://www.hackerrank.com/challenges/ctci-bfs-shortest-reach/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=graphs


class Graph:
    
    def __init__(self, nodes):
        self.nodes = nodes
        self.graph = [[] for i in range(nodes)]
    
    def connect(self, x, y):
        self.graph[x].append(y)
        self.graph[y].append(x)
    
    def find_all_distances(self, source):
        this_level = [source]
        visited = [False] * self.nodes
        visited[source] = True
        distance = -1
        distances = [-1 for i in range(self.nodes)]
        while this_level:
            distance += 1
            next_level = []
            for node in this_level:
                distances[node] = distance * 6
                for n in self.graph[node]:
                    if visited[n] == False:
                        visited[n] = True
                        next_level.append(n)
            this_level = next_level
        for i in distances:
            if i != source and i != 0:
                print(i, end=' ')
        print()


t = int(input())
for i in range(t):
    n,m = [int(value) for value in input().split()]
    graph = Graph(n)
    for i in range(m):
        x,y = [int(x) for x in input().split()]
        graph.connect(x-1,y-1) 
    s = int(input())
    graph.find_all_distances(s-1)
