/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:47 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
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
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_start;
-(void)_stop;
-(void)expire;
-(void)startExpiring:(id)arg1 cache:(id)arg2 ;
-(void)stopExpiring:(id)arg1 cache:(id)arg2 ;
@end

