def next_fit(num_list, capacity):
    bin_count = 0
    remainder = 0
    
    for index in range(len(num_list)):
        
        if num_list[index] > remainder:
            bin_count += 1
            remainder = capacity - num_list[index]
        else:
            remainder -= num_list[index]
            
    return bin_count

def best_fit(num_list, capacity, length):
    bin_count = 0
    bin_remainder = [0] * length
    
    for i in range(length):
        j = 0
        
        min_space = capacity + 1
        bin = 0
        
        for j in range(bin_count):
            if bin_remainder[j] >= num_list[i] and (bin_remainder[j] - num_list[i] < min_space):
                bin = j 
                min_space = bin_remainder[j] - num_list[i]
                
        if (min_space == capacity + 1):
            bin_remainder[bin_count] = capacity - num_list[i]
            bin_count += 1
        else:
            bin_remainder[bin] -= num_list[i]
            
    return bin_count

def first_fit(num_list, capacity, length):
    bin_count = 0
    bin_remainder = [0] * length
    
    for i in range(length):
        j = 0
        
        while j < bin_count:
            if (bin_remainder[j] >= num_list[i]):
                bin_remainder[j] -= num_list[i]
                break
            j += 1
            
        if (j == bin_count):
            bin_remainder[bin_count] = capacity - num_list[i]
            bin_count += 1
    
    return bin_count
