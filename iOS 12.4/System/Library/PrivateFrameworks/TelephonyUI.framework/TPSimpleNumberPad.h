/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:41 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <TelephonyUI/TPNumberPad.h>

@protocol TPSimpleNumberPadDelegate;
@class UIButton;

@interface TPSimpleNumberPad : TPNumberPad {

	UIButton* _deleteButton;
	BOOL _showsDeleteButton;
	id<TPSimpleNumberPadDelegate> _delegate;

}

@property (assign) id<TPSimpleNumberPadDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButton;                    //@synthesize showsDeleteButton=_showsDeleteButton - In the implementation block
+(id)_numberPadCharacters;
-(void)buttonUp:(id)arg1 ;
-(Class)numberPadButtonClass;
-(void)setNumberButtonsEnabled:(BOOL)arg1 ;
-(void)_deleteButtonClicked:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithButtons:(id)arg1 ;
-(void)_updateDeleteButton;
-(BOOL)showsDeleteButton;
-(void)setShowsDeleteButton:(BOOL)arg1 ;
-(void)setDelegate:(id<TPSimpleNumberPadDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<TPSimpleNumberPadDelegate>)delegate;
@end
