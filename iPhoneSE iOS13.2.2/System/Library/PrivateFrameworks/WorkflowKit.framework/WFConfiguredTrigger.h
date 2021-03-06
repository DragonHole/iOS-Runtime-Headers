/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:22 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFDatabaseObjectDescriptor.h>

@class NSString, WFTrigger;

@interface WFConfiguredTrigger : WFDatabaseObjectDescriptor {

	BOOL _shouldPrompt;
	BOOL _enabled;
	NSString* _workflowID;
	WFTrigger* _trigger;

}

@property (nonatomic,readonly) NSString * workflowID;                      //@synthesize workflowID=_workflowID - In the implementation block
@property (nonatomic,readonly) WFTrigger * trigger;                        //@synthesize trigger=_trigger - In the implementation block
@property (nonatomic,readonly) BOOL shouldPrompt;                          //@synthesize shouldPrompt=_shouldPrompt - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(BOOL)isEnabled;
-(WFTrigger *)trigger;
-(NSString *)workflowID;
-(BOOL)shouldPrompt;
-(id)initWithIdentifier:(id)arg1 workflowID:(id)arg2 trigger:(id)arg3 shouldPrompt:(BOOL)arg4 enabled:(BOOL)arg5 ;
@end

