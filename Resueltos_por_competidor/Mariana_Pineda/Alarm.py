while True:
	h1,m1,h2,m2=map(int,input().split())
	minutos=0
	horas=0
	if h1==0 and h2==0 and m1==0 and m2==0:
		break
	minutos =m2-m1
	minutos=(minutos+60)%60
	if m1+minutos>=60:
		h1+=1
	horas=h2-h1
	horas=(horas+24)%24
	print((horas*60)+(minutos%60))
