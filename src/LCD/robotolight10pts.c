// 
//  Font data for Roboto Light 10pt
// 
#include "nrf_font.h"
// Character bitmaps for Roboto Light 10pt
const uint8_t robotoLight_10ptBitmaps[] = 
{
	// @0 '!' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @14 '"' (2 pixels wide)
	0x00, //   
	0xC0, // ##
	0xC0, // ##
	0xC0, // ##
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @28 '#' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x24, //   #  # 
	0x28, //   # #  
	0xFE, // #######
	0x48, //  #  #  
	0x48, //  #  #  
	0xFC, // ###### 
	0x50, //  # #   
	0x50, //  # #   
	0x90, // #  #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @42 '$' (5 pixels wide)
	0x20, //   #  
	0x20, //   #  
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0xC0, // ##   
	0x30, //   ## 
	0x08, //     #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x20, //   #  
	0x00, //      
	0x00, //      

	// @56 '%' (8 pixels wide)
	0x00, //         
	0x00, //         
	0xE0, // ###     
	0xA4, // # #  #  
	0xA8, // # # #   
	0xE8, // ### #   
	0x10, //    #    
	0x26, //   #  ## 
	0x29, //   # #  #
	0x49, //  #  #  #
	0x06, //      ## 
	0x00, //         
	0x00, //         
	0x00, //         

	// @70 '&' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x70, //  ###   
	0x88, // #   #  
	0x90, // #  #   
	0x50, //  # #   
	0x60, //  ##    
	0x94, // #  # # 
	0x8C, // #   ## 
	0x8C, // #   ## 
	0x7E, //  ######
	0x00, //        
	0x00, //        
	0x00, //        

	// @84 ''' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  

	// @98 '(' (3 pixels wide)
	0x00, //    
	0x20, //   #
	0x40, //  # 
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x40, //  # 
	0x20, //   #

	// @112 ')' (3 pixels wide)
	0x00, //    
	0x80, // #  
	0x40, //  # 
	0x40, //  # 
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x40, //  # 
	0x40, //  # 
	0x80, // #  

	// @126 '*' (5 pixels wide)
	 0x00, //      
	 0x00, //       
	 0x20, //   #  
	 0xA8, // # # #
	 0x70, //  ### 
	 0x70, //  ### 
	 0xA8, // # # #
	 0x20, //   #  
	 0x00, //      
	 0x00, //      
	 0x00, //      
	 0x00, //      
	 0x00, //      
	 0x00, //    

	// @140 '+' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0xFE, // #######
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        

	// @154 ',' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x00, //   

	// @168 '-' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0xE0, // ###
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    

	// @182 '.' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @196 '/' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x08, //     #
	0x10, //    # 
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x40, //  #   
	0x80, // #    
	0x80, // #    
	0x00, //      
	0x00, //      

	// @210 '0' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @224 '1' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x20, //   #
	0x60, //  ##
	0xA0, // # #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x00, //    
	0x00, //    
	0x00, //    

	// @238 '2' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x70, //  ###  
	0x88, // #   # 
	0x08, //     # 
	0x08, //     # 
	0x10, //    #  
	0x20, //   #   
	0x40, //  #    
	0x80, // #     
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @252 '3' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x08, //     #
	0x08, //     #
	0x70, //  ### 
	0x08, //     #
	0x08, //     #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @266 '4' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x04, //      # 
	0x0C, //     ## 
	0x14, //    # # 
	0x24, //   #  # 
	0x44, //  #   # 
	0x84, // #    # 
	0xFE, // #######
	0x04, //      # 
	0x04, //      # 
	0x00, //        
	0x00, //        
	0x00, //        

	// @280 '5' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xF8, // ##### 
	0x80, // #     
	0x80, // #     
	0xB0, // # ##  
	0xC8, // ##  # 
	0x04, //      #
	0x04, //      #
	0x88, // #   # 
	0x70, //  ###  
	0x00, //       
	0x00, //       
	0x00, //       

	// @294 '6' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x30, //   ## 
	0x40, //  #   
	0x80, // #    
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @308 '7' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFE, // #######
	0x04, //      # 
	0x04, //      # 
	0x08, //     #  
	0x08, //     #  
	0x10, //    #   
	0x10, //    #   
	0x20, //   #    
	0x20, //   #    
	0x00, //        
	0x00, //        
	0x00, //        

	// @322 '8' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @336 '9' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x10, //    # 
	0x60, //  ##  
	0x00, //      
	0x00, //      
	0x00, //      

	// @350 ':' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @364 ';' (2 pixels wide)
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x40, //  #
	0x40, //  #
	0x80, // # 
	0x00, //   

	// @378 '<' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x08, //     #
	0x30, //   ## 
	0xC0, // ##   
	0x80, // #    
	0x70, //  ### 
	0x08, //     #
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @392 '=' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0x00, //      
	0x00, //      
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @406 '>' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x80, // #    
	0x60, //  ##  
	0x18, //    ##
	0x18, //    ##
	0x60, //  ##  
	0x80, // #    
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @420 '?' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x70, //  ###
	0x90, // #  #
	0x90, // #  #
	0x10, //    #
	0x20, //   # 
	0x40, //  #  
	0x00, //     
	0x00, //     
	0x40, //  #  
	0x00, //     
	0x00, //     
	0x00, //     

	// @434 '@' (10 pixels wide)
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x1F, 0x00, //    #####  
	0x20, 0x80, //   #     # 
	0x40, 0x40, //  #       #
	0x8E, 0x40, // #   ###  #
	0x92, 0x40, // #  #  #  #
	0x92, 0x40, // #  #  #  #
	0xA2, 0x40, // # #   #  #
	0x92, 0x40, // #  #  #  #
	0x9D, 0x80, // #  ### ## 
	0x80, 0x00, // #         
	0x62, 0x00, //  ##   #   
	0x3E, 0x00, //   #####   

	// @462 'A' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x18, //    ##   
	0x18, //    ##   
	0x28, //   # #   
	0x24, //   #  #  
	0x24, //   #  #  
	0x42, //  #    # 
	0x7E, //  ###### 
	0x42, //  #    # 
	0x81, // #      #
	0x00, //         
	0x00, //         
	0x00, //         

	// @476 'B' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xF8, // ##### 
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0xF8, // ##### 
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0xF8, // ##### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @490 'C' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x78, //  #### 
	0x84, // #    #
	0x84, // #    #
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x84, // #    #
	0x84, // #    #
	0x78, //  #### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @504 'D' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xF8, // #####  
	0x84, // #    # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x84, // #    # 
	0xF8, // #####  
	0x00, //        
	0x00, //        
	0x00, //        

	// @518 'E' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0xF8, // ##### 
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @532 'F' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0xF8, // ##### 
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x00, //       
	0x00, //       
	0x00, //       

	// @546 'G' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x3C, //   #### 
	0x46, //  #   ##
	0x82, // #     #
	0x80, // #      
	0x80, // #      
	0x8E, // #   ###
	0x82, // #     #
	0x42, //  #    #
	0x3C, //   #### 
	0x00, //        
	0x00, //        
	0x00, //        

	// @560 'H' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0xFE, // #######
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x00, //        
	0x00, //        
	0x00, //        

	// @574 'I' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @588 'J' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x04, //      #
	0x84, // #    #
	0x84, // #    #
	0x78, //  #### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @602 'K' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x84, // #    # 
	0x88, // #   #  
	0x90, // #  #   
	0xA0, // # #    
	0xE0, // ###    
	0x90, // #  #   
	0x88, // #   #  
	0x84, // #    # 
	0x82, // #     #
	0x00, //        
	0x00, //        
	0x00, //        

	// @616 'L' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @630 'M' (9 pixels wide)
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x80, 0x80, // #       #
	0xC1, 0x80, // ##     ##
	0xC1, 0x80, // ##     ##
	0xA2, 0x80, // # #   # #
	0xA2, 0x80, // # #   # #
	0x94, 0x80, // #  # #  #
	0x94, 0x80, // #  # #  #
	0x94, 0x80, // #  # #  #
	0x88, 0x80, // #   #   #
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @658 'N' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x82, // #     #
	0xC2, // ##    #
	0xA2, // # #   #
	0xA2, // # #   #
	0x92, // #  #  #
	0x8A, // #   # #
	0x8A, // #   # #
	0x86, // #    ##
	0x82, // #     #
	0x00, //        
	0x00, //        
	0x00, //        

	// @672 'O' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x38, //   ###  
	0x44, //  #   # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x44, //  #   # 
	0x38, //   ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @686 'P' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xF8, // ##### 
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0x84, // #    #
	0xF8, // ##### 
	0x80, // #     
	0x80, // #     
	0x80, // #     
	0x00, //       
	0x00, //       
	0x00, //       

	// @700 'Q' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x38, //   ###  
	0x44, //  #   # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x44, //  #   # 
	0x38, //   ###  
	0x06, //      ##
	0x00, //        
	0x00, //        

	// @714 'R' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xF8, // #####  
	0x84, // #    # 
	0x84, // #    # 
	0x84, // #    # 
	0x84, // #    # 
	0xF8, // #####  
	0x88, // #   #  
	0x84, // #    # 
	0x82, // #     # 
	0x00, //        
	0x00, //        
	0x00, //        

	// @728 'S' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x78, //  #### 
	0x84, // #    #
	0x80, // #     
	0xC0, // ##    
	0x38, //   ### 
	0x04, //      #
	0x04, //      #
	0x84, // #    #
	0x78, //  #### 
	0x00, //       
	0x00, //       
	0x00, //       

	// @742 'T' (7 pixels wide)
	0x00, //        
	0x00, //        
	0xFE, // #######
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x10, //    #   
	0x00, //        
	0x00, //        
	0x00, //        

	// @756 'U' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x44, //  #   # 
	0x38, //   ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @770 'V' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x81, // #      #
	0x42, //  #    # 
	0x42, //  #    # 
	0x42, //  #    # 
	0x24, //   #  #  
	0x24, //   #  #  
	0x24, //   #  #  
	0x18, //    ##   
	0x18, //    ##   
	0x00, //         
	0x00, //         
	0x00, //         

	// @784 'W' (11 pixels wide)
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x84, 0x20, // #    #    #
	0x46, 0x20, //  #   ##   #
	0x4A, 0x20, //  #  # #   #
	0x4A, 0x40, //  #  # #  # 
	0x49, 0x40, //  #  #  # # 
	0x29, 0x40, //   # #  # # 
	0x31, 0x40, //   ##   # # 
	0x31, 0x80, //   ##   ##  
	0x10, 0x80, //    #    #  
	0x00, 0x00, //            
	0x00, 0x00, //            
	0x00, 0x00, //            

	// @812 'X' (8 pixels wide)
	0x00, //         
	0x00, //         
	0x81, // #      #
	0x42, //  #    # 
	0x24, //   #  #  
	0x18, //    ##   
	0x18, //    ##   
	0x18, //    ##   
	0x24, //   #  #  
	0x42, //  #    # 
	0x81, // #      #
	0x00, //         
	0x00, //         
	0x00, //         

	// @826 'Y' (7 pixels wide)
	0x00, //         
	0x00, //         
	0x82, // #     # 
	0x44, //  #   #  
	0x28, //   # #   
	0x28, //   # #   
	0x10, //    #    
	0x10, //    #    
	0x10, //    #    
	0x10, //    #    
	0x10, //    #    
	0x00, //         
	0x00, //         
	0x00, //         

	// @840 'Z' (6 pixels wide)
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x04, //      #
	0x08, //     # 
	0x10, //    #  
	0x20, //   #   
	0x40, //  #    
	0x40, //  #    
	0x80, // #     
	0xFC, // ######
	0x00, //       
	0x00, //       
	0x00, //       

	// @854 '[' (2 pixels wide)
	0xC0, // ##
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0x80, // # 
	0xC0, // ##
	0x00, //   

	// @868 '\' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x80, // #    
	0x40, //  #   
	0x40, //  #   
	0x40, //  #   
	0x20, //   #  
	0x20, //   #  
	0x10, //    # 
	0x10, //    # 
	0x10, //    # 
	0x08, //     #
	0x00, //      
	0x00, //      

	// @882 ']' (2 pixels wide)
	0xC0, // ##
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0x40, //  #
	0xC0, // ##
	0x00, //   

	// @896 '^' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x20, //   #  
	0x60, //  ##  
	0x50, //  # # 
	0x98, // #  ##
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      

	// @910 '_' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0xFC, // ######
	0x00, //       
	0x00, //       

	// @924 '`' (2 pixels wide)
	0x00, //   
	0x80, // # 
	0x40, //  #
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   
	0x00, //   

	// @938 'a' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x08, //     #
	0x78, //  ####
	0x88, // #   #
	0x88, // #   #
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      

	// @952 'b' (5 pixels wide)
	0x00, //      
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xF0, // #### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @966 'c' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @980 'd' (5 pixels wide)
	0x00, //      
	0x08, //     #
	0x08, //     #
	0x08, //     #
	0x78, //  ####
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x00, //      
	0x00, //      
	0x00, //      

	// @994 'e' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x88, // #   #
	0xF8, // #####
	0x80, // #    
	0x88, // #   #
	0x78, //  ####
	0x00, //      
	0x00, //      
	0x00, //      

	// @1008 'f' (4 pixels wide)
	0x00, //     
	0x30, //   ##
	0x40, //  #  
	0x40, //  #  
	0xF0, // ####
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x00, //     
	0x00, //     
	0x00, //     

	// @1022 'g' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x78, //  ####
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x88, // #   #
	0x70, //  ### 

	// @1036 'h' (5 pixels wide)
	0x00, //      
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0xB0, // # ## 
	0xC8, // ##  #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      

	// @1050 'i' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x80, // #
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @1064 'j' (3 pixels wide)
	0x00, //    
	0x00, //    
	0x20, //   #
	0x00, //    
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0x20, //   #
	0xC0, // ## 

	// @1078 'k' (5 pixels wide)
	0x00, //      
	0x80, // #    
	0x80, // #    
	0x80, // #    
	0x88, // #   #
	0x90, // #  # 
	0xA0, // # #  
	0xE0, // ###  
	0xA0, // # #  
	0x90, // #  # 
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      

	// @1092 'l' (1 pixels wide)
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  
	0x00, //  
	0x00, //  

	// @1106 'm' (10 pixels wide)
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           
	0xBB, 0x80, // # ### ### 
	0xCC, 0x40, // ##  ##   #
	0x88, 0x40, // #   #    #
	0x88, 0x40, // #   #    #
	0x88, 0x40, // #   #    #
	0x88, 0x40, // #   #    #
	0x88, 0x40, // #   #    #
	0x00, 0x00, //           
	0x00, 0x00, //           
	0x00, 0x00, //           

	// @1134 'n' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0xB0, // # ## 
	0xC8, // ##  #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x00, //      
	0x00, //      
	0x00, //      

	// @1148 'o' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x38, //   ###  
	0x44, //  #   # 
	0x82, // #     #
	0x82, // #     #
	0x82, // #     #
	0x44, //  #   # 
	0x38, //   ###  
	0x00, //        
	0x00, //        
	0x00, //        

	// @1162 'p' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0xF0, // #### 
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0xF0, // #### 
	0x80, // #    
	0x80, // #    
	0x80, // #    

	// @1176 'q' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x78, //  ####
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x78, //  ####
	0x08, //     #
	0x08, //     #
	0x08, //     #

	// @1190 'r' (4 pixels wide)
	0x00, //    
	0x00, //    
	0x00, //    
	0x00, //    
	0xB0, // # ##
	0xC0, // ## 
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x80, // #  
	0x00, //    
	0x00, //    
	0x00, //    

	// @1204 's' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x70, //  ### 
	0x88, // #   #
	0x80, // #    
	0x70, //  ### 
	0x08, //     #
	0x88, // #   #
	0x70, //  ### 
	0x00, //      
	0x00, //      
	0x00, //      

	// @1218 't' (4 pixels wide)
	0x00, //     
	0x00, //     
	0x40, //  #  
	0x40, //  #  
	0xF0, // ####
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x30, //   ##
	0x00, //     
	0x00, //     
	0x00, //     

	// @1232 'u' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x88, // #   #
	0x98, // #  ##
	0x68, //  ## #
	0x00, //      
	0x00, //      
	0x00, //      

	// @1246 'v' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x84, // #    #
	0x84, // #    #
	0x48, //  #  # 
	0x48, //  #  # 
	0x48, //  #  # 
	0x30, //   ##  
	0x30, //   ##  
	0x00, //       
	0x00, //       
	0x00, //       

	// @1260 'w' (9 pixels wide)
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x88, 0x80, // #   #   #
	0x4C, 0x80, //  #  ##  #
	0x54, 0x80, //  # # #  #
	0x55, 0x00, //  # # # # 
	0x53, 0x00, //  # #  ## 
	0x33, 0x00, //   ##  ## 
	0x22, 0x00, //   #   #  
	0x00, 0x00, //          
	0x00, 0x00, //          
	0x00, 0x00, //          

	// @1288 'x' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x84, // #    #
	0x48, //  #  # 
	0x30, //   ##  
	0x30, //   ##  
	0x30, //   ##  
	0x48, //  #  # 
	0x84, // #    #
	0x00, //       
	0x00, //       
	0x00, //       

	// @1302 'y' (6 pixels wide)
	0x00, //       
	0x00, //       
	0x00, //       
	0x00, //       
	0x84, // #    #
	0x84, // #    #
	0x48, //  #  # 
	0x48, //  #  # 
	0x30, //   ##  
	0x30, //   ##  
	0x10, //    #  
	0x20, //   #   
	0x20, //   #   
	0xC0, // ##    

	// @1316 'z' (5 pixels wide)
	0x00, //      
	0x00, //      
	0x00, //      
	0x00, //      
	0xF8, // #####
	0x10, //    # 
	0x20, //   #  
	0x20, //   #  
	0x40, //  #   
	0x80, // #    
	0xF8, // #####
	0x00, //      
	0x00, //      
	0x00, //      

	// @1330 '{' (4 pixels wide)
	0x00, //     
	0x10, //    #
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x40, //  #  
	0x80, // #   
	0x40, //  #  
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x20, //   # 
	0x10, //    #

	// @1344 '|' (1 pixels wide)
	0x00, //  
	0x00, //  
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x80, // #
	0x00, //  

	// @1358 '}' (4 pixels wide)
	0x00, //     
	0x80, // #   
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x20, //   # 
	0x10, //    #
	0x20, //   # 
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x40, //  #  
	0x80, // #   

	// @1372 '~' (7 pixels wide)
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x62, //  ##   #
	0x92, // #  #  #
	0x8C, // #   ## 
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
	0x00, //        
};

