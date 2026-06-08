# Graph Patterns

This folder mirrors the local visual revision hub from `/Users/mac/Desktop/graphs`.

- Visual BFS/DFS hub: [visual/graph-bfs-patterns-hub.html](visual/graph-bfs-patterns-hub.html)
- BFS templates: [bfs-patterns.cpp](bfs-patterns.cpp)
- DFS templates: [dfs-patterns.cpp](dfs-patterns.cpp)

## BFS Pattern Map

| Category | Pattern | Local examples |
| -------- | ------- | -------------- |
| Core graph BFS | Basic Graph BFS | graph traversal |
| Core graph BFS | Connected Components | `count-connected-components` |
| Grid traversal | Flood Fill / Plain Grid BFS | `count-number-of-islands` |
| Grid traversal | Number of Islands / Components | `count-number-of-islands` |
| Grid traversal | Max Area / Component Size | island-size problems |
| Grid traversal | Two-Grid BFS | sub-island problems |
| Grid traversal | 8-Directional BFS | diagonal movement problems |
| Multi-source | Multi-Source + Distance BFS | `islands-and-treasure` |
| Level-by-level | Level BFS | minutes, depth, shortest steps |
| Boundary reverse | Boundary BFS | Surrounded Regions, Enclaves |
| Shortest path | Unweighted Shortest Path | Word Ladder |
| Shortest path | 0-1 BFS | `0/1` edge weights |
| State-space | State BFS | lock, puzzle, word states |
| State-space | Bidirectional BFS | Word Ladder optimized |
| Graph BFS | Undirected Cycle Detection | cycle checks |
| Graph BFS | Bipartite Coloring | bipartite graph |
| Graph BFS | Kahn Topological Sort | course scheduling |

## DFS Pattern Map

| Category | Pattern | Local examples |
| -------- | ------- | -------------- |
| Core graph DFS | Basic Graph DFS | graph traversal |
| Core graph DFS | Iterative DFS | deep graph/grid traversal |
| Core graph DFS | Connected Components | `count-connected-components` |
| Grid traversal | Flood Fill DFS | `count-number-of-islands` |
| Grid traversal | Number of Islands DFS | `count-number-of-islands` |
| Grid traversal | Max Area DFS | island-size problems |
| Grid traversal | Two-Grid Sub Islands DFS | sub-island problems |
| Grid traversal | 8-Directional DFS | diagonal movement problems |
| Boundary reverse | Boundary DFS | Surrounded Regions, Enclaves |
| Graph DFS | Undirected Cycle Detection | `dfs(node, parent)` |
| Graph DFS | Directed Cycle Detection | Course Schedule |
| Graph DFS | Bipartite Coloring | bipartite graph |
| Graph DFS | Topological Sort | postorder then reverse |
| Paths | Backtracking DFS | all paths source to target |

## Surrounded Regions Rule

For Surrounded Regions, the correct direction is boundary first.

1. Mark every boundary `O`.
2. DFS/BFS through `O` cells connected to those boundary cells.
3. Flip the unmarked `O` cells.

The real question is: is this `O` connected to some boundary `O`?
