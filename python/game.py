
import pgzrun
import random


WIDTH = 690
HEIGHT = 400
SIZE_TANK=25
walls=[]
bullets=[] 
count_tank = 0            # đếm xung nhịp của my tank 
count_a_tank = 0		  #đếm xung của tank đồng minh
count_e_tank = 0	#đếm xung của tank địch
e_tank_bullets=[]
enemies = []
allieds =[]
a_tank_bullets=[]
game = False


tab =0     # chuyển màn hình : 0 màn hình menu ,1 màn hình setting , 2 màn hình information,3 màn hình new game , 4 màn hình kết thúc game 
quantity_a_tank =1     # số lượng tăng  đồng minh
quantity_e_tank =4		 # số lượng tăng địch

BLACK =(0,0,0)
RED = (255,0,0)
GREEN =(37,230,102)
GRAY = (120,120,120)
WHITE = (255,255,255)
BLUE =(71,30,235)
TIM = (43,29,100)
color2="black"

# các box của menu game 
menu_box1 = Rect(260,100,150,30)
menu_box2 = Rect(260,150,150,30)
menu_box3 = Rect(260,200,150,30)
menu_boxs = [menu_box1,menu_box2,menu_box3]

# các nút cộng trừ và save trong setting
setting_box1 = Rect(260,100,20,20)
setting_box2 = Rect(460,100,20,20)
setting_box3 = Rect(260,150,20,20)
setting_box4 = Rect(460,150,20,20)
setting_box5 = Rect(260,200,20,20)
setting_box6 = Rect(460,200,20,20)
setting_box7 = Rect(600,350,50,30)
setting_boxs =[setting_box1,setting_box2,setting_box3,setting_box4,setting_box5,setting_box6,setting_box7]

text_dokho = ["Easy","Hard"]
index_dokho =0  #nhận định game đnag trong trạng thái khó hay dễ


#xe tang
tank = Actor('tank_red')
tank.pos = (SIZE_TANK,HEIGHT-SIZE_TANK)
tank.angle=90

HOLD =30      #time đợi bắn mặc định
hold_e= 0 		#time đợi bắn địch
hold_a=0		#time đợi bắn đồng minh
hold=0			#time đợi bắn my tank

background = Actor('grass')
def init() :  # khởi tạo lại giá trị ban đầu
    global HOLD,walls,enemies,allieds,a_tank_bullets,bullets,e_tank_bullets
    tank.pos = (SIZE_TANK,HEIGHT-SIZE_TANK)
    enemies.clear()
    allieds.clear()
    a_tank_bullets.clear()
    e_tank_bullets.clear()
    walls.clear()
    bullets.clear()
    if index_dokho ==1 :   # nếu khó thì giảm thời gian đợi xuống 
        HOLD /=2

    for i in range(quantity_e_tank):
        e_tank = Actor('tank_dark')
        e_tank.x = i * 100 + 25
        e_tank.y = 25
        e_tank.angle = 270
        enemies.append(e_tank)

    for i in range(quantity_a_tank):
        a_tank = Actor('tank_blue')
        a_tank.x = (i+1) * 100 + 25
        a_tank.y = HEIGHT-SIZE_TANK
        a_tank.angle = 90
        allieds.append(a_tank)


    for x in range(15):
        for y in range (6):
            if random.randint(0,100) < 50	:
                wall = Actor('wall')
                wall.x=x*50+SIZE_TANK
                wall.y=y*50+SIZE_TANK*3
                walls.append(wall)



def my_tank():
	original_x=tank.x
	original_y=tank.y
	if keyboard.left:
		tank.x=tank.x-1.5
		tank.angle=180
	elif keyboard.right:
		tank.x=tank.x+1.5
		tank.angle=0
	elif keyboard.up:
		tank.y=tank.y-1.5
		tank.angle=90
	elif keyboard.down:
		tank.y=tank.y+1.5
		tank.angle=270
	if tank.collidelist(walls)!=-1:
		tank.x=original_x
		tank.y=original_y
	if tank.collidelist(enemies)!=-1:
		tank.x=original_x
		tank.y=original_y
	if tank.collidelist(allieds)!=-1:
		tank.x=original_x
		tank.y=original_y
	if tank.x < 25 or tank.y < 25 or tank.x > (WIDTH-25) or tank.y > (HEIGHT-25):
		tank.x=original_x
		tank.y=original_y


