/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:12:39 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INArchivedObject, NSString, NSNumber, NSArray;


@protocol INRunWorkflowIntentResponseExport <NSObject,JSExport>
@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) INArchivedObject * underlyingIntent; 
@property (nonatomic,copy) INArchivedObject * underlyingIntentResponse; 
@property (nonatomic,copy) NSString * utterance; 
@property (nonatomic,copy) NSNumber * waitingForResume; 
@property (nonatomic,copy) NSNumber * continueRunning; 
@property (nonatomic,copy) NSArray * steps; 
@property (nonatomic,copy) NSNumber * requestsIntentExecution; 
@required
-(long long)code;
-(NSArray *)steps;
-(void)setSteps:(id)arg1;
-(INArchivedObject *)underlyingIntent;
-(void)setUnderlyingIntent:(id)arg1;
-(INArchivedObject *)underlyingIntentResponse;
-(void)setUnderlyingIntentResponse:(id)arg1;
-(NSNumber *)continueRunning;
-(void)setContinueRunning:(id)arg1;
-(NSNumber *)requestsIntentExecution;
-(void)setRequestsIntentExecution:(id)arg1;
-(NSString *)utterance;
-(void)setUtterance:(id)arg1;
-(NSNumber *)waitingForResume;
-(void)setWaitingForResume:(id)arg1;

@end

