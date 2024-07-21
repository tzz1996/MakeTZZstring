import os

#
# 创建字母或数字或字符
#
def make_letter(choose_letter): 
    letter_A = """
   @  
  @ @ 
 @@@@@
 @   @
 @   @
"""

    letter_B = """
 @@@  
 @  @ 
 @@@@ 
 @   @
 @@@@@
"""

    letter_C = """
  @@@@
 @    
 @    
 @    
  @@@@
"""

    letter_D = """
 @@@@  
 @   @ 
 @    @
 @   @ 
 @@@@  
"""
    
    letter_E = """
 @@@@@
 @    
 @@@@ 
 @    
 @@@@@
"""

    letter_F = """
 @@@@@
 @    
 @@@@ 
 @    
 @    
"""

    letter_G = """
  @@@@@ 
 @      
 @ @@@@@
 @  @ @ 
  @@  @ 
"""

    letter_H = """
 @   @
 @   @
 @@@@@
 @   @
 @   @
"""

    letter_I = """
 @@@
  @ 
  @ 
  @ 
 @@@
"""

    letter_J = """
 @@@@@
   @  
   @  
   @  
 @@@  
"""

    letter_K = """
 @  @ 
 @ @  
 @@@  
 @  @ 
 @   @
"""

    letter_L = """
 @   
 @   
 @   
 @   
 @@@@
"""

    letter_M = """
 @@   @@
 @ @ @ @
 @  @  @
 @  @  @
 @  @  @
"""

    letter_N = """
 @   @
 @@  @
 @ @ @
 @  @@
 @   @
"""

    letter_O = """
  @@@@ 
 @    @
 @    @
 @    @
  @@@@ 
"""

    letter_P = """
 @@@@ 
 @   @
 @@@@ 
 @    
 @    
"""

    letter_Q = """
  @@@@ 
 @    @
 @  @ @
  @@@@ 
     @@
"""

    letter_R = """
 @@@@ 
 @   @
 @@@@ 
 @ @  
 @  @@
"""

    letter_S = """
  @@@ 
 @    
  @@@ 
     @
 @@@@ 
"""

    letter_T = """
 @@@@@
   @  
   @  
   @  
   @  
"""

    letter_U = """
 @   @
 @   @
 @   @
 @   @
  @@@ 
"""

    letter_V = """
 @   @
 @   @
 @   @
  @ @ 
   @  
"""

    letter_W = """
 @     @
 @  @  @
 @  @  @
 @  @  @
  @@ @@ 
"""

    letter_X = """
 @   @
  @ @ 
   @  
  @ @ 
 @   @
"""

    letter_Y = """
 @   @
  @ @ 
   @  
   @  
   @  
"""

    letter_Z = """
 @@@@@
    @ 
   @  
  @   
 @@@@@
"""

    letter_0 = """
 @@@@
 @  @
 @  @
 @  @
 @@@@
"""

    letter_1 = """
 @@ 
  @ 
  @ 
  @ 
 @@@
"""

    letter_2 = """
 @@@@
    @
 @@@@
 @   
 @@@@
"""

    letter_3 = """
 @@@@
    @
 @@@@
    @
 @@@@
"""

    letter_4 = """
 @  @  
 @  @  
 @@@@@@
    @  
    @  
"""

    letter_5 = """
 @@@@
 @   
 @@@@
    @
 @@@@
"""

    letter_6 = """
 @@@@
 @   
 @@@@
 @  @
 @@@@
"""

    letter_7 = """
 @@@@
    @
    @
    @
    @
"""

    letter_8 = """
 @@@@
 @  @
 @@@@
 @  @
 @@@@
"""

    letter_9 = """
 @@@@
 @  @
 @@@@
    @
 @@@@
"""

    letter_SPACE = """
     
     
     
     
     
"""

    letter_POINT = """
   
   
   
   
 @@
"""

    letter_SIGN = """
  @  @ 
 @@@@@@
  @  @ 
 @@@@@@
  @  @ 
"""

    if choose_letter == "A" or choose_letter == "a":
        return letter_A
    elif choose_letter == "B" or choose_letter == "b":
        return letter_B
    elif choose_letter == "C" or choose_letter == "c":
        return letter_C
    elif choose_letter == "D" or choose_letter == "d":
        return letter_D
    elif choose_letter == "E" or choose_letter == "e":
        return letter_E
    elif choose_letter == "F" or choose_letter == "f":
        return letter_F
    elif choose_letter == "G" or choose_letter == "g":
        return letter_G
    elif choose_letter == "H" or choose_letter == "h":
        return letter_H
    elif choose_letter == "I" or choose_letter == "i":
        return letter_I
    elif choose_letter == "J" or choose_letter == "j":
        return letter_J
    elif choose_letter == "K" or choose_letter == "k":
        return letter_K
    elif choose_letter == "L" or choose_letter == "l":
        return letter_L
    elif choose_letter == "M" or choose_letter == "m":
        return letter_M
    elif choose_letter == "N" or choose_letter == "n":
        return letter_N
    elif choose_letter == "O" or choose_letter == "o":
        return letter_O
    elif choose_letter == "P" or choose_letter == "p":
        return letter_P
    elif choose_letter == "Q" or choose_letter == "q":
        return letter_Q
    elif choose_letter == "R" or choose_letter == "r":
        return letter_R
    elif choose_letter == "S" or choose_letter == "s":
        return letter_S
    elif choose_letter == "T" or choose_letter == "t":
        return letter_T
    elif choose_letter == "U" or choose_letter == "u":
        return letter_U
    elif choose_letter == "V" or choose_letter == "v":
        return letter_V
    elif choose_letter == "W" or choose_letter == "w":
        return letter_W
    elif choose_letter == "X" or choose_letter == "x":
        return letter_X
    elif choose_letter == "Y" or choose_letter == "y":
        return letter_Y
    elif choose_letter == "Z" or choose_letter == "z":
        return letter_Z
    elif choose_letter == "B" or choose_letter == "0":
        return letter_0
    elif choose_letter == "1":
        return letter_1
    elif choose_letter == "2":
        return letter_2
    elif choose_letter == "3":
        return letter_3
    elif choose_letter == "4":
        return letter_4
    elif choose_letter == "5":
        return letter_5
    elif choose_letter == "6":
        return letter_6
    elif choose_letter == "7":
        return letter_7
    elif choose_letter == "8":
        return letter_8
    elif choose_letter == "9":
        return letter_9
    elif choose_letter == " ":
        return letter_SPACE
    elif choose_letter == ".":
        return letter_POINT
    elif choose_letter == "#":
        return letter_SIGN
