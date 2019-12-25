#include <string.h>
#include <stdarg.h>
#include <stdlib.h>    
#include <stdint.h>        
    
    

uint8_t btc_icon_bitmap[72] = 
{   
    0x00, 0XCC, 0X00, //        ##  ##      
    0x00, 0XCC, 0X00, //        ##  ##      
    0x00, 0XCC, 0X00, //        ##  ##      
    0x00, 0XCC, 0X00, //        ##  ##      
    0x0F, 0XFF, 0X00, //    ############    
    0x0F, 0XFF, 0XC0, //    ##############  
    0x01, 0XC1, 0XC0, //       ###     ###  
    0x01, 0XC0, 0XE0, //       ###      ### 
    0x01, 0XC0, 0XE0, //       ###      ### 
    0x01, 0XC0, 0XC0, //       ###      ##  
    0x01, 0XC1, 0X80, //       ###     ##   
    0x01, 0XFF, 0X80, //       ##########   
    0x01, 0XC3, 0XE0, //       ###    ##### 
    0x01, 0XC0, 0XF0, //       ###      ####
    0x01, 0XC0, 0X70, //       ###       ###
    0x01, 0XC0, 0X70, //       ###       ###
    0x01, 0XC0, 0X70, //       ###       ###
    0x01, 0XC0, 0XE0, //       ###      ### 
    0x0F, 0XFF, 0XC0, //    ##############  
    0x0F, 0XFF, 0X00, //    ############    
    0x00, 0XCC, 0X00, //        ##  ##      
    0x00, 0XCC, 0X00, //        ##  ##      
    0x00, 0XCC, 0X00, //        ##  ##      
    0x00, 0XCC, 0X00, //        ##  ##   
};    
    
    
    
uint8_t eth_icon_bitmap[72] = 
{   
    0x00, 0x00, 0x00, //
    0x00, 0x08, 0x00, //           #          
    0x00, 0x1C, 0x00, //          ###         
    0x00, 0x3E, 0x00, //         #####        
    0x00, 0x7F, 0x00, //        #######       
    0x00, 0xFF, 0x80, //       #########      
    0x01, 0xFF, 0xC0, //      ###########     
    0x03, 0xFF, 0xE0, //     ############# 
    0x07, 0xFF, 0xF0, //    ###############  
    0x0F, 0xFF, 0xF8, //   #################
    0x0F, 0xFF, 0xF8, //   ################# 	
    0x07, 0xFF, 0xF0, //    ###############  
    0x03, 0xFF, 0xE0, //     ############# 	
    0x01, 0xFF, 0xC0, //      ###########   
    0x08, 0x7F, 0x08, //   #    #######    #
    0x06, 0x3E, 0x30, //    ##   #####   ##
    0x03, 0x88, 0xE0, //     ###   #   ### 
    0x01, 0xE3, 0xC0, //      ####   ####
    0x00, 0xFF, 0x80, //       #########          
    0x00, 0x7F, 0x00, //        ####### 
    0x00, 0x3E, 0x00, //         #####
    0x00, 0x1C, 0x00, //          ###
    0x00, 0x08, 0x00, //           #
    0x00, 0x00, 0x00, //

};

uint8_t xrp_icon_bitmap[72] = 
{   
	0xE0, 0x00, 0x07, // ###                  ###
	0xF0, 0x00, 0x0F, // ####                ####
	0xF8, 0x00, 0x1F, // #####              #####
	0x7C, 0x00, 0x3E, //  #####            ##### 
	0x3E, 0x00, 0x7C, //   #####          #####  
	0x1F, 0x00, 0xF8, //    #####        #####   
	0x0F, 0x81, 0xF0, //     #####      #####    
	0x07, 0xC3, 0xE0, //      #####    #####     
	0x03, 0xFF, 0xC0, //       ############      
	0x01, 0xFF, 0x80, //        ##########       
	0x00, 0x7E, 0x00, //          ######         
	0x00, 0x00, 0x00, //                         
	0x00, 0x00, 0x00, //                         
	0x00, 0x7E, 0x00, //          ######         
	0x01, 0xFF, 0x80, //        ##########       
	0x03, 0xFF, 0xC0, //       ############      
	0x07, 0xC3, 0xE0, //      #####    #####     
	0x0F, 0x81, 0xF0, //     #####      #####    
	0x1F, 0x00, 0xF8, //    #####        #####   
	0x3E, 0x00, 0x7C, //   #####          #####  
	0x7C, 0x00, 0x3E, //  #####            ##### 
	0xF8, 0x00, 0x1F, // #####              #####
	0xF0, 0x00, 0x0F, // ####                ####
	0xE0, 0x00, 0x07, // ###                  ###
};

