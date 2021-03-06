/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:06 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/CXCallObserverDelegate.h>

@class CXCallObserver, NSString;

@interface HMDPhoneCallObserver : HMFObject <CXCallObserverDelegate> {

	CXCallObserver* _observer;

}

@property (nonatomic,retain) CXCallObserver * observer;              //@synthesize observer=_observer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedPhoneCallObserver;
-(BOOL)hasActiveCalls;
-(void)startObserving;
-(BOOL)isActiveCall:(id)arg1 ;
-(void)callObserver:(id)arg1 callChanged:(id)arg2 ;
-(id)init;
-(void)setObserver:(CXCallObserver *)arg1 ;
-(CXCallObserver *)observer;
@end

