count=0
def delete(x,y):
	global count
	l,length=0,len(x)
	if(x==y):
			return count

	while(l!=length):
		l+=1
		if(x[0] not in y):
			count+=1
			x.remove(x[0])
			#print(x,y)
		elif(x[0] in y):
			#enumerate(x)
			b=x[0]
			x.remove(b)
			y.remove(b)
			#print(x,y)
	return x,y

		
if __name__ == '__main__':
	
	test=int(input())
	for t in range(test):
		count=0
		result=0
		a=list(input().strip())
		b=list(input().strip())
		a,b=delete(a,b)
		#print(count,a,b)
		delete(b,a)
		print(count)