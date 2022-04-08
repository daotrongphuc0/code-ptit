
import pgzrun
import random


WIDTH = 690
HEIGHT = 400
SIZE_TANK=25
walls=[]
bullets=[] 
count_tank = 0
e_tank_bullets=[]
enemies = []
game = False

#xe tang
tank = Actor('tank_red')
tank.pos = (WIDTH/2,HEIGHT-SIZE_TANK)
tank.angle=90
#gach
hold = 0 
#enemy tank
for i in range(4):
	e_tank = Actor('tank_dark')
	e_tank.x = i * 100 + 25
	e_tank.y = 25
	e_tank.angle = 270
	enemies.append(e_tank)



background = Actor('grass')


for x in range(15):
	for y in range (6):
		if random.randint(0,100) < 50	:
			wall = Actor('wall')
			wall.x=x*50
			wall.y=y*50+75
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
	global count_tank ,hold
	for e_tank in enemies:
		original_x=e_tank.x
		original_y=e_tank.y
		ran = random.randint(0,2)
		if count_tank > 0:
			count_tank = count_tank -1
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
				count = 0
			if e_tank.collidelist(walls) != -1:
				e_tank.x=original_x
				e_tank.y=original_y
				count = 0
		elif ran  == 0:
			count_tank = 20
		elif ran == 1 :
			e_tank.angle=random.randint(0,3)*90
		else:
			if hold == 0:
				bullet = Actor('bulletred2')
				bullet.angle = e_tank.angle
				bullet.pos = e_tank.pos
				e_tank_bullets.append(bullet)
				hold = 40
			else:
				hold = hold -1
			
def bullets_e():
	global enemies,game
	for bullet in e_tank_bullets:
		if bullet.angle == 0:
			bullet.x = bullet.x+6
		if bullet.angle == 90:
			bullet.y = bullet.y-6
		if bullet.angle == 180:
			bullet.x = bullet.x-6
		if bullet.angle == 270:
			bullet.y = bullet.y+6
	for bullet in e_tank_bullets:
		walls_index=bullet.collidelist(walls)
		if walls_index != -1:
			sounds.gun9.play()
			del walls[walls_index]
			e_tank_bullets.remove(bullet)
		if bullet.x < 0 or bullet.y < 0 or bullet.x > WIDTH or bullet.y > HEIGHT :
			e_tank_bullets.remove(bullet)
		if bullet.colliderect(tank):
			game = True
			enemies = []




def update():
	my_tank()
	tank_bullet()
	en_tank()
	bullets_e()


def draw():
	if game:
		screen.fill((0,0,0))
		screen.draw.text('you lose',(230,150),color=(255,255,255),fontsize=100)
	elif len(enemies)==0:
		screen.fill((0,0,0))
		screen.draw.text('you won',(230,150),color=(255,0,0),fontsize=100)
	else:
		background.draw()
		for e_tank in enemies:
			e_tank.draw()
		tank.draw()
		for wall in walls:
			wall.draw()
		for bullet in bullets:
			bullet.draw()
		for bullet in e_tank_bullets:
			bullet.draw()


pgzrun.go()