def tank_bullet():
	global hold
	if hold == 0:
		if keyboard.space:
			bullet=Actor('bulletred2')
			bullet.angle=tank.angle
			bullets.append(bullet)
			bullet.pos = tank.pos
			hold = 30
	else:
		hold = hold - 1
	for bullet in bullets:
		if(bullet.angle == 0):
			bullet.x = bullet.x+6
		if bullet.angle == 90:
			bullet.y=bullet.y-6
		if bullet.angle == 180:
			bullet.x=bullet.x - 6
		if bullet.angle == 270:
			bullet.y=bullet.y+6
	for bullet in bullets:
		walls_index=bullet.collidelist(walls)
		if walls_index != -1:
			sounds.gun9.play()
			del walls[walls_index]
			bullets.remove(bullet)
		if bullet.x < 0 or bullet.y < 0 or bullet.x > WIDTH or bullet.y > HEIGHT :
			bullets.remove(bullet)
		bullet_index = bullet.collidelist(enemies)
		if bullet_index != -1:
			sounds.exp.play()
			bullets.remove(bullet)
			del enemies[bullet_index]
			


def en_tank():
	global count_e_tank ,hold_e,tab
	if len(enemies) ==0 :
    		tab =4
	i =0
	for e_tank in enemies:
		original_x=e_tank.x
		original_y=e_tank.y
		ran = random.randint(0,2)
		if count_e_tank > 0:
			count_e_tank = count_e_tank -1
			if e_tank.angle == 0 :
				e_tank.x = e_tank.x+2
			if e_tank.angle == 90 :
				e_tank.y = e_tank.y-2
			if e_tank.angle == 180 :
				e_tank.x = e_tank.x-2
			if e_tank.angle == 270 :
				e_tank.y = e_tank.y+2
			if e_tank.x < 25 or e_tank.y < 25 or e_tank.x > (WIDTH-25) or e_tank.y > (HEIGHT-25):
				e_tank.x=original_x
				e_tank.y=original_y
			if e_tank.collidelist(walls) != -1:
				e_tank.x=original_x
				e_tank.y=original_y
			del enemies[i]
			if e_tank.collidelist(enemies) != -1:
				e_tank.x=original_x
				e_tank.y=original_y
			enemies.append(e_tank)
			if e_tank.collidelist(allieds) != -1:
				e_tank.x=original_x
				e_tank.y=original_y
			if e_tank.colliderect(tank):
				e_tank.x=original_x
				e_tank.y=original_y
			
		elif ran  == 0:
			count_e_tank = HOLD
		elif ran == 1 :
			e_tank.angle=random.randint(0,3)*90
		else:
			if hold_e == 0:
				bullet = Actor('bulletdark2')
				bullet.angle = e_tank.angle
				bullet.pos = e_tank.pos
				e_tank_bullets.append(bullet)
				hold_e = HOLD-10
			else:
				hold_e = hold_e -1
		i+=1
			
def bullets_e():
	global enemies,game,tab
	for e_bullet in e_tank_bullets:
		if e_bullet.angle == 0:
			e_bullet.x = e_bullet.x+6
		if e_bullet.angle == 90:
			e_bullet.y = e_bullet.y-6
		if e_bullet.angle == 180:
			e_bullet.x = e_bullet.x-6
		if e_bullet.angle == 270:
			e_bullet.y = e_bullet.y+6
	for e_bullet in e_tank_bullets:
		walls_index=e_bullet.collidelist(walls)
		if walls_index != -1:
			sounds.gun9.play()
			del walls[walls_index]
			e_tank_bullets.remove(e_bullet)
		if e_bullet.x <= 0 or e_bullet.y <= 0 or e_bullet.x >= WIDTH or e_bullet.y >= HEIGHT :
			e_tank_bullets.remove(e_bullet)
		if e_bullet.colliderect(tank):
			#game = True
			tab =4
		a_tank_index=e_bullet.collidelist(allieds)
		if a_tank_index != -1:
			sounds.exp.play()
			del allieds[a_tank_index]
			e_tank_bullets.remove(e_bullet)
		
        



