
def power(base,expo):
    if expo == 1:
        return base;
    return base*power(base,expo-1)

def power2(base,expo):
    if expo == 1:
        return base;

    first = power2(base,expo//2);
    
    if(expo%2 == 0):
        return first*first;
    else:
        return first*first*base;
    

print(power2(2,302));