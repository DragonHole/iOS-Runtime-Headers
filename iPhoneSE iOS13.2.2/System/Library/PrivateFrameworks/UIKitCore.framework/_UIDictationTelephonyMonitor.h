/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:10:57 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, CXCallObserver, NSString;

@interface _UIDictationTelephonyMonitor : NSObject <CXCallObserverDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	CXCallObserver* _callObserver;
	BOOL _telephonyActivity;
	/*^block*/id _activityChanged;

}

@property (nonatomic,readonly) BOOL telephonyActivity;              //@synthesize telephonyActivity=_telephonyActivity - In the implementation block
@property (copy) id activityChanged;                                //@synthesize activityChanged=_activityChanged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)start;
-(void)_backgroundInit;
-(void)_backgroundReset;
-(id)activityChanged;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(BOOL)telephonyActivity;
-(void)setActivityChanged:(id)arg1 ;
@end
