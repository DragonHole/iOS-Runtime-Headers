/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:42 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSMutableDictionary, NSString, NSTimer;

@interface GCAnalytics : NSObject {

	NSMutableDictionary* _controllersData;
	NSString* _bundleID;
	NSTimer* _eventPollTimer;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(id)getBundleID;
-(void)sendInputsPressedEvent:(const SCD_Struct_GC2*)arg1 ;
-(void)runInputPollTimer;
-(void)checkMultipleControllers;
-(void)publishController:(id)arg1 ;
-(void)unpublishController:(id)arg1 ;
-(void)onSiriMotionEnabled;
@end

