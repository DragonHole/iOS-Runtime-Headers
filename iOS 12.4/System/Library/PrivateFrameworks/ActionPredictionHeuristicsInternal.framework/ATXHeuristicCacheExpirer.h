/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:27:13 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/ActionPredictionHeuristicsInternal.framework/ActionPredictionHeuristicsInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionPredictionHeuristicsInternal/ActionPredictionHeuristicsInternal-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableSet;

@interface ATXHeuristicCacheExpirer : NSObject <NSSecureCoding> {

	NSMutableSet* _expirationEntries;
	opaque_pthread_mutex_t _lock;

}
+(BOOL)supportsSecureCoding;
-(void)expire;
-(void)startExpiring:(id)arg1 cache:(id)arg2 ;
-(void)stopExpiring:(id)arg1 cache:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_start;
-(void)_stop;
@end

