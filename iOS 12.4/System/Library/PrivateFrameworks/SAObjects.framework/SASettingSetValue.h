/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:55 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingCommand.h>

@interface SASettingSetValue : SASettingCommand

@property (assign,nonatomic) BOOL dryRun; 
@property (assign,nonatomic) BOOL failOnSiriDisconnectWarnings; 
+(id)setValueWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)setValue;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)dryRun;
-(void)setDryRun:(BOOL)arg1 ;
-(BOOL)failOnSiriDisconnectWarnings;
-(void)setFailOnSiriDisconnectWarnings:(BOOL)arg1 ;
-(id)groupIdentifier;
@end

