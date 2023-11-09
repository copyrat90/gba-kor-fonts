import os
from bmtext.meta import parse_line_tokens

fnt_path = "fusion_pixel_font/fusion_pixel_font_12.fnt"

fnt_file = open(fnt_path, "r")
txt_file = open(os.path.splitext(fnt_path)[0] + "_width.txt", "w")

line_type = None
while line_type != "chars":
    line_type, items = parse_line_tokens(fnt_file.readline())

chars_count = int(items["count"])

widths = [0] * 65536

max_char_id = 0

for i in range(chars_count):
    char_infos = parse_line_tokens(fnt_file.readline())[1]
    char_id = int(char_infos["id"])
    widths[char_id] = int(char_infos["xadvance"])
    max_char_id = max(max_char_id, char_id)

for i, char_id in enumerate(range(32, max_char_id+1)):
    if i % 16 == 0:
        txt_file.write("\n\t.byte ")
    else:
        txt_file.write(",")
    
    txt_file.write(f'0x{int(widths[char_id]):02x}')


fnt_file.close()
txt_file.close()
