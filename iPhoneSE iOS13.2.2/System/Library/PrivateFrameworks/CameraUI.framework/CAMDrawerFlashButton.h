/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:04 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CAMControlDrawerMenuButton.h>

@interface CAMDrawerFlashButton : CAMControlDrawerMenuButton {

	BOOL _flashUnavailable;
	long long _flashMode;

}

@property (assign,nonatomic) long long flashMode;                                          //@synthesize flashMode=_flashMode - In the implementation block
@property (assign,getter=isFlashUnavailable,nonatomic) BOOL flashUnavailable;              //@synthesize flashUnavailable=_flashUnavailable - In the implementation block
-(long long)controlType;
-(long long)flashMode;
-(void)setFlashMode:(long long)arg1 ;
-(BOOL)isExpandable;
-(BOOL)isFlashUnavailable;
-(id)imageNameForCurrentState;
-(BOOL)shouldUseActiveTintForCurrentState;
-(void)setFlashUnavailable:(BOOL)arg1 ;
-(void)didSelectMenuItem:(id)arg1 ;
-(BOOL)isMenuItemSelected:(id)arg1 ;
-(id)loadMenuItems;
@end

