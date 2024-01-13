
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

print(power2(2,3));

# ////////////////////////////////////////////

#  Move noOfDisks from a via b to c
def towerOfHanoi(noOfDisks,a='a',b='b',c='c'):
    
    if(noOfDisks==0):
        return;

    towerOfHanoi(noOfDisks-1,a,c,b);
    print(f" {noOfDisks} [{a} -> {b}] ");
    towerOfHanoi(noOfDisks-1,c,b,a);


noOfDisks = int(input("Enter NO. of Disks: "));

towerOfHanoi(noOfDisks);

    
