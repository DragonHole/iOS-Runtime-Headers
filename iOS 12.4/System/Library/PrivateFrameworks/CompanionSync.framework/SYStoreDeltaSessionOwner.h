/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:21:50 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYStoreSessionOwner.h>

@class NSArray;

@interface SYStoreDeltaSessionOwner : SYStoreSessionOwner {

	NSArray* _changes;
	unsigned long long _currentIdx;

}

@property (nonatomic,readonly) unsigned long long changeCount; 
-(id)initWithChanges:(id)arg1 ;
-(long long)syncSession:(id)arg1 enqueueChanges:(/*^block*/id)arg2 error:(id*)arg3 ;
-(unsigned long long)changeCount;
@end

