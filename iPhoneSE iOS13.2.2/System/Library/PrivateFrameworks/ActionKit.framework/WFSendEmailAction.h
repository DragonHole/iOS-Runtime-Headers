/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:19:52 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleCustomIntentAction.h>

@interface WFSendEmailAction : WFHandleCustomIntentAction
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(void)resolveSlot:(id)arg1 withProcessedValue:(id)arg2 parameter:(id)arg3 input:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)generatedAccessResource;
-(id)serializedParametersForDonatedIntent:(id)arg1 allowDroppingUnconfigurableValues:(BOOL)arg2 ;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(BOOL)populatesInputFromInputParameter;
-(void)getRecipientsFromParameterKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateContentForIntents:(/*^block*/id)arg1 ;
-(void)generateFilesFromCollection:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)generateEmailFromInput:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

