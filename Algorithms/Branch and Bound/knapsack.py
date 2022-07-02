from dataclasses import dataclass
import queue

MAX_WEIGHT = 30

@dataclass
class Item :
    profit : int = 0
    weight : int = 0
    
    def __str__(self):
        string = f"value  : {str(self.value)}\n" \
                 f"weight : {str(self.weight)}\n"
        return string

@dataclass
class Node:
    level : int
    profit : int
    weight : int
    
    def __str__(self):
        string = f"Node level: {str(self.level)}\n" \
                 f"Profit: {str(self.profit)}\n" \
                 f"Weight: {str(self.weight)}\n"         
        return string

def bound(n, Node, p_list, w_list):
    j = 0 
    k = 0
    total_weight = 0
    result = 0.0
    
    if (Node.weight >= MAX_WEIGHT):
        return 0
    else:
        result = Node.profit
        j = Node.level
        total_weight = Node.weight
        
        while (j < n and total_weight + w_list[j] <= MAX_WEIGHT):
            total_weight = total_weight + w_list[j]
            result = result + p_list[j]
            j += 1
    
        k =  j
        if (k <= n):
            result = result + (MAX_WEIGHT - total_weight) * p_list[k] / w_list[k]
        
        return result

def breadth_knapsack(n, p_list, w_list):       
    BreadthQueue = queue.Queue()
    NodeV = Node(0, 0, 0)
    NodeU = Node(0, 0, 0)
    
    max_profit = 0
    
    BreadthQueue.put(NodeV)
    
    while not BreadthQueue.empty():
        
        NodeV = BreadthQueue.get()
        
        NodeU.level = NodeV.level + 1
        NodeU.weight = NodeV.weight + w_list[NodeU.level]
        NodeU.profit = NodeV.profit + p_list[NodeU.level]
        
        if (NodeU.weight <= MAX_WEIGHT and NodeU.profit > max_profit):
            max_profit = NodeU.profit
        
        if (bound(n, NodeU, p_list, w_list) > max_profit):
            BreadthQueue.put(NodeU)
        
        NodeU.weight = NodeV.weight
        NodeU.profit = NodeV.profit
        
        if (bound(n, NodeU, p_list, w_list) > max_profit):
            BreadthQueue.put(NodeU)
            
    print(f"The max profit that could be had is: {max_profit}")
    
def best_knapsack():
    pass