/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAIntentGroupIntentInvocationResponse.h>

@class NSArray, NSString;

@interface SAIntentGroupSupportedIntentResponse : SAIntentGroupIntentInvocationResponse

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * useCaseId; 
+(id)supportedIntentResponse;
+(id)supportedIntentResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)useCaseId;
-(void)setUseCaseId:(NSString *)arg1 ;
@end

