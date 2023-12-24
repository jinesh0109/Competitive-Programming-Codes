# cook your dish here
for _ in range(int(input())):
    n,p=[*map(int,input().split())]
    a=[*map(int,input().split())]
    a.insert(0,0)
    fnc =[0]*(n+1)
    count1 = 0
    atlast = []
    extra = []
    for i  in range(n):
        op = []
        soul =i+1
        while fnc[soul]==0:
            fnc[soul] = 1
            op.append(soul)
            soul = a[soul]
        if len(op)>=2:
            for j in range(1,len(op)-1,2):
                atlast.append([op[0],op[j],op[j+1]])
            if len(op)%2==0:
                extra.append([op[0],op[-1]])
                
    if len(extra)%2==1:
        print(-1)
    else:
        if len(atlast)<=p:
            for i in range(0,len(extra),2):


                atlast.append([extra[i][0],extra[i+1][0],extra[i+1][1]])
                atlast.append([extra[i][0],extra[i+1][0],extra[i][1]])
            print(len(atlast))
            for i in range(len(atlast)):
                print(atlast[i][0],atlast[i][1],atlast[i][2])
        else:
            print(-1)
                    
                    
        
    
                        


                

                    
                        
                    
                    


            
            
            
                
                
                
                    
                
            
            
        
        
            
                                
                    
                
        
    
        
