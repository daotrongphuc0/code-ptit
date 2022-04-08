import pygame
from edit_game_tank import Game

pygame.init()
pygame.display.set_caption("Bắn tank")
clock = pygame.time.Clock()

WIDTH = 800
HEIGHT = 600
screen = pygame.display.set_mode((WIDTH,HEIGHT)) # set khung

BLACK =(0,0,0)
RED = (255,0,0)
GREEN =(37,230,102)
GRAY = (120,120,120)
WHITE = (255,255,255)
running = True


count_tank =0
count_e_tank =4
do_kho =1


font = pygame.font.SysFont('sans',20)
text_1 = font.render('New game',True,GREEN)
text_2 = font.render('Setting',True,GREEN)
text_3 = font.render('Information',True,GREEN)

font_0 = pygame.font.SysFont('sans',50)
text_4 = font_0.render('+',True,GREEN)
text_5 = font_0.render('-',True,GREEN)

text_s0 = font.render('Allied Tanks',True,GREEN)
text_s1 = font.render('Enemy tanks',True,GREEN)
text_s2 = font.render('Easy',True,RED)
text_s3 = font.render('Hard',True,RED)
text_s4 = font.render('Do kho',True,GREEN)
text_s5 = font.render('Quit',True,RED)

newgame =False
setting = False
information = False
menugame = True
def game_playing():
    pass
while running:

    clock.tick(60) # nháy 60 lần 1s

    text_s_tank = font.render(f"{count_tank}",True,RED)
    text_s_e_tank = font.render(f"{count_e_tank}",True,RED)
    
    if menugame : # vẽ màn hình menu
        screen.fill(BLACK)

        pygame.draw.rect(screen,GRAY,(325,200,150,30)) # nút new game
        screen.blit(text_1,(350,205))

        pygame.draw.rect(screen,GRAY,(325,250,150,30)) # nút setting
        screen.blit(text_2,(350,255))

        pygame.draw.rect(screen,GRAY,(325,300,150,30))
        screen.blit(text_3,(350,305))
    elif newgame : # vào game
        running = False
        game = Game()
        game.run()

    elif setting : #vẽ màn hình setting
        screen.fill(BLACK)

        pygame.draw.rect(screen,GRAY,(325,200,count_e_tank*30,15))
        screen.blit(text_s1,(180,193))
        screen.blit(text_s_e_tank,(397,195))
        pygame.draw.rect(screen,WHITE,(290,197,20,20))
        screen.blit(text_5,(293,173))
        pygame.draw.rect(screen,WHITE,(490,197,20,20))
        screen.blit(text_4,(489,176))

        pygame.draw.rect(screen,GRAY,(325,250,count_tank*30,15))
        screen.blit(text_s0,(180,240))
        screen.blit(text_s_tank,(397,243))
        pygame.draw.rect(screen,WHITE,(290,247,20,20))
        screen.blit(text_5,(293,223))
        pygame.draw.rect(screen,WHITE,(490,247,20,20))
        screen.blit(text_4,(489,226))

        pygame.draw.rect(screen,GRAY,(325,300,150,25))
        if do_kho ==1 :
            screen.blit(text_s3,(380,300))
        else :
            screen.blit(text_s2,(380,300))
        screen.blit(text_s4,(180,300))
        pygame.draw.rect(screen,WHITE,(290,302,20,20))
        screen.blit(text_5,(293,278))
        pygame.draw.rect(screen,WHITE,(490,302,20,20))
        screen.blit(text_4,(489,281))

        pygame.draw.rect(screen,GRAY,(700,500,50,30))
        screen.blit(text_s5,(710,502))
    elif information : # vẽ màn hình infomation
        screen.fill(BLACK)

        pygame.draw.rect(screen,GRAY,(700,500,50,30))
        screen.blit(text_s5,(710,502))
    
    # xử lí sự kiện 
    for event in pygame.event.get() :
        if event.type == pygame.QUIT:
            running =False
        if event.type == pygame.MOUSEBUTTONDOWN : # sự kiện bấm chuột
            if event.button ==1 : # bấm chuột trái
                mouse_x,mouse_y = pygame.mouse.get_pos() # lấy tọa độ chuột
                if menugame :  # giao dien menu game
                    if mouse_x >=325 and mouse_x <=475 and mouse_y >=200 and mouse_y <= 230:  # ấn nút new game 
                        newgame =True
                        setting = False
                        information = False
                        menugame = False
                    elif mouse_x >=325 and mouse_x <=475 and mouse_y >=250 and mouse_y <= 280: # ấn  nút setting
                        newgame = False
                        setting = True
                        information = False
                        menugame = False
                    elif mouse_x >=325 and mouse_x <=475 and mouse_y >=300 and mouse_y <= 330: # ấn nút information
                        newgame =False
                        setting = False
                        information = True
                        menugame = False
                elif setting : # giao dien setting
                    # ấn nút trừ cộng của  tank địch
                    if mouse_x >=290 and mouse_x <=310 and mouse_y >=197 and mouse_y <= 217:
                        if count_e_tank> 1 :
                            count_e_tank -=1
                    elif mouse_x >=490 and mouse_x <=510 and mouse_y >=197 and mouse_y <=217:
                        if count_e_tank<5 :
                            count_e_tank +=1
                    # ấn nút trừ cộng của tank mình
                    elif mouse_x >=290 and mouse_x <=310 and mouse_y >=247 and mouse_y <= 267:
                        if count_tank> 0 :
                            count_tank -=1
                    elif mouse_x >=490 and mouse_x <=510 and mouse_y >=247 and mouse_y <= 267:
                        if count_tank<5 :
                            count_tank +=1
                     #ấn nút trừ cộng của độ khó
                    elif mouse_x >=290 and mouse_x <=310 and mouse_y >=302 and mouse_y <= 322:
                        do_kho = -do_kho
                    elif mouse_x >=490 and mouse_x <=510 and mouse_y >=302 and mouse_y <= 322:
                        do_kho = -do_kho
                    #ấn nút quit
                    elif mouse_x >=700 and mouse_x <=750 and mouse_y >=500 and mouse_y <= 530:
                        newgame =False
                        setting = False
                        information = False
                        menugame = True
                    
                elif information : # giao dien infomation
                    if mouse_x >=700 and mouse_x <=750 and mouse_y >=500 and mouse_y <= 530: # ấn nút Quit
                        newgame =False
                        setting = False
                        information = False
                        menugame = True

    pygame.display.flip()
pygame.quit()