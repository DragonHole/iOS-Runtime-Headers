/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:12 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSMutableArray;

@interface TSUAggregateEnumerator : NSEnumerator {

	NSMutableArray* _objects;

}
+(id)aggregateEnumeratorWithObjects:(id)arg1 ;
-(id)initWithFirstObject:(id)arg1 argumentList:(char*)arg2 ;
-(void)addObject:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)nextObject;
-(id)initWithObjects:(id)arg1 ;
@end

