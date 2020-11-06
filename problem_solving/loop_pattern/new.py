row = int(input("Enter the number of rows: "))
col = int(input("Enter the number of columns: "))
for i in range(row+1):
    for j in range(col+1):
        if(i==0 or i==row or j==0 or j==col):
            print("*",end=" ")
        else:
            print(" ",end=" ")
    print("\n")
    