uint8_t ltc_icon_bitmap[72] = 
{   
    0x00, 0x3E, 0x00, //       #####       
    0x00, 0x3C, 0x00, //       ####        
    0x00, 0x3C, 0x00, //       ####        
    0x00, 0x3C, 0x00, //       ####        
    0x00, 0x7C, 0x00, //      #####        
    0x00, 0x7C, 0x10, //      #####     #  
    0x00, 0x78, 0x20, //      ####     #   
    0x00, 0x78, 0xE0, //      ####   ###   
    0x00, 0xF9, 0xC0, //     #####  ###    
    0x00, 0xFF, 0x80, //     #########     
    0x00, 0xFF, 0x00, //     ########      
    0x00, 0xFC, 0x00, //     ######        
    0x00, 0xF8, 0x00, //     #####         
    0x01, 0xF0, 0x00, //    #####          
    0x03, 0xF0, 0x00, //   ######          
    0x07, 0xE0, 0x00, //  ######           
    0x0F, 0xE0, 0x00, // #######           
    0x0B, 0xE0, 0x00, // # #####           
    0x03, 0xE0, 0x00, //   #####           
    0x03, 0xE0, 0x00, //   #####           
    0x03, 0xFF, 0xFC, //   ################
    0x03, 0xFF, 0xFC, //   ################
    0x03, 0xFF, 0xFC, //   ################
    0x03, 0xFF, 0xFC, //   ################
};

// color_back = GRAY_75;
// color = 0x00364D;
uint8_t grs_icon_bitmap[72] = 
{   
	0x00, 0xFF, 0x80, //         #########       
	0x03, 0xFF, 0xE0, //       #############     
	0x0F, 0xFF, 0xF0, //     ################    
	0x1F, 0xFE, 0x38, //    ############   ###   
	0x3F, 0xFE, 0x9C, //   ############# #  ###  
	0x7F, 0xFF, 0x9E, //  ################  #### 
	0x7F, 0xFF, 0x3E, //  ###############  ##### 
	0xFF, 0xC2, 0x6F, // ##########    #  ## ####
	0xFF, 0x18, 0x0F, // ########   ##       ####
	0xFF, 0x3C, 0xFF, // ########  ####  ########
	0xFF, 0x3C, 0xFF, // ########  ####  ########
	0xFF, 0x3C, 0xFF, // ########  ####  ########
	0xFF, 0x3C, 0xFF, // ########  ####  ########
	0xFF, 0x3C, 0xFF, // ########  ####  ########
	0xFF, 0x18, 0xFF, // ########   ##   ########
	0xFF, 0x01, 0xFF, // ########       #########
	0xFF, 0x3F, 0xFF, // ########  ##############
	0x7E, 0x7F, 0xFE, //  ######  ############## 
	0x7E, 0x7F, 0xFE, //  ######  ############## 
	0x3E, 0x00, 0x3C, //   #####           ####  
	0x1E, 0x7F, 0x38, //    ####  #######  ###   
	0x0E, 0xFF, 0xB0, //     ### ######### ##    
	0x06, 0xFF, 0x80, //      ## #########       
	0x00, 0x7F, 0x00, //          #######     
};    
                
