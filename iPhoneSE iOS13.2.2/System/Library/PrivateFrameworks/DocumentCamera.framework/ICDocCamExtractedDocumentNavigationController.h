/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:11 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UINavigationController.h>
#import <libobjc.A.dylib/DCUnsavedDataDelegate.h>

@class NSString;

@interface ICDocCamExtractedDocumentNavigationController : UINavigationController <DCUnsavedDataDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(void)didReceiveMemoryWarning;
-(void)prepareForDismissal;
-(id)initWithDelegate:(id)arg1 documentInfoCollection:(id)arg2 imageCache:(id)arg3 currentIndex:(long long)arg4 mode:(int)arg5 ;
@end

