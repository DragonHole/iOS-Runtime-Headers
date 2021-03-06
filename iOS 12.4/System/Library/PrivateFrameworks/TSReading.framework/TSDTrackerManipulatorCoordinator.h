/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDTrackerManipulator;
@class NSMutableSet, NSObject;

@interface TSDTrackerManipulatorCoordinator : NSObject {

	NSMutableSet* mRegisteredTMs;
	NSObject*<TSDTrackerManipulator> mControllingTM;

}

@property (nonatomic,readonly) NSObject*<TSDTrackerManipulator> controllingTM; 
+(void)p_removeDynamicSubclass:(id)arg1 ;
+(void)p_dynamicallySubclassGRForNotification:(id)arg1 ;
-(void)registerTrackerManipulator:(id)arg1 ;
-(BOOL)takeControlWithTrackerManipulator:(id)arg1 ;
-(NSObject*<TSDTrackerManipulator>)controllingTM;
-(void)operationDidEnd;
-(void)operationWillEnd;
-(BOOL)hasRegisteredTrackerManipulator:(id)arg1 ;
-(void)p_notifyControlChange;
-(BOOL)relinquishTrackerManipulatorControl:(id)arg1 ;
-(void)unregisterTrackerManipulator:(id)arg1 ;
-(id)init;
-(void)dealloc;
@end

