/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSString;

@interface SASSetAudioDuckingDelay : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * duckingEventSyncDelay; 
@property (nonatomic,copy) NSNumber * preTriggerToDuckingEndDuration; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setAudioDuckingDelay;
+(id)setAudioDuckingDelayWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)duckingEventSyncDelay;
-(void)setDuckingEventSyncDelay:(NSNumber *)arg1 ;
-(NSNumber *)preTriggerToDuckingEndDuration;
-(void)setPreTriggerToDuckingEndDuration:(NSNumber *)arg1 ;
-(id)groupIdentifier;
@end
