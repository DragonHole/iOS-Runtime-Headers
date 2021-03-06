/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:24:09 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableArray, NSMutableDictionary;

@interface BRNotificationQueue : NSObject <NSFastEnumeration> {

	NSMutableArray* _array;
	NSMutableArray* _callbacks;
	NSMutableDictionary* _index;
	unsigned long long _dequeued;

}

@property (nonatomic,readonly) unsigned long long count; 
-(void)_filterIndex:(id)arg1 ;
-(void)addNotification:(id)arg1 asDead:(BOOL)arg2 ;
-(void)addDequeueCallback:(/*^block*/id)arg1 ;
-(void)processDequeueCallbacks;
-(void)dequeue:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_BR10*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(unsigned long long)count;
-(id)description;
-(void)removeAllObjects;
@end

