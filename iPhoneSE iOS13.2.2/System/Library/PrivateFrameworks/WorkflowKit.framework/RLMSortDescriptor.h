/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RLMSortDescriptor : NSObject {

	BOOL _ascending;
	NSString* _keyPath;

}

@property (nonatomic,readonly) NSString * keyPath;              //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,readonly) BOOL ascending;                  //@synthesize ascending=_ascending - In the implementation block
+(id)sortDescriptorWithKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(NSString *)keyPath;
-(BOOL)ascending;
-(id)reversedSortDescriptor;
@end