// Character descriptors for Roboto Light 10pt
// { [Char width in bits], [Offset into robotoLight_10ptCharBitmaps in bytes] }
const FONT_CHAR_INFO robotoLight_10ptDescriptors[] = 
{
	{1, 0}, 		// ! 
	{2, 14}, 		// " 
	{7, 28}, 		// # 
	{5, 42}, 		// $ 
	{8, 56}, 		// % 
	{7, 70}, 		// & 
	{1, 84}, 		// ' 
	{3, 98}, 		// ( 
	{3, 112}, 		// ) 
	{5, 126}, 		// * 
	{7, 140}, 		// + 
	{2, 154}, 		// , 
	{3, 168}, 		// - 
	{1, 182}, 		// . 
	{5, 196}, 		// / 
	{5, 210}, 		// 0 
	{3, 224}, 		// 1 
	{6, 238}, 		// 2 
	{5, 252}, 		// 3 
	{7, 266}, 		// 4 
	{6, 280}, 		// 5 
	{5, 294}, 		// 6 
	{7, 308}, 		// 7 
	{5, 322}, 		// 8 
	{5, 336}, 		// 9 
	{1, 350}, 		// : 
	{2, 364}, 		// ; 
	{5, 378}, 		// < 
	{5, 392}, 		// = 
	{5, 406}, 		// > 
	{4, 420}, 		// ? 
	{10, 434}, 		// @ 
	{8, 462}, 		// A 
	{6, 476}, 		// B 
	{6, 490}, 		// C 
	{7, 504}, 		// D 
	{6, 518}, 		// E 
	{6, 532}, 		// F 
	{7, 546}, 		// G 
	{7, 560}, 		// H 
	{1, 574}, 		// I 
	{6, 588}, 		// J 
	{7, 602}, 		// K 
	{6, 616}, 		// L 
	{9, 630}, 		// M 
	{7, 658}, 		// N 
	{7, 672}, 		// O 
	{6, 686}, 		// P 
	{7, 700}, 		// Q 
	{7, 714}, 		// R 
	{6, 728}, 		// S 
	{7, 742}, 		// T 
	{7, 756}, 		// U 
	{8, 770}, 		// V 
	{11, 784}, 		// W 
	{8, 812}, 		// X 
	{7, 826}, 		// Y 
	{6, 840}, 		// Z 
	{2, 854}, 		// [ 
	{5, 868}, 		// \ 
	{2, 882}, 		// ] 
	{5, 896}, 		// ^ 
	{6, 910}, 		// _ 
	{2, 924}, 		// ` 
	{5, 938}, 		// a 
	{5, 952}, 		// b 
	{5, 966}, 		// c 
	{5, 980}, 		// d 
	{5, 994}, 		// e 
	{4, 1008}, 		// f 
	{5, 1022}, 		// g 
	{5, 1036}, 		// h 
	{1, 1050}, 		// i 
	{3, 1064}, 		// j 
	{5, 1078}, 		// k 
	{1, 1092}, 		// l 
	{10, 1106}, 	// m 
	{5, 1134}, 		// n 
	{7, 1148}, 		// o 
	{5, 1162}, 		// p 
	{5, 1176}, 		// q 
	{4, 1190}, 		// r 
	{5, 1204}, 		// s 
	{4, 1218}, 		// t 
	{5, 1232}, 		// u 
	{6, 1246}, 		// v 
	{9, 1260}, 		// w 
	{6, 1288}, 		// x 
	{6, 1302}, 		// y 
	{5, 1316}, 		// z 
	{4, 1330}, 		// { 
	{1, 1344}, 		// | 
	{4, 1358}, 		// } 
	{7, 1372}, 		// ~ 
};

// Font information for Roboto Light 10pt
const FONT_INFO robotoLight_10ptFontInfo =
{
	14, //  Character height
	'!', //  Start character
	'~', //  End character
	2, //  Width, in pixels, of space character
	robotoLight_10ptDescriptors, //  Character descriptor array
	robotoLight_10ptBitmaps, //  Character bitmap array
};