uint8_t bnb_icon_bitmap[72] = 
{   
    0x00, 0x18, 0x00, //            ##           
    0x00, 0x3C, 0x00, //           ####          
    0x00, 0x7E, 0x00, //          ######         
    0x00, 0xFF, 0x00, //         ########        
    0x01, 0xFF, 0x80, //        ##########       
    0x03, 0xFF, 0xC0, //       ############      
    0x07, 0xE7, 0xE0, //      ######  ######     
    0x0F, 0xC3, 0xF0, //     ######    ######    
    0x07, 0x81, 0xE0, //      ####      ####     
    0x23, 0x18, 0xC4, //   #   ##   ##   ##   #  
    0x70, 0x3C, 0x0E, //  ###      ####      ### 
    0xF8, 0x7E, 0x1F, // #####    ######    #####
    0xF8, 0x7E, 0x1F, // #####    ######    #####
    0x70, 0x3C, 0x0E, //  ###      ####      ### 
    0x23, 0x18, 0xC4, //   #   ##   ##   ##   #  
    0x07, 0x81, 0xE0, //      ####      ####     
    0x0F, 0xC3, 0xF0, //     ######    ######    
    0x07, 0xE7, 0xE0, //      ######  ######     
    0x03, 0xFF, 0xC0, //       ############      
    0x01, 0xFF, 0x80, //        ##########       
    0x00, 0xFF, 0x00, //         ########        
    0x00, 0x7E, 0x00, //          ######         
    0x00, 0x3C, 0x00, //           ####          
    0x00, 0x18, 0x00, //            ## 
};               
               
uint8_t token_ERC20_icon_bitmap[72] = 
{                       
    0x00, 0x00, 0x00, //             
    0xFC, 0xFC, 0x3E, // ######  ######    ##### 
    0xFC, 0xFE, 0x7F, // ######  #######  #######
    0xC0, 0xC6, 0xE3, // ##      ##   ## ###   ##
    0xC0, 0xC6, 0xC0, // ##      ##   ## ##      
    0xFC, 0xFE, 0xC0, // ######  ####### ##      
    0xFC, 0xFE, 0xC0, // ######  ####### ##      
    0xC0, 0xF8, 0xC0, // ##      #####   ##      
    0xC0, 0xDC, 0xE3, // ##      ## ###  ###   ##
    0xFC, 0xCE, 0x7F, // ######  ##  ###  #######
    0xFC, 0xC6, 0x3E, // ######  ##   ##   ##### 
    0x00, 0x00, 0x00, //   
    0x00, 0x00, 0x00, //     
    0x00, 0x00, 0x00, //    
    0x03, 0xC7, 0x80, //       ####   ####       
    0x07, 0xEF, 0xC0, //      ###### ######      
    0x06, 0x6C, 0xC0, //      ##  ## ##  ##      
    0x06, 0x6C, 0xC0, //      ##  ## ##  ##      
    0x00, 0x6C, 0xC0, //          ## ##  ##      
    0x00, 0xEC, 0xC0, //         ### ##  ##      
    0x01, 0xCC, 0xC0, //        ###  ##  ##      
    0x03, 0x8C, 0xC0, //       ###   ##  ##      
    0x07, 0xEF, 0xC0, //      ###### ######      
    0x07, 0xE7, 0x80, //      ######  ####   
};  
/*
uint8_t dgb_icon_bitmap[72] = 
{   
	0x00, 0x7E, 0x00, //          ######         
	0x01, 0xFF, 0x80, //        ##########       
	0x07, 0xFF, 0xE0, //      ##############     
	0x0F, 0xFF, 0xF0, //     ################    
	0x1F, 0xE4, 0xF8, //    ########  #  #####   
	0x3F, 0xE4, 0xFC, //   #########  #  ######  
	0x3E, 0x00, 0x3C, //   #####           ####  
	0x7C, 0x00, 0x1E, //  #####             #### 
	0x78, 0x00, 0x0E, //  ####               ### 
	0xFF, 0xFF, 0x0F, // ################    ####
	0xFF, 0x1F, 0x0F, // ########   #####    ####
	0xFF, 0x1E, 0x1F, // ########   ####    #####
	0xFE, 0x3E, 0x1F, // #######   #####    #####
	0xFE, 0x3C, 0x3F, // #######   ####    ######
	0xFC, 0x78, 0x7F, // ######   ####    #######
	0x7C, 0x60, 0xFE, //  #####   ##     ####### 
	0x78, 0x01, 0xFE, //  ####          ######## 
	0x38, 0x07, 0xFC, //   ###        #########  
	0x3C, 0x9F, 0xFC, //   ####  #  ###########  
	0x1C, 0x9F, 0xF8, //    ###  #  ##########   
	0x0F, 0xFF, 0xF0, //     ################    
	0x07, 0xFF, 0xE0, //      ##############     
	0x01, 0xFF, 0x80, //        ##########       
	0x00, 0x7E, 0x00, //          ######        
};   
*/
uint8_t dgb_icon_bitmap[72] = 
{ 
	0x00, 0x1D, 0xC0, //            ### ###      
	0x00, 0x1D, 0xC0, //            ### ###      
	0x1F, 0xFF, 0xF0, //    #################    
	0x3F, 0xFF, 0xFC, //   ####################  
	0x7F, 0xFF, 0xFE, //  ###################### 
	0xFF, 0xFF, 0xFF, // ########################
	0x00, 0x00, 0xFF, //                 ########
	0x00, 0x00, 0x3F, //                   ######
	0x03, 0xE0, 0x3F, //       #####       ######
	0x07, 0xE0, 0x3F, //      ######       ######
	0x07, 0xE0, 0x3F, //      ######       ######
	0x07, 0xC0, 0x7E, //      #####       ###### 
	0x0F, 0xC0, 0x7E, //     ######       ###### 
	0x0F, 0xC0, 0xFC, //     ######      ######  
	0x1F, 0x80, 0xFC, //    ######       ######  
	0x1F, 0x81, 0xF8, //    ######      ######   
	0x1F, 0x07, 0xF0, //    #####     #######    
	0x3F, 0x1F, 0xE0, //   ######   ########     
	0x3F, 0xFF, 0xC0, //   ################      
	0x7F, 0xFF, 0x00, //  ###############        
	0x7F, 0xFC, 0x00, //  #############          
	0xFF, 0xE0, 0x00, // ###########             
	0x1D, 0xC0, 0x00, //    ### ###              
	0x1D, 0xC0, 0x00, //    ### ###  
}; 