def a_tank():
	global count_a_tank ,hold_a
	i=0
	for a_tank in allieds:
		original_x=a_tank.x
		original_y=a_tank.y
		ran = random.randint(0,2)
		if count_a_tank > 0:
			count_a_tank = count_a_tank -1
			if a_tank.angle == 0 :
				a_tank.x = a_tank.x+2
			if a_tank.angle == 90 :
				a_tank.y = a_tank.y-2
			if a_tank.angle == 180 :
				a_tank.x = a_tank.x-2
			if a_tank.angle == 270 :
				a_tank.y = a_tank.y+2
			if a_tank.x < 25 or a_tank.y < 25 or a_tank.x > (WIDTH-25) or a_tank.y > (HEIGHT-25):
				a_tank.x=original_x
				a_tank.y=original_y

			if a_tank.collidelist(walls) != -1:
				a_tank.x=original_x
				a_tank.y=original_y
			del allieds[i]
			if a_tank.collidelist(allieds) != -1:
				a_tank.x=original_x
				a_tank.y=original_y
			allieds.append(a_tank)
			if a_tank.collidelist(enemies) != -1:
				a_tank.x=original_x
				a_tank.y=original_y
			if a_tank.colliderect(tank):
				a_tank.x=original_x
				a_tank.y=original_y

		elif ran  == 0:
			count_a_tank = 20
		elif ran == 1 :
			a_tank.angle=random.randint(0,3)*90
		else:
			if hold_a == 0:
				bullet = Actor('bulletblue2')
				bullet.angle = a_tank.angle
				bullet.pos = a_tank.pos
				a_tank_bullets.append(bullet)
				hold_a = 30
			else:
				hold_a = hold_a -1
		i+=1
			
def bullets_a():
	global allieds,game
	for a_bullet in a_tank_bullets:
		if a_bullet.angle == 0:
			a_bullet.x = a_bullet.x+6
		if a_bullet.angle == 90:
			a_bullet.y = a_bullet.y-6
		if a_bullet.angle == 180:
			a_bullet.x = a_bullet.x-6
		if a_bullet.angle == 270:
			a_bullet.y = a_bullet.y+6
	for a_bullet in a_tank_bullets:
		walls_index=a_bullet.collidelist(walls)
		if walls_index != -1:
			sounds.gun9.play()
			del walls[walls_index]
			a_tank_bullets.remove(a_bullet)
		if a_bullet.x <= 0 or a_bullet.y <= 0 or a_bullet.x >= WIDTH or a_bullet.y >= HEIGHT :
			a_tank_bullets.remove(a_bullet)
		bullet_index = a_bullet.collidelist(enemies)
		if bullet_index != -1:
			sounds.exp.play()
			a_tank_bullets.remove(a_bullet)
			del enemies[bullet_index]

def on_mouse_down(pos):   # nghe sự kiện bấm chuột
    global tab,quantity_a_tank,quantity_e_tank,index_dokho
	# xét từng màn hình
    if tab ==0 :     #menu
        index =0
        for box in menu_boxs:      # chạy lần lượt các box và xđ trạng thái click chuột vào box nào 
            if box.collidepoint(pos):     
                if index ==0 :
                    init()
                    tab =3
                elif index ==1:
                    tab =1
                elif index ==2:
                    tab =2
            index +=1
    elif tab ==1 : # setting
        index =0
        for box in setting_boxs:    # chạy lần lượt các box và xđ trạng thái click chuột vào box nào 
            if box.collidepoint(pos):
                if index ==0 :
                    if quantity_e_tank >1:
                        quantity_e_tank -=1
                elif index ==1:
                    if quantity_e_tank <5:
                        quantity_e_tank +=1
                elif index ==2:
                    if quantity_a_tank >0:
                        quantity_a_tank -=1
                elif index ==3:
                    if quantity_a_tank <4:
                        quantity_a_tank +=1
                elif index ==4:
                    index_dokho = 1- index_dokho
                elif index ==5:
                    index_dokho = 1- index_dokho
                elif index ==6:
                    tab = 0
            index +=1
    elif tab ==2 :   #information
        if setting_box7.collidepoint(pos) :
            tab = 0
    elif tab ==4 :   # end game 
        if setting_box7.collidepoint(pos) :
            tab = 0


            
def update():
    if tab ==3 :  	 # màn hình game thì mới update
        my_tank()
        tank_bullet()
        en_tank()
        bullets_e()
        a_tank()
        bullets_a()


