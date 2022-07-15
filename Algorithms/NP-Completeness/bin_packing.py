def next_fit(num_list, capacity):
    bin_count = 0
    remainder = 0
    
    for index in range(len(num_list)):
        
        if remainder >= num_list[index]:
            remainder -= num_list[index]
        else:
            bin_count += 1
            remainder = capacity - num_list[index]
            
    return bin_count

def best_fit(num_list, capacity, length):
    bin_count = 0
    room_left = [0] * length
    
    for i in range(length):
        j = 0
        
        min_space = capacity + 1
        bin = 0
        
        for j in range(bin_count):
            if room_left[j] >= num_list[i] and (room_left[j] - num_list[i] < min_space):
                bin = j 
                min_space = room_left[j] - num_list[i]
                
        if (min_space == capacity + 1):
            room_left[bin_count] = capacity - num_list[i]
            bin_count += 1
        else:
            room_left[bin] -= num_list[i]
            
    return bin_count
            
        
    
    return bin_count