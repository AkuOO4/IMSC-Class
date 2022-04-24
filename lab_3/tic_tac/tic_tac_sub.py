import pygame as py
#pygame constants
WIDTH,HEIGHT=753,753  #each indivdual box should be 250x250
BLACK=(0,0,0)
WHITE=(255,255,255)
BLUE=(22,14,99)
RED=(254,39,18)
COLOR1=(150,200,200)

FPS=60
BOX_COLOR1=(0,128,128)
BOX_COLOR2=(0,179,179)

BORDER_THICKNESS=5
border_rect_1=py.Rect(250, 250, 250, 250)
border_rect_2=py.Rect(250, 250, 250, 250)

#circle
RADIUS=50

WIN=py.display.set_mode((WIDTH,HEIGHT))
py.display.set_caption("TIC_TAC_TOE")

#LOGIC CONSTANTS
a1={"STATUS":-1,"x":0,"y":0}
a2={"STATUS":-1,"x":0,"y":250}
a3={"STATUS":-1,"x":0,"y":500}
b1={"STATUS":-1,"x":250,"y":0}
b2={"STATUS":-1,"x":250,"y":250}
b3={"STATUS":-1,"x":250,"y":500}
c1={"STATUS":-1,"x":500,"y":0}
c2={"STATUS":-1,"x":500,"y":250}
c3={"STATUS":-1,"x":500,"y":500}

def mini_box(color,x,y):
    LENGTH=250
    rectangle=py.Rect(x,y,LENGTH,LENGTH)
    py.draw.rect(WIN,color,rectangle)
    

def draw_all_boxes():
    ct1=0

    for x in range (0,750,250):
        
        for y in range(0,750,250):
            
            if ct1%2==0:
                mini_box(BOX_COLOR1,x,y)
                
            else:
                mini_box(BOX_COLOR2,y,x)
            
            ct1+=1
    py.display.update()
            

def moving_rect(keys_pressed):
    #global border_rect
    #mini_box(BOX_COLOR1,border_rect.x,border_rect.y)
    draw_all_boxes()
    print(border_rect_1.x,border_rect_1.y)
    if keys_pressed[py.K_DOWN]:
        
        border_rect_1.y+=250
        
        if border_rect_1.y>750:
            border_rect_1.y=0
        #border_rect.move(0,250)
        #py.draw.rect(WIN,BLUE ,border_rect,BORDER_THICKNESS )#((rgb),[cordinates],katti)
        
    if keys_pressed[py.K_UP]:
        border_rect_1.y-=250
        if border_rect_1.y<0:
            border_rect_1.y=500
        #py.draw.rect(WIN,BLUE,border_rect,BORDER_THICKNESS )#((rgb),[cordinates],katti)
        
    if keys_pressed[py.K_RIGHT]:
        border_rect_1.x+=250
        if border_rect_1.x>750:
            border_rect_1.x=0
            
        #py.draw.rect(WIN,BLUE,border_rect,BORDER_THICKNESS )#((rgb),[cordinates],katti)
        
    if keys_pressed[py.K_LEFT]:
        border_rect_1.x-=250
        if border_rect_1.x<0:
            border_rect_1.x=500
        #py.draw.rect(WIN,BLUE,border_rect,BORDER_THICKNESS )#((rgb),[cordinates],katti)
    
    py.draw.rect(WIN,BLUE ,border_rect_1,BORDER_THICKNESS )
    py.display.update()