uint8_t xlm_icon_bitmap[72] = 
{
    0x00, 0x00, 0x00, //
    0x00, 0x00, 0x00, //
	0x00, 0xFF, 0x00, //         ########        
	0x03, 0xFF, 0xC1, //       ############     #
	0x07, 0x01, 0x87, //      ###       ##    ###
	0x06, 0x00, 0x1E, //      ##            #### 
	0x1C, 0x00, 0x78, //    ###           ####   
	0x18, 0x01, 0xE1, //    ##          ####    #
	0x38, 0x07, 0x87, //   ###        ####    ###
	0x30, 0x1E, 0x1E, //   ##       ####    #### 
	0x30, 0x78, 0x7C, //   ##     ####    #####  
	0x31, 0xE1, 0xEC, //   ##   ####    #### ##  
	0x37, 0x87, 0x8C, //   ## ####    ####   ##  
	0x3E, 0x1E, 0x0C, //   #####    ####     ##  
	0x78, 0x78, 0x0C, //  ####    ####       ##  
	0xE1, 0xE0, 0x1C, // ###    ####        ###  
	0x87, 0x80, 0x18, // #    ####          ##   
	0x1E, 0x00, 0x38, //    ####           ###   
	0x78, 0x00, 0x70, //  ####            ###    
	0xE1, 0x81, 0xE0, // ###    ##      ####     
	0x83, 0xFF, 0xC0, // #     ############      
	0x00, 0xFF, 0x00, //         ########   
    0x00, 0x00, 0x00, //
    0x00, 0x00, 0x00, //
};

