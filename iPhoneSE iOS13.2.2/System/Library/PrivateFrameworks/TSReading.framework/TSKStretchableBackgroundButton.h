/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:17:08 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@interface TSKStretchableBackgroundButton : UIButton {

	long long mBackgroundTopCapHeight;
	long long mBackgroundLeftCapWidth;

}

@property (assign,nonatomic) long long backgroundTopCapHeight; 
@property (assign,nonatomic) long long backgroundLeftCapWidth; 
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)awakeFromNib;
-(void)p_resetBackgroundImage;
-(void)setBackgroundTopLeftCapHeight:(long long)arg1 width:(long long)arg2 ;
-(void)guessBackgroundTopLeftCapSize;
-(void)p_resetBackgroundImageForState:(unsigned long long)arg1 ;
-(void)setBackgroundTopCapHeight:(long long)arg1 ;
-(void)setBackgroundLeftCapWidth:(long long)arg1 ;
-(long long)backgroundTopCapHeight;
-(long long)backgroundLeftCapWidth;
@end

