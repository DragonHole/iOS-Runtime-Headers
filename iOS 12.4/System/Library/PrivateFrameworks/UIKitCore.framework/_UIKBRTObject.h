/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:22 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface _UIKBRTObject : NSObject {

	NSMutableArray* _owner;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
-(id)owner;
-(void)setOwner:(id)arg1 ;
-(id)previousEntry;
-(id)nextEntry;
@end

