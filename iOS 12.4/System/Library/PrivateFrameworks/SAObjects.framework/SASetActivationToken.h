/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:19:56 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSData, NSString;

@interface SASetActivationToken : SABaseClientBoundCommand

@property (nonatomic,copy) NSData * activationToken; 
@property (nonatomic,copy) NSString * language; 
+(id)setActivationToken;
+(id)setActivationTokenWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSData *)activationToken;
-(void)setActivationToken:(NSData *)arg1 ;
-(id)groupIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end
