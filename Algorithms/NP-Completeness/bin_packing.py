def next_fit(num_list, capacity):
    bin_total = 0
    remainder = 0
    
    for index in range(len(num_list)):
        
        if remainder >= num_list[index]:
            remainder -= num_list[index]
        else:
            bin_total += 1
            remainder = capacity - num_list[index]
            
    return bin_total

def best_fit():
    pass