/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:12 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASRecognition, NSString;

@interface SAUIShowSpeechAlternatives : SABaseClientBoundCommand

@property (nonatomic,retain) SASRecognition * recognition; 
@property (nonatomic,copy) NSString * requestId; 
@property (nonatomic,copy) NSString * title; 
+(id)showSpeechAlternatives;
+(id)showSpeechAlternativesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)requestId;
-(SASRecognition *)recognition;
-(id)encodedClassName;
-(void)setRequestId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
-(void)setRecognition:(SASRecognition *)arg1 ;
@end

