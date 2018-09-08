# Python3
# Problem Statement: https://www.hackerrank.com/challenges/find-the-nearest-clone/problem?h_l=interview&playlist_slugs%5B%5D%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D%5B%5D=graphs


import math
import os
import random
import re
import sys

# Complete the findShortest function below.

#
# For the weighted graph, <name>:
#
# 1. The number of nodes is <name>_nodes.
# 2. The number of edges is <name>_edges.
# 3. An edge exists between <name>_from[i] to <name>_to[i].
#
#
adj_list = []

def construct_adj_list(graph_nodes, graph_from, graph_to):
    adj_list.extend([[] for i in range(graph_nodes+1)])
    for x, y in zip(graph_from, graph_to):
        adj_list[x].append(y)
        adj_list[y].append(x)

def bfs(graph_nodes, ids, source, val):
    this_level = [source]
    visited = [False] * (graph_nodes + 1)
    visited[source] = True
    distance = 0
    while this_level:
        distance += 1
        next_level = []
        for node in this_level:
            if ids[node-1] == val and node != source:
                return distance - 1
            for adj in adj_list[node]:
                if visited[adj] == False:
                    visited[adj] = True
                    next_level.append(adj)
        this_level = next_level
    return -1
            

def findShortest(graph_nodes, graph_from, graph_to, ids, val):
    min_dist = graph_nodes
    construct_adj_list(graph_nodes, graph_from, graph_to)
    for i in range(1, graph_nodes+1):
        if ids[i-1] == val:
            dist = bfs(graph_nodes, ids, i, val)
            if dist != -1 and dist < min_dist:
                min_dist = dist
    return min_dist if min_dist != graph_nodes else -1

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    graph_nodes, graph_edges = map(int, input().split())

    graph_from = [0] * graph_edges
    graph_to = [0] * graph_edges

    for i in range(graph_edges):
        graph_from[i], graph_to[i] = map(int, input().split())

    ids = list(map(int, input().rstrip().split()))

    val = int(input())

    ans = findShortest(graph_nodes, graph_from, graph_to, ids, val)

    fptr.write(str(ans) + '\n')

    fptr.close()
