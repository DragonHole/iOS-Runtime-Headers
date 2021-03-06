/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:15 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSNumber, NSString;

@interface SASExtractSpeechData : SABaseClientBoundCommand

@property (nonatomic,copy) NSNumber * endTime; 
@property (nonatomic,copy) NSString * speechRequestId; 
@property (nonatomic,copy) NSNumber * startTime; 
+(id)extractSpeechData;
+(id)extractSpeechDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)startTime;
-(NSNumber *)endTime;
-(void)setEndTime:(NSNumber *)arg1 ;
-(void)setStartTime:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)speechRequestId;
-(void)setSpeechRequestId:(NSString *)arg1 ;
@end

