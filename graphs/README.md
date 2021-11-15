# Graphs
## BFS
- uses Queue and visited array,firstly pushes one element into queue and checking the condition while(!queue is empty) it is not empty and we visted the node making its visted[node]=1  so we find its adjacent nodes and it is not visited and push them and we just travel all its adjacent and further its adjacent so we travel all all the elements in the graph.

## DFS

- uses visited array ,firstly making one element visited[node]=1 and we travel its adjacent and making it is visited ,remember it only travel only one adjacent of it so at lastly it dont find any adjacent it will comeback its remaining adjacent vertices and travels ,at last will visited all its vertices, 