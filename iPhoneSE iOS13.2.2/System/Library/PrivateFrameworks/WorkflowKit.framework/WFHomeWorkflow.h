/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:16:20 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, WFWorkflow, HFTriggerActionsSetsUISummary, NSString, NSArray;

@interface WFHomeWorkflow : NSObject {

	NSData* _data;
	WFWorkflow* _workflow;
	HFTriggerActionsSetsUISummary* _actionSetsSummary;

}

@property (nonatomic,retain) WFWorkflow * workflow;                                          //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,retain) HFTriggerActionsSetsUISummary * actionSetsSummary;              //@synthesize actionSetsSummary=_actionSetsSummary - In the implementation block
@property (nonatomic,copy,readonly) NSData * data;                                           //@synthesize data=_data - In the implementation block
@property (nonatomic,copy,readonly) NSString * summaryString; 
@property (nonatomic,copy,readonly) NSArray * summaryIconNames; 
@property (nonatomic,copy,readonly) NSArray * summaryIconDescriptors; 
@property (nonatomic,readonly) BOOL requiresDeviceUnlock; 
-(id)debugDescription;
-(id)initWithData:(id)arg1 ;
-(NSData *)data;
-(WFWorkflow *)workflow;
-(void)setWorkflow:(WFWorkflow *)arg1 ;
-(NSString *)summaryString;
-(BOOL)requiresDeviceUnlock;
-(NSArray *)summaryIconNames;
-(NSArray *)summaryIconDescriptors;
-(HFTriggerActionsSetsUISummary *)actionSetsSummary;
-(id)triggerActionSetsBuilders;
-(id)actionSetsFromTriggerActionSetsBuilders:(id)arg1 ;
-(void)setActionSetsSummary:(HFTriggerActionsSetsUISummary *)arg1 ;
@end

