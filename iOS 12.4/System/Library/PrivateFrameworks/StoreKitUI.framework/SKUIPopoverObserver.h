/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:27 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPopoverControllerDelegate.h>

@class UIPopoverController, NSString;

@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate> {

	UIPopoverController* _popoverController;
	SEL _selector;
	id _target;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithPopoverController:(id)arg1 ;
-(void)setTarget:(id)arg1 selector:(SEL)arg2 ;
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)dismissPopoverAnimated:(BOOL)arg1 ;
@end

