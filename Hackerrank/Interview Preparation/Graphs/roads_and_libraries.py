# Python3
# Problem Statement: https://www.hackerrank.com/challenges/torque-and-development/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=graphs


import math
import os
import random
import re
import sys


adj_list = []
visited = []

def construct_adj_list(n, cities):
    adj_list.extend([[] for i in range(n+1)])
    visited.extend([False for i in range(n+1)])
    for x, y in cities:
        adj_list[x].append(y)
        adj_list[y].append(x)

def dfs(node, component_node_count):
    visited[node] = True
    component_node_count += 1
    for i in range(len(adj_list[node])):
        if visited[adj_list[node][i]] == False:
            component_node_count = dfs(adj_list[node][i], component_node_count)
    return component_node_count

# Complete the roadsAndLibraries function below.
def roadsAndLibraries(n, c_lib, c_road, cities):
    global adj_list
    global visited
    adj_list = []
    visited = []
    if c_lib <= c_road or len(cities) == 0:
        return n * c_lib
    else:
        cost = 0
        construct_adj_list(n, cities)
        for node in range(1, n+1):
            component_node_count = 0
            if visited[node] == False:
                component_node_count = dfs(node, component_node_count)
            if component_node_count > 0:
                cost += (component_node_count - 1) * c_road + c_lib
        return cost

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    q = int(input())

    for q_itr in range(q):
        nmC_libC_road = input().split()

        n = int(nmC_libC_road[0])

        m = int(nmC_libC_road[1])

        c_lib = int(nmC_libC_road[2])

        c_road = int(nmC_libC_road[3])

        cities = []

        for _ in range(m):
            cities.append(list(map(int, input().rstrip().split())))

        result = roadsAndLibraries(n, c_lib, c_road, cities)

        fptr.write(str(result) + '\n')

    fptr.close()
