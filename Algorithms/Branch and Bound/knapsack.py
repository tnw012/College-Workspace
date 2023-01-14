from dataclasses import dataclass
from queue import Queue, PriorityQueue

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
    
@dataclass
class BestNode:
    level : int
    profit : int
    weight : int
    bound  : float
    
    def __str__(self):
        string = f"Node level: {str(self.level)}\n" \
                 f"Profit: {str(self.profit)}\n" \
                 f"Weight: {str(self.weight)}\n" \
                 f"Bound: {str(self.bound)}\n"           
        return string
    
    def __lt__(self, other):
        if (isinstance (other, int) or isinstance(other, float)):
            return self. profit() > other
        elif (isinstance(other, complex)):
            return self.profit > other.profit
        else:
            return TypeError

def bound(n, Node, p_list, w_list):
    j = 0 
    k = 0
    total_weight = 0
    result = 0.0
    
    if (Node.weight >= MAX_WEIGHT):
        return 0
    else:
        result = Node.profit
        j = Node.level + 1
        total_weight = Node.weight
        
        while (j < n and total_weight + w_list[j] <= MAX_WEIGHT):
            total_weight = total_weight + w_list[j]
            result = result + p_list[j]
            j += 1
            
        if (j < n):
            result = result + (MAX_WEIGHT - total_weight) * p_list[k] / w_list[k]
        
        return result

def breadth_first_knapsack(n, p_list, w_list):
    BreadthQueue = Queue()
    NodeV = Node(-1, 0, 0)
    NodeU = Node(0, 0, 0)
    
    max_profit = 0
    
    BreadthQueue.put(NodeV)
    
    while not BreadthQueue.empty():
        
        NodeV = BreadthQueue.get()
        
        if NodeV.level == -1:
            NodeU.level = 0
            
        if NodeV.level == n - 1:
            continue
        
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
    
        BreadthQueue.task_done()
    
    return max_profit  

def best_first_knapsack(n, p_list, w_list):
    PQ = PriorityQueue()
    NodeU = BestNode(0, 0, 0, 0.0)
    NodeV = BestNode(0, 0, 0, 0.0)
    
    max_profit = 0
    NodeV.bound = bound(n, NodeV, p_list, w_list)
    PQ.put(NodeV)
    
    while not PQ.empty():
        NodeV = PQ.get()
        
        if (NodeV.bound > max_profit):
            NodeU.level = NodeV.level + 1
            NodeU.profit = NodeV.profit + p_list[NodeU.level]
            NodeU.weight = NodeV.weight + w_list[NodeU.level]
            
            if (NodeU.weight <= MAX_WEIGHT and NodeU.profit > max_profit):
                max_profit = NodeU.profit
                
            NodeU.bound = bound(n, NodeU, p_list, w_list)
            
            if NodeU.bound > max_profit:
                PQ.put(NodeU)
            
            NodeU.weight = NodeV.weight
            NodeU.profit = NodeV.profit
            NodeU.bound = bound(n, NodeU, p_list, w_list)
            
            if (NodeU.bound > max_profit):
                PQ.put(NodeU)
    
    PQ.task_done()    
    
    return max_profit
                    