uint8_t dash_icon_bitmap[72] = 
{
    0x00, 0x00, 0x00, //
    0x00, 0x00, 0x00, //
	0x01, 0xFF, 0xE0, //        ############     
	0x03, 0xFF, 0xFC, //       ################  
	0x03, 0xFF, 0xFE, //       ################# 
	0x03, 0xFF, 0xFE, //       ################# 
	0x00, 0x00, 0xFF, //                 ########
	0x00, 0x00, 0x3F, //                   ######
	0x00, 0x00, 0x1F, //                    #####
	0x00, 0x00, 0x1F, //                    #####
	0x7F, 0xF0, 0x1F, //  ###########       #####
	0x7F, 0xF0, 0x1F, //  ###########       #####
	0xFF, 0xE0, 0x1F, // ###########        #####
	0xFF, 0xE0, 0x3E, // ###########       ##### 
	0x00, 0x00, 0x3E, //                   ##### 
	0x00, 0x00, 0x3E, //                   ##### 
	0x00, 0x00, 0xFC, //                 ######  
	0x00, 0x03, 0xFC, //               ########  
	0x07, 0xFF, 0xF8, //      ################   
	0x0F, 0xFF, 0xF0, //     ################    
	0x0F, 0xFF, 0xE0, //     ###############     
	0x0F, 0xFF, 0x00, //     ############  
    0x00, 0x00, 0x00, //
    0x00, 0x00, 0x00, //
};

uint8_t doge_icon_bitmap[72] =
{
	0x1F, 0xFF, 0x00, //    #############        
	0x1F, 0xFF, 0xC0, //    ###############      
	0x1F, 0xFF, 0xF0, //    #################    
	0x1E, 0x03, 0xF8, //    ####       #######   
	0x1E, 0x00, 0xF8, //    ####         #####   
	0x1E, 0x00, 0x7C, //    ####          #####  
	0x1E, 0x00, 0x3C, //    ####           ####  
	0x1E, 0x00, 0x1E, //    ####            #### 
	0x1E, 0x00, 0x1E, //    ####            #### 
	0x1E, 0x00, 0x1E, //    ####            #### 
	0x7F, 0xF8, 0x1E, //  ############      #### 
	0x7F, 0xF8, 0x1E, //  ############      #### 
	0x7F, 0xF8, 0x1E, //  ############      #### 
	0x1E, 0x00, 0x1E, //    ####            #### 
	0x1E, 0x00, 0x1E, //    ####            #### 
	0x1E, 0x00, 0x1E, //    ####            #### 
	0x1E, 0x00, 0x1E, //    ####            #### 
	0x1E, 0x00, 0x3C, //    ####           ####  
	0x1E, 0x00, 0x7C, //    ####          #####  
	0x1E, 0x00, 0xF8, //    ####         #####   
	0x1E, 0x03, 0xF8, //    ####       #######   
	0x1F, 0xFF, 0xF0, //    #################    
	0x1F, 0xFF, 0xC0, //    ###############      
	0x1F, 0xFF, 0x00, //    #############        
};

uint8_t token_dencent_icon_bitmap[72] =
{
	0x38, 0x00, 0x00, //   ###                       
	0x7E, 0x00, 0x00, //  ######                     
	0xFF, 0x80, 0x00, // #########                   
	0xFF, 0xC0, 0x00, // ##########                  
	0xFF, 0xF0, 0x00, // ############                
	0xFF, 0xFC, 0x00, // ##############              
	0xFF, 0xFE, 0x00, // ###############             
	0xFF, 0xFF, 0x00, // ################            
	0xFF, 0xFF, 0x00, // ################            
	0xFF, 0xFF, 0x00, // ################            
	0xFF, 0xFC, 0x00, // ##############              
	0xFF, 0xF8, 0x00, // #############               
	0xFF, 0xE0, 0x00, // ###########                 
	0xFF, 0x80, 0x1C, // #########          ###  
	0xFF, 0x00, 0x7F, // ########         #######
	0x3C, 0x00, 0xFF, //   ####          ########
	0x00, 0x03, 0xFF, //               ##########
	0x00, 0x07, 0xFF, //              ###########
	0x00, 0x07, 0xFF, //              ###########
	0x00, 0x07, 0xFF, //              ###########
	0x00, 0x01, 0xFF, //                #########
	0x00, 0x00, 0x7F, //                  #######
	0x00, 0x00, 0x3E, //                   ##### 
	0x00, 0x00, 0x0C, //                     ##  
};
