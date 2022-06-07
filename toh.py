def toh(disk,source,mover,target):
    #base case
    if disk == 0:
        return
    #recursive case
    toh(disk-1,source,target,mover)
    print('from {} to {}'.format(source,target))
    toh(disk-1,mover,source,target)

## main
toh(2,'A','B','C')