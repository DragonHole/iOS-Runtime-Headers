/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFContentItemFilterAction.h>

@class NSString;

@interface WFFindHealthSamplesAction : WFContentItemFilterAction

@property (nonatomic,readonly) NSString * readableSampleType; 
-(id)query;
-(id)configurationData;
-(void)initializeParameters;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(void)finishRunningWithError:(id)arg1 ;
-(id)createStateForParameter:(id)arg1 fromSerializedRepresentation:(id)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(id)parameterDefinitions;
-(void)resourceAvailabilityChanged;
-(void)updateParameterVisibility;
-(NSString *)readableSampleType;
-(id)sampleTypeName;
-(void)updateSourcesForSampleType:(id)arg1 ;
-(void)finishRunningWithNoSamples;
@end