'''
def player2_moves(keys_pressed):
    #global border_rect
    #mini_box(BOX_COLOR1,border_rect.x,border_rect.y)
    draw_all_boxes()
    print(border_rect_2.x,border_rect_2.y)
    if keys_pressed[py.K_s]:
        
        border_rect_2.y+=250
        
        if border_rect_2.y>750:
            border_rect_2.y=0
        #border_rect.move(0,250)
        #py.draw.rect(WIN,BLUE ,border_rect,BORDER_THICKNESS )#((rgb),[cordinates],katti)
        
    if keys_pressed[py.K_w]:
        border_rect_2.y-=250
        if border_rect_2.y<0:
            border_rect_2.y=500
        #py.draw.rect(WIN,BLUE,border_rect,BORDER_THICKNESS )#((rgb),[cordinates],katti)
        
    if keys_pressed[py.K_d]:
        border_rect_2.x+=250
        if border_rect_2.x>750:
            border_rect_2.x=0
            
        #py.draw.rect(WIN,BLUE,border_rect,BORDER_THICKNESS )#((rgb),[cordinates],katti)
        
    if keys_pressed[py.K_a]:
        border_rect_2.x-=250
        if border_rect_2.x<0:
            border_rect_2.x=500
        #py.draw.rect(WIN,BLUE,border_rect,BORDER_THICKNESS )#((rgb),[cordinates],katti)
    
    py.draw.rect(WIN,RED ,border_rect_2,BORDER_THICKNESS )
    py.display.update()
'''
def player_1_moves(x,y):


   global a1,a2,a3,b1,b2,b3,c1,c2,c3
   if ((x==0) and (y==0)) or (a1["STATUS"]==1):
       py.draw.line(WIN,BLACK,[a1["x"]+50,a1["y"]+50],[a1["x"]+50,a1["y"]+100],BORDER_THICKNESS)
       py.draw.line(WIN,BLACK,[a1["x"]+100,a1["y"]+100],[a1["x"],a1["y"]+200],BORDER_THICKNESS)
       a1["status"]=1
   if ((x==0) and (y==250)) or (a2["STATUS"]==1):       
        a2["status"]=1
        py.draw.line(WIN,BLACK,[a2["x"],a2["y"]],[a2["x"]+100,a2["y"]+100],BORDER_THICKNESS)
        py.draw.line(WIN,BLACK,[a2["x"]+100,a2["y"]+100],[a2["x"]+100,a2["y"]+100],BORDER_THICKNESS)
   if ((x==0) and (y ==500)) or (a3["STATUS"]==1):
        a3["status"]=1
        py.draw.line(WIN,BLACK,[a3["x"],a3["y"]],[a3["x"]+50,a3["y"]+50],BORDER_THICKNESS)
        py.draw.line(WIN,BLACK,[a3["x"]+50,a3["y"]+50],[a3["x"],a3["y"]+50],BORDER_THICKNESS)
   if ((x==250) and (y==0)) or (b1["STATUS"]==1):
        b1["status"]=1
        py.draw.line(WIN,BLACK,[b1["x"],b1["y"]],[b1["x"]+100,b1["y"]+100],BORDER_THICKNESS)
        py.draw.line(WIN,BLACK,[b1["x"]+100,b2["y"]+100],[b1["x"],b1["y"]+100],BORDER_THICKNESS)
   if ((x ==250) and (y ==250)) or (b2["STATUS"]==1):
        b2["status"]=1
        py.draw.line(WIN,BLACK,[b2["x"],b2["y"]],[b2["x"]+100,b2["y"]+100],BORDER_THICKNESS)
        py.draw.line(WIN,BLACK,[b2["x"]+100,b2["y"]+100],[b2["x"],b2["y"]+100],BORDER_THICKNESS)
   if ((x ==250) and (y==500)) or (b3["STATUS"]==1):
        b3["status"]=1
        py.draw.line(WIN,BLACK,[b3["x"],b3["y"]],[b3["x"]+100,b3["y"]+100],BORDER_THICKNESS)
        py.draw.line(WIN,BLACK,[b3["x"]+100,b3["y"]+100],[b3["x"],b3["y"]+100],BORDER_THICKNESS)
   if ((x==500) and (y ==0)) or (c1["STATUS"]==1):
        c1["status"]=1
        py.draw.line(WIN,BLACK,[c1["x"],c1["y"]],[c1["x"]+100,c1["y"]+100],BORDER_THICKNESS)
        py.draw.line(WIN,BLACK,[c1["x"]+100,c1["y"]+100],[c1["x"],c1["y"]+100],BORDER_THICKNESS)
   if ((x==500) and (y==250)) or (c2["STATUS"]==1):
        c2["status"]=1
        py.draw.line(WIN,BLACK,[c2["x"],c2["y"]],[c2["x"]+100,c2["y"]+100],BORDER_THICKNESS)
        py.draw.line(WIN,BLACK,[c2["x"]+100,c2["y"]+100],[c2["x"],c2["y"]+100],BORDER_THICKNESS)
   if ((x==500) and (y==500)) or (c3["STATUS"]==1):
        c3["status"]=1
        py.draw.line(WIN,BLACK,[a2["x"],a2["y"]],[a2["x"]+50,a2["y"]+50],BORDER_THICKNESS)
        py.draw.line(WIN,BLACK,[a2["x"]+50,a2["y"]+50],[a2["x"],a2["y"]+50],BORDER_THICKNESS)
