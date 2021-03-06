/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:18:01 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <CameraEditKit/CEKBadgeTextView.h>

@interface CAMFocusLockBadge : CEKBadgeTextView {

	BOOL _focusLocked;
	BOOL _exposureLocked;

}

@property (assign,getter=isFocusLocked,nonatomic) BOOL focusLocked;                    //@synthesize focusLocked=_focusLocked - In the implementation block
@property (assign,getter=isExposureLocked,nonatomic) BOOL exposureLocked;              //@synthesize exposureLocked=_exposureLocked - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateText;
-(void)setFocusLocked:(BOOL)arg1 ;
-(void)setExposureLocked:(BOOL)arg1 ;
-(BOOL)isFocusLocked;
-(BOOL)isExposureLocked;
@end