#
# 获取输入字符串
#
def get_input_str():
    user_input = input("please input your string: ")

    return user_input
#
# 生成大字母字符串
#
def make_tzz_str():
    user_input = get_input_str()
    # print(user_input)

    # 初始化空list
    combined_lines = []
    for _ in range(7):
        combined_lines.append("")

    for char in user_input:
        lines_cur = make_letter(char).splitlines()
        lines_tmp = combined_lines
        max_lines = max(len(lines_cur), len(lines_tmp))

        combined_lines = []
        for i in range(max_lines):
            # line_cur = lines_cur[i] if i < len(lines_cur) else ""
            # line_tmp = lines_tmp[i] if i < len(lines_tmp) else ""
            if i < len(lines_cur):
                line_cur = lines_cur[i]
            else:
                line_cur = ""
                
            if i < len(lines_tmp):
                line_tmp = lines_tmp[i]
            else:
                line_tmp = ""

            combined_line = f"{line_tmp}{line_cur}"
            combined_lines.append(combined_line)

    for line in combined_lines:
        print(line)
        
    with open('./output.txt', 'w', encoding='utf-8') as file:
        # for line in combined_lines:
            # file.write(line + "\n")
            
        # 一次性写入所有行，提升效率
        file.writelines(line + "\n" for line in combined_lines)
    
    print("output is at: " + os.path.dirname(__file__) + "\\output.txt")

#
# test
#
def test2():
    var1 = """
123
456
789
"""
    var2 = """
qwer
asdf
zxcv
"""
    var3 = """
yuio
jhkl
bnm
"""
    res_list = []
    for line1, line2, line3 in zip(var1.splitlines(), var2.splitlines(), var3.splitlines()):
        res_list.append(line1 + line2 + line3)

    for line in res_list:
        print(line)

#
# main
#
def main():
    make_tzz_str()


main()