/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:20:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface TSULogCatThreadSafeMutableSet : NSObject {

	NSMutableSet* _objects;
	NSObject*<OS_dispatch_queue> _logCatQueue;

}
-(id)init;
-(id)description;
-(unsigned long long)count;
-(void)addObject:(id)arg1 ;
-(void)removeObject:(id)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(BOOL)containsObject:(id)arg1 ;
-(id)allObjects;
-(id)immutableSet;
@end

