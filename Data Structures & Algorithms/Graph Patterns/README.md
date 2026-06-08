# Graph Patterns

This folder maps the graph/grid problems in this NeetCode repo to reusable BFS and DFS patterns.

## BFS

| Pattern | Use it for | Local examples |
| ------- | ---------- | -------------- |
| Plain grid BFS | Visit one connected island or region. | `count-number-of-islands` |
| Multi-source BFS | Fill shortest distance from many starting cells. | `islands-and-treasure` |
| Graph adjacency BFS | Traverse an unweighted graph by neighbor list. | `count-connected-components` |
| Boundary reverse BFS | Preserve cells connected to a boundary, flip/count the rest. | Surrounded Regions, Enclaves |
| State BFS | Shortest path where state includes extra data like keys, masks, or remaining wall breaks. | advanced graph problems |

## DFS

| Pattern | Use it for | Local examples |
| ------- | ---------- | -------------- |
| Flood DFS | Consume a full component from one start. | `count-number-of-islands` |
| Component DFS | Count connected components in a graph. | `count-connected-components` |
| Boundary DFS | Mark all cells connected to the border. | Surrounded Regions, Enclaves |
| Backtracking DFS | Try all valid paths/choices. | path enumeration problems |

## Surrounded Regions Rule

For Surrounded Regions, the correct direction is boundary first.

1. Mark every boundary `O`.
2. DFS/BFS through `O` cells connected to those boundary cells.
3. Flip the unmarked `O` cells.

The real question is: is this `O` connected to some boundary `O`?