def draw():
    if tab ==0 : # màn hình menu
        screen.fill((64,196,49))
        for box in menu_boxs:
            screen.draw.filled_rect(box,GRAY)
        screen.draw.text('New game',(305,110),color=BLUE,fontsize=20)
        screen.draw.text('Options',(305,160),color=BLUE,fontsize=20)
        screen.draw.text('Information',(305,210),color=BLUE,fontsize=20)
    elif tab ==1 : # màn hình setting 
        screen.fill((64,196,49))
        for box in setting_boxs:
            screen.draw.filled_rect(box,GRAY)
        i_setting_box1 = Rect(290,100,quantity_e_tank*32,20)
        i_setting_box2 = Rect(290,150,quantity_a_tank*40,20)
        i_setting_box3 = Rect(290,200,160,30)
        i_setting_boxs =[i_setting_box1,i_setting_box2,i_setting_box3]
        for i_box in i_setting_boxs:
            screen.draw.filled_rect(i_box,GRAY)

        screen.draw.textbox("-",setting_box1,color=color2)
        screen.draw.textbox("+",setting_box2,color=color2)
        screen.draw.textbox("-",setting_box3,color=color2)
        screen.draw.textbox("+",setting_box4,color=color2)
        screen.draw.textbox("-",setting_box5,color=color2)
        screen.draw.textbox("+",setting_box6,color=color2)

        screen.draw.text('Enemy tanks',(100,100),color="black",fontsize=20)
        screen.draw.text(f"{quantity_e_tank}",(365,100),color=TIM,fontsize=20)
        screen.draw.text('Allied tanks',(100,150),color="black",fontsize=20)
        screen.draw.text(f"{quantity_a_tank}",(365,150),color=TIM,fontsize=20)
        screen.draw.text('Level',(100,200),color="black",fontsize=20)
        screen.draw.text('Save',(610,355),color="red",fontsize=20)
        screen.draw.text(text_dokho[index_dokho],(350,205),color=TIM,fontsize=25)
    elif tab ==2 : # màn hình information
        screen.fill((64,196,49))
        screen.draw.text('Developer',(260,80),color="gray",fontsize=50)
        screen.draw.text('Do Thi Xuan Quynh',(75,150),color="black",fontsize=20)  
        screen.draw.text('MSV : B19DCCN544',(75,180),color="black",fontsize=20)
        screen.draw.text('Class : D19CQCN04-B',(75,210),color="black",fontsize=20)
        screen.draw.text('SDT : 0908307112',(75,240),color="black",fontsize=20)
        screen.draw.text('Nguyen Hoang Viet',(275,150),color="black",fontsize=20)  
        screen.draw.text('MSV : B19DCCN714',(275,180),color="black",fontsize=20)
        screen.draw.text('Class : D19CQCN12-B',(275,210),color="black",fontsize=20)
        screen.draw.text('SDT : 0979342104',(275,240),color="black",fontsize=20)
        screen.draw.text('Dao Trong Phuc',(475,150),color="black",fontsize=20)  
        screen.draw.text('MSV : B19DCCN504',(475,180),color="black",fontsize=20)
        screen.draw.text('Class : D19CQCN12-B',(475,210),color="black",fontsize=20)
        screen.draw.text('SDT : 0963991723',(475,240),color="black",fontsize=20)
        screen.draw.filled_rect(setting_box7,GRAY)
        screen.draw.text('Quit',(610,355),color="red",fontsize=20)
    elif tab ==3: #màn hình game     
        background.draw()
        for e_tank in enemies:
            e_tank.draw()
        for a_tank in allieds:
            a_tank.draw()
        tank.draw()
        for wall in walls:
            wall.draw()
        for bullet in bullets:
            bullet.draw()
        for bullet_e in e_tank_bullets:
            bullet_e.draw()
        for bullet_a in a_tank_bullets:
            bullet_a.draw()
    elif tab ==4:     # màn hình endgame 
        screen.fill((64,196,49))
        if len(enemies)==0:
            screen.draw.text('You won',(210,150),color=(255,0,0),fontsize=100)
        else :
            screen.draw.text('You lost',(210,150),color=(0,0,0),fontsize=100)
        screen.draw.filled_rect(setting_box7,GRAY)
        screen.draw.text('Quit',(610,355),color="black",fontsize=20)
	






pgzrun.go()



