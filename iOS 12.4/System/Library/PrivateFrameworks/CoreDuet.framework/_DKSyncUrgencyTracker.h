/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:32 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface _DKSyncUrgencyTracker : NSObject {

	unsigned long long _urgency;
	NSMutableDictionary* _urgencies;

}
+(id)sharedInstance;
-(unsigned long long)currentUrgency;
-(void)updateUrgency:(unsigned long long)arg1 forClient:(id)arg2 ;
-(void)ageUrgencies;
-(void)recomputeUrgency;
-(unsigned long long)urgencyForClient:(id)arg1 ;
@end