#    py.draw.line(WIN,BLACK,[x,y],[x+45,y+50],BORDER_THICKNESS)
#    py.draw.line(WIN,BLACK,[x+50,y],[x,y+50],BORDER_THICKNESS)
   py.display.update()
   
    


def player_2_moves(x,y):
   global a1,a2,a3,b1,b2,b3,c1,c2,c3
   if ((x==0) and (y==0)) or (a1["STATUS"]==0):
       py.draw.circle(WIN,BLACK,[a1["x"]+75,a1["y"]+75],RADIUS,BORDER_THICKNESS)
       a1["status"]=0
   if ((x==0) and (y==250)) or (a2["STATUS"]==0):       
        a2["status"]=0
        py.draw.circle(WIN,BLACK,[a2["x"]+75,a2["y"]+75],RADIUS,BORDER_THICKNESS)
   if ((x==0) and (y ==500)) or (a3["STATUS"]==0):
        a3["status"]=0
        py.draw.circle(WIN,BLACK,[a3["x"]+75,a3["y"]+75],RADIUS,BORDER_THICKNESS)
   if ((x==250) and (y==0)) or (b1["STATUS"]==0):
        b1["status"]=0
        py.draw.circle(WIN,BLACK,[b1["x"]+75,b1["y"]+75],RADIUS,BORDER_THICKNESS)
   if ((x ==250) and (y ==250)) or (b2["STATUS"]==0):
        b2["status"]=0
        py.draw.circle(WIN,BLACK,[b2["x"]+75,b2["y"]+75],RADIUS,BORDER_THICKNESS)
   if ((x ==250) and (y==500)) or (b3["STATUS"]==0):
        b3["status"]=0
        py.draw.circle(WIN,BLACK,[b3["x"]+75,b3["y"]+75],RADIUS,BORDER_THICKNESS)
   if ((x==500) and (y ==0)) or (c1["STATUS"]==0):
        c1["status"]=0
        py.draw.circle(WIN,BLACK,[c1["x"]+75,c1["y"]+75],RADIUS,BORDER_THICKNESS)
   if ((x==500) and (y==250)) or (c2["STATUS"]==0):
        c2["status"]=0
        py.draw.circle(WIN,BLACK,[c2["x"]+75,c2["y"]+75],RADIUS,BORDER_THICKNESS)
   if ((x==500) and (y==500)) or (c3["STATUS"]==0):
        c3["status"]=0
        py.draw.circle(WIN,BLACK,[c3["x"]+75,c3["y"]+75],RADIUS,BORDER_THICKNESS)
   py.display.update()

    

def draw_window():
    WIN.fill(WHITE)       
    draw_all_boxes()
    py.draw.rect(WIN,BLUE ,border_rect_1,BORDER_THICKNESS )#((rgb),[cordinates],katti)
    
    py.display.update()

def main():
    turn=1
    clock = py.time.Clock()
    clock.tick(FPS)
    run=True
    draw_window()
    while run:
        
        for event in py.event.get():
            if event.type==py.QUIT:
                run = False 
             
            if event.type==py.KEYDOWN:
                if event.key==py.K_TAB:
                    print("enter")
                    if turn:
                        print("0")
                        player_1_moves(border_rect_1.x,border_rect_1.y)
                        turn=0
                    else:
                        player_2_moves(border_rect_1.x,border_rect_1.y) 
                        turn=1
            keys_pressed=py.key.get_pressed()
            moving_rect(keys_pressed)
            player_1_moves(-1,-1)
            player_2_moves(-1,-1)
    py.quit()

if __name__=="__main__":
    main()