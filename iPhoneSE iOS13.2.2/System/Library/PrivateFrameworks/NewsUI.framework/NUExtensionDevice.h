/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:36 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NUDevice.h>

@class UIScreen, UIViewController, NSString;

@interface NUExtensionDevice : NSObject <NUDevice> {

	UIScreen* _screen;
	UIViewController* _hostViewController;

}

@property (nonatomic,readonly) UIScreen * screen;                                         //@synthesize screen=_screen - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * hostViewController;              //@synthesize hostViewController=_hostViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isSplitScreen,nonatomic,readonly) BOOL splitScreen; 
-(UIScreen *)screen;
-(UIViewController *)hostViewController;
-(BOOL)isSplitScreen;
-(id)initWithScreen:(id)arg1 hostViewController:(id)arg2 ;
@end
