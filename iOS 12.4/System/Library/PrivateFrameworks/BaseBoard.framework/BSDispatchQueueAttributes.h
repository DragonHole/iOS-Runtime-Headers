/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:18:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue_attr;
@class NSObject;

@interface BSDispatchQueueAttributes : NSObject {

	NSObject*<OS_dispatch_queue_attr> _attrs;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue_attr> attributes;              //@synthesize attrs=_attrs - In the implementation block
+(id)_attributesWithAttributes:(id)arg1 ;
+(id)serial;
+(id)concurrent;
-(id)autoreleaseFrequency:(unsigned long long)arg1 ;
-(id)inactive;
-(id)serviceClass:(unsigned)arg1 ;
-(NSObject*<OS_dispatch_queue_attr>)attributes;
-(void)setAttributes:(NSObject*<OS_dispatch_queue_attr>)arg1 ;
@end

