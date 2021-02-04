/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:58 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAHLWorkoutState;

@interface SAHLSetWorkoutState : SADomainCommand

@property (nonatomic,retain) SAHLWorkoutState * targetWorkoutState; 
+(id)setWorkoutState;
+(id)setWorkoutStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SAHLWorkoutState *)targetWorkoutState;
-(void)setTargetWorkoutState:(SAHLWorkoutState *)arg1 ;
-(id)groupIdentifier;
@end
