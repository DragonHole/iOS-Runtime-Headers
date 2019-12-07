/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:51 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIDragInteractionEffect.h>

@class NSMapTable, NSString;

@interface _UIDragSourceLiftEffect : NSObject <UIDragInteractionEffect> {

	NSMapTable* _liftOperationByContext;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)interaction:(id)arg1 didChangeWithContext:(id)arg2 ;
-(void)_addworkaroundForPropertyAnimator:(id)arg1 inView:(id)arg2 ;
-(void)_setInteractionEffectsLifted:(BOOL)arg1 withOperation:(id)arg2 ;
-(void)_installInteractionPlattersForOperation:(id)arg1 ;
-(void)_uninstallInteractionPlattersForOperation:(id)arg1 ;
@end
