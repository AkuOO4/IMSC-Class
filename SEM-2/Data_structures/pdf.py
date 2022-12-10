from PIL import Image, ImageDraw, ImageFont
import pandas as pd

#import pandas as pd
form_name = pd.read_excel('/1.txt') #import the name file
print("hello")
name_list = form_name['name'].to_list() #convert name column to list


for i in name_list:
    im = Image.open("download.png") #open the certificate file
    d = ImageDraw.Draw(im)
    location = (350, 270) #set location of the text
    text_color = (116, 121, 155) #set text color
    font = ImageFont.truetype("arial.ttf", 25) #set font + size
    d.text(location, i, fill=text_color,font=font) #write text
    im.save("certificate_"+i+".pdf") #save as pdf