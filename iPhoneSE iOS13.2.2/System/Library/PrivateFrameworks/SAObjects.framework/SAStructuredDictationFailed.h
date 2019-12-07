/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 7, 2019 at 3:15:17 AM Pacific Standard Time
* Operating System: Version 13.2.3 (Build 17B111)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SAStructuredDictationFailed : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * dialogIdentifier; 
@property (assign,nonatomic) long long errorCode; 
@property (nonatomic,copy) NSString * recognition; 
@property (nonatomic,copy) NSString * userFacingReasonDescription; 
@property (nonatomic,copy) NSString * userFacingReasonTitle; 
+(id)structuredDictationFailed;
+(id)structuredDictationFailedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)af_dialogIdentifier;
-(id)groupIdentifier;
-(NSString *)recognition;
-(long long)errorCode;
-(void)setErrorCode:(long long)arg1 ;
-(id)encodedClassName;
-(void)setDialogIdentifier:(NSString *)arg1 ;
-(NSString *)dialogIdentifier;
-(BOOL)requiresResponse;
-(void)setRecognition:(NSString *)arg1 ;
-(NSString *)userFacingReasonDescription;
-(void)setUserFacingReasonDescription:(NSString *)arg1 ;
-(NSString *)userFacingReasonTitle;
-(void)setUserFacingReasonTitle:(NSString *)arg1 ;
@end
