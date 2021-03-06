/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:19 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface WFDatabaseAccessResourceState : NSObject {

	NSString* _persistentIdentifier;
	NSData* _perWorkflowStateData;

}

@property (nonatomic,readonly) NSString * persistentIdentifier;              //@synthesize persistentIdentifier=_persistentIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * perWorkflowStateData;                //@synthesize perWorkflowStateData=_perWorkflowStateData - In the implementation block
-(NSString *)persistentIdentifier;
-(id)initWithPersistentIdentifier:(id)arg1 perWorkflowStateData:(id)arg2 ;
-(NSData *)perWorkflowStateData;
@end

